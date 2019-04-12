#include <stdio.h>

int main(void)
{
   FILE *input;
   
   input = fopen("input.txt", "r");
   
   
   while(feof(input) == 0) {
              
      char c;  // declared character 'c' will change to the next charater in input.txt after each loop  
     
      int key=1; // the key is the number of times each letter is rotated through the alphabet.
      
      fscanf(input, "%c", &c); // this scans each letter of input.txt and stores them at the address of 'c'
      
         if ((c >= 'A') && (c <= 'Z')) { // Since its only the letters that are being rotated, this isolates the roation to just the letters of the alphabet 
        
         c = c + key;
        
         if (c > 'Z') {
            
         c = c % 26;
        }
        
  }

      printf("%c", c);
      
   }
 
 }