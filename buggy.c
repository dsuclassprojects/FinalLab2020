 1 #include <stdio.h>
 2 #include <string.h>
 3
 4 //FIND AND FIX THE MISTAKES IN THIS CODE
 5
 6 void main()
 7 {
 8   char password[80];
 9
10   printf("Create a password: ");
11   scanf("%s", &password);
12
13   int passwordlength = 0;
14   passwordlength = strlen(password);
15   printf("Your password is %s and %i characters long \n", password, passwordlength);
16
17 }
