#include "myheader.h"

/**************************************************************************
 * Defintion of void function decryptMessage                              *
 * This function performs decryption on a given message using a provided  *
 * key. It prompts the user to enter a message and a key, generates a     *
 * new key based on the message length, and then decrypts the message     *
 * using the Vigenère cipher algorithm. The decrypted message is          *
 * displayed as output.                                                   *
 **************************************************************************/

void decryptMessage()
{
  // Declare Varibles 
  string message,
         key,
         newKey,
         decryptedMsg;
  
  // Get Message and Key 
  decryptedMsg = getMsgAndKey(message, key, newKey);

  // Decrypt Message 
  for (size_t i = 0; i < message.size(); ++i) 
  {
    decryptedMsg[i] = (((message[i] - newKey[i]) + 26) % 26) + 'A';
  }

  // Output Results 
  cout << setw(24) << "Decrypted Message: " << decryptedMsg;
  cout << endl << endl;
}