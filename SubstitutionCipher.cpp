//Here is a simple substitution cipher project made by AmbyCodes by using string formatting in C++.
//Basically, in a substitution Cipher, we replace each letter with another random letter to create a secret message.

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Define the substitution key: mapping from original characters to new characters.
    string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"};
    string key{"zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP6290148357"};

    cout << endl;

    // Input the secret message from the user.
    string secretMessage{};
    cout << "Enter a secret message: ";
    getline(cin, secretMessage);

    // Encrypt the secret message using the substitution key.
    string encryptedMessage{};
    cout << "\nEncrypting your message..." << endl;

    for (char x : secretMessage) {
        int position = alphabet.find(x);
        if (position != string::npos) {
            char replaceAlphabet{key.at(position)};
            encryptedMessage += replaceAlphabet;
        } else {
            encryptedMessage += x;
        }
    }

    cout << "\nDisplaying Encrypted Message: " << encryptedMessage << endl;

    // Decrypt the encrypted message to retrieve the original secret message.
    string decryptedMessage{};
    cout << "\nDecrypting secret message..." << endl;

    for (char y : encryptedMessage) {
        int position = key.find(y);
        if (position != string::npos) {
            char replacedKey{alphabet.at(position)};
            decryptedMessage += replacedKey;
        } else {
            decryptedMessage += y;
        }
    }

    cout << "\nDisplaying Decrypted message: " << decryptedMessage << endl;

    cout << endl;

    return 0;
}
