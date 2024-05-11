#include <iostream>
#include <vector>

using namespace std;

// create cipher table
void createConversionTable(vector<pair<char, char>> &conversionTable)
{
    int key = 23206033;
    for (int i = 0; i < 256; i++)
    {
        conversionTable.push_back(make_pair(i, i + key));
    }
}

void encryptMessage(string &message, vector<pair<char, char>> &conversionTable, string &encryptedMessage)
{
    for (char c : message)
    {
        encryptedMessage += conversionTable[c].second;
    }
}

void decryptMessage(string &encryptedMessage, vector<pair<char, char>> &conversionTable, string &decryptedMessage)
{
    for(int i=0;i<encryptedMessage.size();i++)
    {
        char c = encryptedMessage[i];
        for(int j=0;j<conversionTable.size();j++)
        {
            if(conversionTable[j].second == c)
            {
                decryptedMessage += conversionTable[j].first;
            }
        }
    }
}

int main(){
    vector<pair<char, char>> conversionTable;
    createConversionTable(conversionTable);

    string message = "Hello World";
    string encryptedMessage, decryptedMessage;

    encryptMessage(message, conversionTable, encryptedMessage);
    decryptMessage(encryptedMessage, conversionTable, decryptedMessage);

    cout << "Message: " << message << endl;
    cout << "Encrypted Message: " << encryptedMessage << endl;
    cout << "Decrypted Message: " << decryptedMessage << endl;

}