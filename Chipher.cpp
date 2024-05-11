#include "Chipher.hpp"
#include "ConversionTable.hpp"
std::string Chipher::encryptText(std::string &plainText, std::string &encryptedText)
{
    encryptedText = "\n";
    for (int i = 0; i < plainText.size(); i++)
    {
        char c = plainText[i];
        for (int j = 0; j < m_conversion->m_table.size(); j++)
        {
            if (m_conversion->m_table[j].first == c)
            {
                encryptedText += m_conversion->m_table[j].second;
                break;
            }
        }
    }
    return encryptedText;
}

std::string Chipher::decryptText(std::string &encryptText, std::string &decryptedMessage)
{
    decryptedMessage = "\n";
    for (int i = 0; i < encryptText.size(); i++)
    {
        char c = encryptText[i];
        for (int j = 0; j < m_conversion->m_table.size(); j++)
        {
            if (m_conversion->m_table[j].second == c)
            {
                decryptedMessage += m_conversion->m_table[j].first;
                break;
            }
        }
    }
    return decryptedMessage;
}

int Chipher::setKey(int key)
{
    delete m_conversion;
    m_conversion = new Conversion(key);
    return 1;
}