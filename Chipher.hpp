#ifndef CHIPHER
#define CHIPHER
#include <iostream>
#include "conversionTable.hpp"
class Chipher {
    private:
    Conversion m_Conversion;
    std::string m_encryptedText, m_decryptedText;
    int m_key;

    public:
    std::string encryptText(std::string decryptText);
    std::string decryptText(std::string encryptedText);
    int setKey(int key);

};

#endif