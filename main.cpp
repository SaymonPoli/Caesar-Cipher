#include <iostream>
#include <utility>
#include <vector>
#include "Chipher.hpp"
using namespace std;

int main()
{
    string encrypted, decrypted;
    int choice;
    do
    {
        cout << "Encryption and Decryption Menu" << endl;
        cout << "1. Encrypt a message" << endl;
        cout << "2. Decrypt a message" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You selected Encrypt." << endl;
            break;
        case 2:
            cout << "You selected Decrypt." << endl;
            break;
        case 3:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        }
    } while (choice != 3);
}
