#include "myheader.h"

/**************************************************************************
 * Definition of void function displayVigenereTable                       *
 * This function displays the Vigenère table, which is a 26x26 matrix     *
 * containing the characters of the English alphabet. The function        *
 * utilizes parallel arrays and a for-loop to fill the table with the     *
 * appropriate characters based on the Vigenère cipher algorithm. Finally * 
 * the function displays the table on the screen.                         *
 **************************************************************************/

void displayVigenereTable()
{
  // Declare constants 
  const int tableSize = 26;

  // Declare Varibles 
  char currentChar;
  char vigenereTable[tableSize][tableSize];

    // Create Vigenere Table
    for (int row = 0; row < tableSize; ++row)
    {
        currentChar = 'A' + row;
        for (int col = 0; col < tableSize; ++col)
        {
            vigenereTable[row][col] = currentChar;
            currentChar = (currentChar - 'A' + 1) % tableSize + 'A';
        }
    }

    // Display Vigenere Table  
    for (int row = 0; row < tableSize; ++row)
    {
      cout << "    ";
        for (int col = 0; col < tableSize; ++col)
        {
            cout << setw(2) << vigenereTable[row][col] << " ";
        }
        cout << endl;
    }
  cout << endl;
}