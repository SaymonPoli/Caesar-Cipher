#include <iostream>
#include "conversionTable.hpp"
using namespace std;

Conversion::Conversion()
{
    std::cout << "creating default table" << endl;
    m_table.resize(256);
    int key = 23206033; // Matricula aluno: Saymon M. Poli
    for (int i = 0; i < 256; i++)
    {
        m_table.at(i).first = i;
        m_table.at(i).second = i + key;
        // cout << m_table.at(i).first << " " << m_table.at(i).second << endl;
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
int Conversion::EditKey(size_t key)
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

char Conversion::EncryptChar(char &decrypted)
{
    return m_table[static_cast<unsigned char>(decrypted)].second;
}

char Conversion::DecryptChar(char &encripted)
{
    char output;
    for (size_t i = 0; i < m_table.size(); i++)
    {
        std::cout << m_table.at(i).first << " " << m_table.at(i).second << encripted << std::endl; 
        if (encripted == m_table.at(i).second)
        {
            cout << encripted << " " << m_table.at(i).second << endl;
            return m_table.at(i).first;
        }
    }
    return encripted;
}