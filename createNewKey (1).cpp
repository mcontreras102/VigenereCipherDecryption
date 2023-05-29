#include "myheader.h"

/**************************************************************************
 * Definition of string function createNewKey                             *
 * This function takes two string parameters, message and key, and makes  * 
 * a new key based on their lengths. It repeats characters from the key   *
 * to match the length of the message and creates a new key. The newly    *
 * created key string is then returned.                                   *
 **************************************************************************/

string createNewKey(string message, string key)
{
  // Initialize Varibles 
  int msgLen = message.size();
  int keyLen = key.size();
  string newKey = "";

  // Create New Key
  for (int i = 0, j = 0; i < msgLen; ++i, ++j) 
  {
    if (j == keyLen)
        j = 0;
    newKey += key[j];
  }
  return newKey;
}