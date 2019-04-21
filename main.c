#include <stdio.h>

void task1(void); //THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
void task2(void); //WKH TXLFN EURZQ IRA MXPSV RYHU WKH ODCB GRJ
void task3(void);
void task4(void);

int main()   {
    
    int task;
    
    
    printf("Task1= 1\n");
    printf("Task2= 2\n");
    printf("Task3= 3\n");
    printf("Task4= 4\n");
    printf("Enter a number to run a task: ");
    
    scanf("%d", &task);
    
    switch(task)    {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            printf("you have chosen task 3\n");
            break;
        case 4:
            printf("you have chosen task 4\n");
            break;
        default:
            printf("\n...AN ERROR OCCURED...");
    }
    
    return 0;
 }
 
void task1(void)    {   //this calls the function "task1"
     
    FILE *input; // this is a pointer to file "input"
   
    input = fopen("input.txt", "r"); // this makes the data in "input.txt" to "input"
   
   
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
    
 void task2(void)    { // this calls the function "task2"
     
    FILE *input; // this is a pointer to file "input"
   
    input = fopen("input.txt", "r"); // this makes the data in "input.txt" to "input"
   
   
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







 
   