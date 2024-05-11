#include <iostream>
#include <utility>
#include <vector>
#include <limits>
// #include<string.h>
#include "Chipher.hpp"
using namespace std;

int main()
{
    Chipher chipher;
    std::string encrypted, decrypted;
    size_t key;
    int choice;
    // do
    // {

        // cout << "Encryption and Decryption Menu" << endl;
        // cout << "1. Encrypt a message" << endl;
        // cout << "2. Decrypt a message" << endl;
        // cout << "3. Change the chipher key" << endl;
        // cout << "4. Exit program" << endl;
        // cout << "Enter your choice: ";
        // cin >> choice;
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');

        decrypted = "Hello World";
        cout << "Original text: " << decrypted << endl;
        encrypted = chipher.encryptText(decrypted);
        cout << "Encrypted text: " << encrypted << endl;
        chipher.decryptText(encrypted, decrypted);
        cout << "Decrypted text: " << decrypted << endl;

        // switch (choice)
        // {
        // case 1:
        //     cout << "Type the text you want to encrypt: " << endl;
        //     cin >> decrypted;
        //     encrypted = chipher.encryptText(decrypted);
        //     cout << "Encrypted text: " << encrypted << endl;
        //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
        //     break;
        // case 2:
        //     cout << "Type the text you want to decrypt: " << endl;
        //     // cin >> encrypted;
        //     decrypted = chipher.decryptText(encrypted);
        //     cout << "Decrypted text: " << decrypted << endl;
        //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
        //     break;
        // case 3:
        //     cout << "Type the new key: " << endl;
        //     cin >> key;
        //     chipher.setKey(key);
        //     break; // Added break to exit the case
        // case 4:
        //     cout << "Exiting program." << endl;
        //     break;
        // default:
        //     cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        //     break;
        // }
    // } while (choice != 4);
}
