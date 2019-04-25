#include <stdio.h>

/* below in the function protypes are the test text used for the
   tasks. It uses the text "the quick brown fox jumps over the
   lazy dog" which uses every letter of the alphabet.*/

void task1(void); //THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
void task2(void); //WKH TXLFN EURZQ IRA MXPSV RYHU WKH ODCB GRJ
void task3(void); //THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
void task4(void); //ZIT JXOEA WKGVF YGB PXDHL GCTK ZIT SQMN RGU


int main()   {
    
    /*Inside the 'main' function, is an interactive menu which the
    user can choose which task of the project to run. Each task will
    be read off the same file 'input.txt'. To determine what type of 
    encryption/ decryption the user wants each task is labelled in
    initial menu selection.*/
   
    int task;
    
    printf("\n   -Task1 (Rotation Encryption) = 1\n");     
    printf("   -Task2 (Rotation Dectyption) = 2\n");
    printf("   -Task3 (Substitution Encryption) = 3\n");
    printf("   -Task4 (Substitution Decryption) = 4\n");
    printf("\nEnter a number to run a task: ");
    
    scanf("%d", &task);
    
    switch(task)    {       //swich case allows for menu like options to occur.
        case 1:
            printf("...YOU HAVE CHOSEN TASK 1!!!...\n"); 
            task1();        // calls for the task1 function to be run
            printf("\n");
            break;
        case 2:
            printf("...YOU HAVE CHOSEN TASK 2!!!...\n");
            task2();        // calls for the task2 function to be run
            printf("\n");
            break;
        case 3:
            printf("...YOU HAVE CHOSEN TASK 3!!!...\n");
            task3();        // calls for the task3 function to be run
            printf("\n");
            break;
        case 4:
            printf("...YOU HAVE CHOSEN TASK 4!!!...\n");
            task4();        // calls for the task4 function to be run
            printf("\n");
            break;
        default:
            printf("\n...AN ERROR OCCURED...");     // if a task that does not exist is entered, the program defaults to an error.
}
    
    return 0;
}
 
/* Task1- Encryption of a message with a rotation cipher given the message text and rotation amount.
   To complete this task, there are series of sub tasks that need to be done to complete it. The program 
   needs to read from a file (in this case "input.txt") and be stored in a variable (in this case
   input). The program then needs to read each character one by one and put through its own
   encryption process to which it then loops back to the next character of the input. To encrypt
   a character a key needs to be generated which will be the amount each character rotates through 
   the alphabet. This key is added to the the ASCII value of the character and the end result is
   the final value for the character. If the ASCII value exceeds the alphabet, it the deducts 26 
   from the new value of c. The now final value of c is printed to the screen and loop is continued.*/
  
void task1(void)    {   //this calls the function "task1"
     
    FILE *input; // this is a pointer to file "input"
   
    input = fopen("input.txt", "r"); // this makes the data in the file "input.txt" to "input"
    
    while(feof(input) == 0) { // this begins a loop which reads the first charater of "input.txt", then completes the loop, then reads the second character etc
              
        char c;  // declared character 'c' will change to the next charater in input.txt after each loop 
        int key=3; // the key is the number of times each letter is rotated through the alphabet.
      
        fscanf(input, "%c", &c); // this scans each letter of input.txt and stores them at the address of 'c'
      
            if ((c >= 'A') && (c <= 'Z')) { // Since its only the letters that are being rotated, this isolates the roation to just the letters of the alphabet 
                c = c + key; //this takes the current value of c and ADDS the key. It then makes the total the new c value.
                if (c > 'Z') { // this determines whether the value of c exceeds the the number letters in the alphabet (26)
                    c = c - 26; // if the value of c exceeds 26, to loop back to A, the value of c is deducted by 26
}   
}
    printf("%c", c); // this prints the value of c after the rotation cypher has been applied
      
}
    
}
    
/* Task2- Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount.
   To complete this task, there are a series of sub tasks that need to be done to complete it. The program
   needs to read from a file (in this case "input.txt") and be stored in a variable (in this case
   input). This part of the program is very similar to the ecryption phase where it needs to read each 
   character one by one and put through its own decryption process to which it then loops back to the next 
   character of the input. To decrypt a character, a key needs to be generated which will be the amount
   each character rotates backwards through the alphabet. This key is deducted from the ASCII value of the 
   character and the end result is the final value for the character. If the ASCII value exceeds below the 
   alphabet, it adds 26 to the new value of c. The now final value of c is printed to the sceen and the 
   loop is continued.*/    
    
 void task2(void)    { // this calls the function "task2"
     
    FILE *input; // this is a pointer to file "input"
   
    input = fopen("input.txt", "r"); // this makes the data in the file "input.txt" to "input"
   
    while(feof(input) == 0) { // this begins a loop which reads the first charater of "input.txt", then completes the loop, then reads the second character etc
              
        char c;  // declared character 'c' will change to the next charater in input.txt after each loop 
        int key=3; // the key is the number of times each letter is rotated through the alphabet.
      
        fscanf(input, "%c", &c); // this scans each letter of input.txt and stores them at the address of 'c'
      
            if ((c >= 'A') && (c <= 'Z')) { // Since its only the letters that are being rotated, this isolates the roation to just the letters of the alphabet 
                c = c - key; //this takes the current value of c and DEDUCTS the key. It then makes the total the new c value.
                if (c < 'A') { // this determines whether the value of c exceeds the the number letters in the alphabet (26)
                    c = c + 26; // if the value of c exceeds 26, to loop back to A, the value of c has 26 added to it
}   
}
    printf("%c", c); // this prints the value of c after the rotation cypher has been applied
      
}
    
}

/* Task3- Encryption of a message with a substitution cipher given message text and alphabet substitution
   To complete this task, there are a series of sub tasks that need to be done to complete it. The program
   needs to read from a file (in this case "input.txt") and be stored in a variable (in this case
   input). The program then needs to read each character one by one and put through its own
   encryption process to which it then loops back to the next character of the input. To encrypt a 
   character with a substitution cipher, it needs to be tested whether its a letter of the alphabet and
   if it is, which letter it is. If the character is a letter of the alphabet it then needs its own
   letter to substitue into which can be any letter of the alphbet as long as it has not been 
   chosen for substitution previously. After the character has been substituted, its new value is 
   printed to the screen. The character is then reverted back to its original value so the new value isnt
   re-substituted further down the program. The program then needs to test if the character is not a 
   letter of the alphabet, if it is not then the substitution is ignored and it is printed to the screen
   and the loop is continued.*/

void task3(void)    {   //this calls the function "task3"
    
    
    FILE *input; // this is a pointer to file "input"
   
    input = fopen("input.txt", "r"); // this makes the data in "input.txt" to "input"
    
    while(feof(input) == 0) { // this begins a loop which reads the first charater of "input.txt", then completes the loop, then reads the second character etc
    
        char c;  // declared character 'c' will change to the next charater in input.txt after each loop 
        
        fscanf(input, "%c", &c); // this scans each letter of input.txt and stores them at the address of 'c'
        
          
            if (c == 'A')   {       // reads if the char is 'A'. Changes it to 'Q'. Then prints its value.
                c = 'Q';
                printf("%c", c);
                c = 'A';
}
            if (c == 'B')   {       // reads if the char is 'B'. Changes it to 'W'. Then prints its value.
                c = 'W';
                printf("%c", c);
                c = 'B';
}
            if (c == 'C')   {       // reads if the char is 'C'. Changes it to 'E'. Then prints its value.           
                c = 'E';
                printf("%c", c);
                c = 'C';
}
            if (c == 'D')   {        // reads if the char is 'D'. Changes it to 'R'. Then prints its value.        
                c = 'R';
                printf("%c", c);
                c = 'D';
}
            if (c == 'E')   {        // reads if the char is 'E'. Changes it to 'T'. Then prints its value.        
                c = 'T';
                printf("%c", c);
                c = 'E';
}
            if (c == 'F')   {        // reads if the char is 'F'. Changes it to 'Y'. Then prints its value.        
                c = 'Y';
                printf("%c", c);
                c = 'F';
}
            if (c == 'G')   {        // reads if the char is 'G'. Changes it to 'U'. Then prints its value.       
                c = 'U';
                printf("%c", c);
                c = 'G';
}
            if (c == 'H')   {       // reads if the char is 'H'. Changes it to 'I'. Then prints its value.         
                c = 'I';
                printf("%c", c);
                c = 'H';
}
            if (c == 'I')   {       // reads if the char is 'I'. Changes it to 'O'. Then prints its value.         
                c = 'O';
                printf("%c", c);
                c = 'I';
}
            if (c == 'J')   {       // reads if the char is 'J'. Changes it to 'P'. Then prints its value.         
                c = 'P';
                printf("%c", c);
                c = 'J';
}
            if (c == 'K')   {       // reads if the char is 'K'. Changes it to 'A'. Then prints its value.       
                c = 'A';
                printf("%c", c);
                c = 'K';
}
            if (c == 'L')   {       // reads if the char is 'L'. Changes it to 'S'. Then prints its value.        
                c = 'S';
                printf("%c", c);
                c = 'L';
}
            if (c == 'M')   {       // reads if the char is 'M'. Changes it to 'D'. Then prints its value.         
                c = 'D';
                printf("%c", c);
                c = 'M';
}
            if (c == 'N')   {        // reads if the char is 'N'. Changes it to 'F'. Then prints its value.        
                c = 'F';
                printf("%c", c);
                c = 'N';
}
            if (c == 'O')   {        // reads if the char is 'O'. Changes it to 'G'. Then prints its value.        
                c = 'G';
                printf("%c", c);
                c = 'O';
}
            if (c == 'P')   {        // reads if the char is 'P'. Changes it to 'H'. Then prints its value.       
                c = 'H';
                printf("%c", c);
                c = 'P';
}
            if (c == 'Q')   {       // reads if the char isQ ''. Changes it to 'J'. Then prints its value.
                c = 'J';
                printf("%c", c);
                c = 'Q'; 
}
            if (c == 'R')   {       // reads if the char is 'R'. Changes it to 'K'. Then prints its value.        
                c = 'K';
                printf("%c", c);
                c = 'R';
}
            if (c == 'S')   {       // reads if the char is 'S'. Changes it to 'L'. Then prints its value.         
                c = 'L';
                printf("%c", c);
                c = 'S';
}
            if (c == 'T')   {       // reads if the char is 'T'. Changes it to 'Z'. Then prints its value.        
                c = 'Z';
                printf("%c", c);
                c = 'T';
}
            if (c == 'U')   {       // reads if the char is 'U'. Changes it to 'X'. Then prints its value.         
                c = 'X';
                printf("%c", c);
                c = 'U';
}
            if (c == 'V')   {        // reads if the char is 'V'. Changes it to 'C'. Then prints its value.        
                c = 'C';
                printf("%c", c);
                c = 'V';
}
            if (c == 'W')   {         // reads if the char is 'W'. Changes it to 'V'. Then prints its value.       
                c = 'V';
                printf("%c", c);
                c = 'W';
}
            if (c == 'X')   {         // reads if the char is 'X'. Changes it to 'B'. Then prints its value.      
                c = 'B';
                printf("%c", c);
                c = 'X';
}
            if (c == 'Y')   {          // reads if the char is 'Y'. Changes it to 'N'. Then prints its value.      
                c = 'N';
                printf("%c", c);
                c = 'Y';
}
            if (c == 'Z')   {          // reads if the char is 'Z'. Changes it to 'M'. Then prints its value.     
                c = 'M';
                printf("%c", c);
                c = 'Z';
}  
            else if ((c != 'A') && (c != 'B') && (c != 'C') && (c != 'D') && (c != 'E') && (c != 'F') && (c != 'G') && (c != 'H') && (c != 'I') && (c != 'J') 
                    && (c != 'K') && (c != 'L') && (c != 'M') && (c != 'N') && (c != 'O') && (c != 'P') && (c != 'Q') && (c != 'R') && (c != 'S') && (c != 'T') 
                    && (c != 'U') && (c != 'V') && (c != 'W') && (c != 'X') && (c != 'Y') && (c != 'Z'))  {     // if the char is not any value of the alphabet then the changed are applied and it is printed to the screen.
                 printf("%c", c);
}          
   
}
    
}

/* Task4- Decryption of a message encrypted with a substitution cipher given cipher text and substitutions
   To complete this task, there are a series of sub tasks that need to be done to complete it. The program
   needs to read from a file (in this case "input.txt") and be stored in a variable (in this case
   input). The program then needs to read each character one by one and put through its own
   decryption process (very similar to the encryption phase) to which it then loops back to the next 
   character of the input. To decrypt a character with a substitution cipher, it needs to be tested whether 
   its a letter of the alphabet and if it is, which letter it is. If the character is a letter of the alphabet 
   it then needs its own letter to substitue it back into a decoded letter.After the character has been substituted, 
   its new value is printed to the screen. The character is then reverted back to its original value so the new value isnt
   re-substituted further down the program. The program then needs to test if the character is not a 
   letter of the alphabet, if it is not then the substitution is ignored and it is printed to the screen
   and the loop is continued.*/

void task4(void)    {
    
    
    FILE *input; // this is a pointer to file "input"
   
    input = fopen("input.txt", "r"); // this makes the data in "input.txt" to "input"
    
    while(feof(input) == 0) { // this begins a loop which reads the first charater of "input.txt", then completes the loop, then reads the second character etc
    
        char c;  // declared character 'c' will change to the next charater in input.txt after each loop 
        
        fscanf(input, "%c", &c); // this scans each letter of input.txt and stores them at the address of 'c'
        
          
            if (c == 'Q')   {       // reads if the char is 'Q'. Changes it to 'A'. Then prints its value.
                c = 'A';
                printf("%c", c);
                c = 'Q';
}
            if (c == 'W')   {       // reads if the char is W''. Changes it to 'B'. Then prints its value.
                c = 'B';
                printf("%c", c);
                c = 'W';
}
            if (c == 'E')   {       // reads if the char is 'E'. Changes it to 'C'. Then prints its value.        
                c = 'C';
                printf("%c", c);
                c = 'E';
}
            if (c == 'R')   {       // reads if the char is 'R'. Changes it to 'D'. Then prints its value.         
                c = 'D';
                printf("%c", c);
                c = 'R';
}
            if (c == 'T')   {        // reads if the char is 'T'. Changes it to 'E'. Then prints its value.        
                c = 'E';
                printf("%c", c);
                c = 'T';
}
            if (c == 'Y')   {       // reads if the char is 'Y'. Changes it to 'F'. Then prints its value.         
                c = 'F';
                printf("%c", c);
                c = 'Y';
}
            if (c == 'U')   {       // reads if the char is 'U'. Changes it to 'G'. Then prints its value.        
                c = 'G';
                printf("%c", c);
                c = 'U';
}
            if (c == 'I')   {       // reads if the char is 'I'. Changes it to 'H'. Then prints its value.         
                c = 'H';
                printf("%c", c);
                c = 'I';
}
            if (c == 'O')   {        // reads if the char is 'O'. Changes it to 'I'. Then prints its value.        
                c = 'I';
                printf("%c", c);
                c = 'O';
}
            if (c == 'P')   {        // reads if the char is 'P'. Changes it to 'J'. Then prints its value.        
                c = 'J';
                printf("%c", c);
                c = 'P';
}
            if (c == 'A')   {        // reads if the char is 'A'. Changes it to 'K'. Then prints its value.      
                c = 'K';
                printf("%c", c);
                c = 'A';
}
            if (c == 'S')   {       // reads if the char is 'S'. Changes it to 'L'. Then prints its value.        
                c = 'L';
                printf("%c", c);
                c = 'S';
}
            if (c == 'D')   {        // reads if the char is 'D'. Changes it to 'M'. Then prints its value.        
                c = 'M';
                printf("%c", c);
                c = 'D';
}
            if (c == 'F')   {        // reads if the char is 'F'. Changes it to 'N'. Then prints its value.        
                c = 'N';
                printf("%c", c);
                c = 'F';
}
            if (c == 'G')   {        // reads if the char is 'G'. Changes it to 'O'. Then prints its value.        
                c = 'O';
                printf("%c", c);
                c = 'G';
}
            if (c == 'H')   {        // reads if the char is 'H'. Changes it to 'P'. Then prints its value.       
                c = 'P';
                printf("%c", c);
                c = 'H';
}
            if (c == 'J')   {       // reads if the char is 'J'. Changes it to 'Q'. Then prints its value.
                c = 'Q';
                printf("%c", c);
                c = 'J'; 
}
            if (c == 'K')   {       // reads if the char is 'K'. Changes it to 'R'. Then prints its value.        
                c = 'R';
                printf("%c", c);
                c = 'K';
}
            if (c == 'L')   {        // reads if the char is 'L'. Changes it to 'S'. Then prints its value.        
                c = 'S';
                printf("%c", c);
                c = 'L';
}
            if (c == 'Z')   {        // reads if the char is 'Z'. Changes it to 'T'. Then prints its value.       
                c = 'T';
                printf("%c", c);
                c = 'Z';
}
            if (c == 'X')   {       // reads if the char is 'X'. Changes it to 'U'. Then prints its value.         
                c = 'U';
                printf("%c", c);
                c = 'X';
}
            if (c == 'C')   {       // reads if the char is 'C'. Changes it to 'V'. Then prints its value.         
                c = 'V';
                printf("%c", c);
                c = 'C';
}
            if (c == 'V')   {        // reads if the char is 'V'. Changes it to 'W'. Then prints its value.        
                c = 'W';
                printf("%c", c);
                c = 'V';
}
            if (c == 'B')   {        // reads if the char is 'B'. Changes it to 'X'. Then prints its value.       
                c = 'X';
                printf("%c", c);
                c = 'B';
}
            if (c == 'N')   {         // reads if the char is 'N'. Changes it to 'Y'. Then prints its value.       
                c = 'Y';
                printf("%c", c);
                c = 'N';
}
            if (c == 'M')   {        // reads if the char is 'M'. Changes it to 'Z'. Then prints its value.       
                c = 'Z';
                printf("%c", c);
                c = 'M';
}  
            else if ((c != 'A') && (c != 'B') && (c != 'C') && (c != 'D') && (c != 'E') && (c != 'F') && (c != 'G') && (c != 'H') && (c != 'I') && (c != 'J') 
                    && (c != 'K') && (c != 'L') && (c != 'M') && (c != 'N') && (c != 'O') && (c != 'P') && (c != 'Q') && (c != 'R') && (c != 'S') && (c != 'T') 
                    && (c != 'U') && (c != 'V') && (c != 'W') && (c != 'X') && (c != 'Y') && (c != 'Z'))  {     // if the char is not any value of the alphabet then the changed are applied and it is printed to the screen.
                 printf("%c", c);
}          
   
}
    
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   