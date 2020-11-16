#include <stdio.h>
#include <string.h>

//FIND AND FIX THE MISTAKES IN THIS CODE

void main()
{
  char password[80];		//fixed array bracket

  print("Create a password: "); //fixed parenthesis / semicolon
  scanf("%s", &password);		//added ampersand

  int passwordlength;			//changed from integer to int
  passwordlength = strlen(password);
  printf("Your password is %s and is %i characters long", password, passwordlength); //quotation and semicolon.

}
