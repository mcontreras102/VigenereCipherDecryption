#include "myheader.h"

/**************************************************************************
 * Defintion of void function displayMenu                                 *
 * This function receives no parameters and prints the complete Vigenère  *
 * Cipher menu, including all available options.                          *
 **************************************************************************/

void displayMenu()
{
  // Print Menu 
  cout << setw(50) << "VIGENERE CIPHER MENU" << endl;
  cout << "_________________________________________";
  cout << "_________________________________________" << endl;
  cout << "1) Encrypt Message" << endl;
  cout << "2) Decrypt Message" << endl; 
  cout << "3) Display Vigenère Table" << endl;
  cout << "4) Exit the Program" << endl << endl;
}  