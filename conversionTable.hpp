#ifndef CONVERSION
#define CONVERSION
#include <vector>

class Conversion
{
private:
    std::vector<std::pair<unsigned char, unsigned char>> m_table;

public:
    Conversion();
    Conversion(size_t key);
    int EditKey(size_t key);
    char EncryptChar(char &character);
    char DecryptChar(char &character);
};

#endif