#include <dataprotection.h>

/////////////////////////////
// Encrypt/Decrypt algorithm
////////////////////////////

string encrypt(string str, string key) {
    int sum = 0;
    int newAscii;

    size_t keyLength = key.length();
    size_t strLength = str.length();

    for (size_t i = 0; i < keyLength; i++) {
        sum += key[i];
    }

    for (size_t i = 0; i < strLength; i++) {
        newAscii = str[i] + (sum % (125-32));

        if (newAscii>125) {
            str[i] = 31 + (newAscii - 125);
        } else {
            str[i] = newAscii;
        }

    }

    for (size_t i = 0; i < strLength/2; i++) {
        str[i] = str[i] ^ str[strLength-i-1];
        str[strLength-i-1] = str[i] ^ str[strLength-i-1];
        str[i] = str[i] ^ str[strLength-i-1];
    }

    return str;
}

string decrypt(string str, string key) {
    int sum = 0;
    int newAscii;

    size_t keyLength = key.length();
    size_t strLength = str.length();

    for (size_t i = 0; i < strLength / 2; i++){
        str[i] = str[i] ^ str[strLength-i-1];
        str[strLength-i-1] = str[i] ^ str[strLength-i-1];
        str[i] = str[i] ^ str[strLength-i-1];
    }

    for (size_t i = 0; i < keyLength; i++){
        sum += key[i];
    }

    for (size_t i = 0; i < strLength; i++){
        newAscii = str[i] - (sum % (125-32));
        if (newAscii < 32) {
            str[i] = 126 - (32-newAscii);
        } else {
            str[i] = str[i]- (sum % (125-32));
        }
    }

    return str;
}

///////////////////////////
// CRC32 hashing algorithm
//////////////////////////

array<uint32_t, 256> generateCRC32Table() {
    array<uint32_t, 256> CRCTable;
    const uint32_t polynomial = 0xEDB88320;

    for (size_t i = 0; i < 256; ++i) {
        uint32_t crc = i;

        for (size_t j = 0; j < 8; ++j) {
            if (crc & 1) {
                crc = (crc >> 1) ^ polynomial;
            } else {
                crc >>= 1;
            }
        }

        CRCTable[i] = crc;
    }

    return CRCTable;
}

uint32_t hashPassword(const string& password, const string& salt) {
    const array<uint32_t, 256> CRCTable = generateCRC32Table();
    const string data = password + salt;
    const size_t dataLength = data.size();

    uint32_t crc32 = 0xFFFFFFFF;

    for (size_t i = 0; i < dataLength; ++i) {
        const uint32_t lookupIndex = (crc32 ^ data[i]) & 0xFF;
        crc32 = (crc32 >> 8) ^ CRCTable[lookupIndex];
    }

    return crc32 ^ 0xFFFFFFFF;
}
