#include "myheader.h"

/**************************************************************************
 * This functions receives reference to the strings message, key, and     * 
 * newKey. Prompting the user to enter a message and a key, performing    * 
 * neccessary conversions and storing then in the provided varibles.      * 
 * Finally returning the message enerted by the user.                     * 
 **************************************************************************/

string getMsgAndKey(string& message, string& key, string& newKey) 
{
  // Declare Varibles 
  string upperCaseMsg,
         upperCaseKey;
  
  // Prompt user to enter the message and key
  cin.ignore();
  cout << setw(20) << "Enter message: ";
  getline(cin, message);
  cout << setw(16) << "Enter key: ";
  getline(cin, key);

  // Convert message and Key to Uppercase
  convertToUppercase(message);
  convertToUppercase(key);

  // Create New Key
  newKey = createNewKey(message, key);
  
  return message;
}