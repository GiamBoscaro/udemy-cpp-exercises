#include <iostream>
#include <string>

using namespace std;


int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string originalMessage {""};
    string encoded {""};
    
    getline(cin, originalMessage);
    
    // Encode
    for(char c: originalMessage) {
        size_t index = alphabet.find(c);
        char encodedChar {};
        if(index != string::npos) {
            encodedChar = key.at(index);
        } else {
            encodedChar = c;
        }
        encoded += encodedChar;
    }
    
    cout << "Encoded message: " << encoded << endl;
    
    string decoded {""};
    
    // Decode
    for(char c: encoded) {
        size_t index = key.find(c);
        char decodedChar {};
        if(index != string::npos) {
            decodedChar = alphabet.at(index);
        } else {
            decodedChar = c;
        }
        decoded += decodedChar;
    }
    
    cout << "Decoded message: " << decoded << endl;
    
    return 0;
}
