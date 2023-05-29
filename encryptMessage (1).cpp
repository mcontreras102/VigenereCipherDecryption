#include "myheader.h"

/**************************************************************************
 * This function performs encryption on a given message using a provided  *
 * key. It prompts the user to enter a message and a key, generates a     *
 * new key based on the message length, and then encrypts the message     *
 * using the Vigenère cipher algorithm. The encrypted message is          *
 * displayed as output.                                                   *
 **************************************************************************/

void encryptMessage() 
{
  // Declare Varibles 
  string message,
         key,
         newKey,
         encryptedMsg;

  // Get Message and Key
  encryptedMsg = getMsgAndKey(message, key, newKey);

  // Encrypt Message 
  for (size_t i = 0; i < message.size(); ++i) 
  {
    encryptedMsg[i] = ((message[i] + newKey[i]) % 26) + 'A';
  }

  // Output Results 
  cout << setw(24) << "Encrypted Message: " << encryptedMsg;
  cout << endl << endl;
}