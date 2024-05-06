#ifndef CONVERSION
#define CONVERSION
#include <vector>

class Conversion
{
private:
    std::vector<std::pair<char, char>> m_table;

public:
    Conversion();
    Conversion(size_t key);
    int CreateTable(size_t key);
    char EncryptChar(char character);
    char DecryptChar(char character);
};

#endif