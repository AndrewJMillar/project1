/* Task 1: Encryption of a message with a rotation
   cipher given the message and rotation amount.
   
   The given message will be: THIS MESSAGE IS 
   ENCRYPTED
   The rotaion of the cipher will be: 1
   
   For the encryption to occur, it needs to perform
   a series of tasks-
    1. A function prototype needs to be generated
       to apply an encryption equation to rotate
       the cipher.
    2. A key needs to be generated to convert each 
       letter of the alphabet into a number from 
       0 to 25 using a string array.
    3. The message will next be intup into the 
       compiler.
    4. The function will be called and each letter 
       of the message will be encypted individually.
    5. The encrypted message will be printed. */

#include <stdio.h>


int main() {
    
    char alphabet[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', '\0'}; // string array of alphabet
    
   FILE *text;
   
   text = fopen("input.txt", "r");
   
   while(feof(text) == 0) {
       
       char c;
       
       int key=1;
       
       fscanf(text, "%c", &c);
       
       if((c >= A) && (c <= Z)) {
           
           c = c + key;
           
           if(c > Z) {
               
               c = c % 26;
           }
       }
       printf("%c", c);
   }
   
   
    
    
    return 0;
}