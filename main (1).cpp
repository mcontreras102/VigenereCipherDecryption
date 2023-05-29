#include "myheader.h"

int main()
{
  /*******************************************
   * CONSTANT                                       
   * ----------------------------------------
   * EXIT    : Flag (Exit Choice)            
   *******************************************/
  const int EXIT = 4;
  
  // Declare Variables
  int choice;           // INPUT - Menu Choice 
  
  // Call Display Menu Function
  displayMenu();

  // Prompt User Input
  cout << endl << "Enter your choice: ";
  cin >> choice;

  // Execute until the user chooses to exit
  while (choice != EXIT)
  {
    // Choice Validation
    if (choice < 1 || choice > EXIT)
    {
      cout << setw(37) << "Sorry, that option is invalid." ;
      cout << endl;
    }
    else
    {
      cout << endl;

      // Display Output Based on Selected Menu Choice 
      switch (choice)
        {
          case 1: encryptMessage(); 
            break;
          case 2: decryptMessage();
            break;
          default: displayVigenereTable();
            break;
        }
      cout << endl;
    }
    
    // Display Menu Again
    displayMenu();
    
    // Prompt User Input Again
    cout << endl << "Enter your choice: ";
    cin >> choice;
  }
  
  cout << endl;
  cout << setw(36) << "Thank you for using my program!";
  return 0;
}