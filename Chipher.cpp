#include "Chipher.hpp"
#include "conversionTable.hpp"
std::string Chipher::encryptText(std::string decryptText)
{
    std::cout << "\nEncrypting..." << "\n";
    std::string encryptText;
    for (char &s : decryptText)
    {
        encryptText += m_Conversion.EncryptChar(s);
    }
    return encryptText;
}

std::string Chipher::decryptText(std::string encryptText)
{
    std::cout << "\nDecrypting..." << std::endl;
    std::string decryptText;
    for (char &s : encryptText)
    {
        decryptText += m_Conversion.DecryptChar(s);
        std::cout << s << std::endl;
    }
    return decryptText;
}

int Chipher::setKey(int key)
{
    m_Conversion.EditKey(key);
    return 1;
}