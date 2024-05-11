#include "Chipher.hpp"
#include "conversionTable.hpp"
std::string Chipher::encryptText(std::string decryptText)
{
    std::string encryptText;
    for (char &s : decryptText)
    {
        encryptText += m_conversion->EncryptChar(s);
    }
    m_encryptedText = encryptText;
    return encryptText;
}

std::string Chipher::decryptText(std::string &encryptText, std::string &decryptedMessage)
{
    for (int i = 0; i < encryptText.size(); i++)
    {
        char c = encryptText[i];
        for (int j = 0; j < m_conversion->m_table.size(); j++)
        {
            if (m_conversion->m_table[j].second == c)
            {
                decryptedMessage += m_conversion->m_table[j].first;
            }
        }
    }
    return decryptedMessage;
}

int Chipher::setKey(int key)
{
    delete m_conversion;
    m_conversion = new Conversion(key);
    return 0;
}