/**************************************************************************
 * AUTHOR        : Mariah Contreras                                       *
 * PROJECT       : Vigenere Cipher Decryption                             *
 * CLASS         : CSC7                                                   *
 * DUE DATE      : 6/07/2023                                              *
 **************************************************************************/

#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std;

/**************************************************************************
 * 
 * Vigenere Cipher Decryption
 * ________________________________________________________________________
 * This program begins by displaying a menu, where the user can choose
 * between encryption, decryption, or viewing the Vigenère table. It 
 * provides guidance for each choice, prompting the user for input and 
 * displaying the corresponding results. Reapeating this process until 
 * the user indicated that they want to exit the program. 
 * 
 * Computation are based on the assumption that the user wont enter a
 * message containing spaces or special characters.
 * ________________________________________________________________________
 * INPUT
 *   choice           : Menu Choice 
 *   message          : Message 
 *   key              : Key 
 *
 * OUTPUT 
 *   encryptedMsg     : Encrypted Message 
 *   decryptedMsg     : Decrypted Message 
 *   vigenereTable    : Vigenere Table  
 *
 **************************************************************************/

// Function Prototypes 
void displayMenu();
void displayVigenereTable();
void convertToUppercase(string& str);
string createNewKey(string message, string key);
string getMsgAndKey(string& message, string& key, string& newKey);
void encryptMessage();
void decryptMessage();