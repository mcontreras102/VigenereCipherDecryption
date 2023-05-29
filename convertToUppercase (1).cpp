#include "myheader.h"

/**************************************************************************
 * Defintion of void function convertToUpperCase                          *
 * This function receives a string parameter str and converts all the     *
 * characters in the string to uppercase. It utilizes a loop to iterate   *
 * over each character in the string and applies the toupper function to  *
 * convert it to uppercase. The modified string is then returned.         *
 **************************************************************************/

void convertToUppercase(string& str)
{
  
  // Iterate Through Each Character in String 
  for (char& ch : str) 
  {
    // Convert Character to Upper Case 
    ch = toupper(ch);
  }
}