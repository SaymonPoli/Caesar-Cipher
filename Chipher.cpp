#include "Chipher.hpp"
#include "conversionTable.hpp"
std::string Chipher::encryptText(std::string decryptText)
{
    std::cout << "\nEncrypting..." << "\n";
    std::string encryptText;
    for (char &s: decryptText)
    {
        encryptText += m_Conversion.EncryptChar(s);
    }
    return encryptText;
}

std::string Chipher::decryptText(std::string encryptText)
{
    std::cout << "\nDecrypting..." << "\n";
    std::string decryptText;
    for (char &s: encryptText)
    {
        decryptText += m_Conversion.DecryptChar(s);
    }
    return decryptText;
}