#include <iostream>
#include "conversionTable.hpp"
using namespace std;

Conversion::Conversion()
{
    m_table.resize(256);
    for (size_t i = 0; i < 256; i++)
    {
        size_t key = 23206033; // Matricula aluno: Saymon M. Poli
        m_table.at(i).first = i;
        m_table.at(i).second = i + key;
    }
};

Conversion::Conversion(size_t key)
{
    for (size_t i = 0; i < 256; i++)
    {
        m_table.at(i).first = i;
        m_table.at(i).second = i + key;
    }
}
int Conversion::CreateTable(size_t key)
{
    if (m_table.empty())
    {
        return 1;
    };
    for (size_t i = 0; i < 256; i++)
    {
        m_table.at(i).first = i;
        m_table.at(i).second = i + key;
    };
    return 0;
}

char Conversion::EncryptChar(char decripted)
{
    char output;
    output += m_table.at(decripted).second;
    return output;
}

char Conversion::DecryptChar(char encripted)
{
    char output;
    for (size_t i = 0; i < m_table.size(); i++)
    {
        if (encripted == m_table.at(i).second)
        {
            output += m_table.at(i).first;
            break;
        }
    }
    return output;
}