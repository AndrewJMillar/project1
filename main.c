#include <stdio.h>

int main(void)   {
    
    /* Task1- To complete this task, a block of text will need
       to be read and have the rotation cyper applied to it 
       to Encrypt the text. This task involves taking text from
       a separate file and entering it into the program. It then 
       has each letter read individually and determins if it is
       a letter of the alphabet. It then needs to apply a rotation
       cyper to encrypt the letter. After this it needs to do the 
       same with the next character of the text and so on until
       all characters are read. After the encryption is completed
       it then needs to be printed to the screen.*/
   FILE *input; // this is a pointer to file "input"
   
   input = fopen("input.txt", "r"); // this makes the data in "input.txt" to "input"
   
   
   while(feof(input) == 0) { // this begins a loop which reads the first charater of "input.txt", then completes the loop, then reads the second character etc
              
      char c;  // declared character 'c' will change to the next charater in input.txt after each loop  
     
      int key=1; // the key is the number of times each letter is rotated through the alphabet.
      
      fscanf(input, "%c", &c); // this scans each letter of input.txt and stores them at the address of 'c'
      
         if ((c >= 'A') && (c <= 'Z')) { // Since its only the letters that are being rotated, this isolates the roation to just the letters of the alphabet 
        
         c = c + key; //this takes the current value of c and adds the key. It then makes the total the new c value.
        
         if (c > 'Z') { // this determines whether the value of c exceeds the the number letters in the alphabet (26)
            
         c = c % 26; // if the value of c exceeds 26, to loop back to A, the value of c becomes the remainder after it has been divided by 26
        }
        
  }

      printf("%c", c); // this prints the value of c after the rotation cypher has been applied
      
   }
 
 }