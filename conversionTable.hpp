#ifndef CONVERSION
#define CONVERSION
#include <vector>

class Conversion
{
private:
public:
    std::vector<std::pair<unsigned char, unsigned char>> m_table;
    Conversion();
    Conversion(size_t key);
    char EncryptChar(char &character);
    char DecryptChar(char &character);
    ~Conversion(){};
};

#endif