#ifndef CHIPHER
#define CHIPHER
#include <iostream>
#include "conversionTable.hpp"
class Chipher {
    private:
    // std::string m_EncryptedText, m_DecryptedText;
    Conversion m_Conversion;

    public:
    std::string encryptText(std::string decryptText);
    std::string decryptText(std::string encryptedText);

};

#endif