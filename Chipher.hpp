#ifndef CHIPHER
#define CHIPHER
#include <iostream>
#include "conversionTable.hpp"
class Chipher {
    private:
    Conversion m_conversion;
    int m_key;

    public:
    std::string m_encryptedText, m_decryptedText;
    std::string encryptText(std::string decryptText);
    std::string decryptText(std::string &encryptText, std::string &decryptedMessag);
    int setKey(int key);

};

#endif