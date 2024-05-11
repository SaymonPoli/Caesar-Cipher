#include <iostream>
#include "conversionTable.hpp"
using namespace std;

Conversion::Conversion() : m_table(256)
{
    int key = 23206033;
    for (int i = 0; i < 256; i++)
    {
        m_table.push_back(make_pair(i, i + key));
    }
};

Conversion::Conversion(size_t key) : m_table(256)
{
    for (int i = 0; i < 256; i++)
    {
        m_table.at(i).first = i;
        m_table.at(i).second = i + key;
    }
}

char Conversion::EncryptChar(char &decrypted)
{
    char c = decrypted;
    return m_table.at(c).second;
}

char Conversion::DecryptChar(char &encripted)
{
    char output;
    for (int j = 0; j < m_table.size(); j++)
    {
        if (m_table[j].second == encripted)
        {
            return m_table[j].first;
        }
    }
    return encripted;
}
