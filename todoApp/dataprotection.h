#ifndef DATA_PROTECTION_H
#define DATA_PROTECTION_H

#include <array>

using namespace std;

string encrypt(string str, string key);
string decrypt(string str, string key);

array<uint32_t, 256> generateCRC32Table();
uint32_t hashPassword(const string& password, const string& salt);

#endif // DATA_PROTECTION_H
