#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();  
int sqrt1();  
void exit();  
  
int main()  
{  
    // declaration a local variable op;  
    int op;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            addition(); /* It call the addition() function  to add the given numbers */  
            break; // break the function  
              
        case 2:  
            subtract(); /* It call the subtract() function  to subtract the given numbers */  
            break; // break the function  
              
        case 3:  
            multiply(); /* It call the multiply() function  to multiply the given numbers */  
            break; // break the function  
              
        case 4:  
            divide(); // It call the divide() function  to divide the given numbers  
            break; // break the function  
              
        case 5:  
            sq(); // It call the sq() function  to get the square of given numbers  
            break; // break the function  
              
        case 6:  
            sqrt1(); /* It call the sqrt1() function  to get the square root of given numbers */  
            break; // break the function  
              
        case 7:  
            exit(0); // It call the exit() function  to exit from the program  
            break; // break the function  
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n **************** \n ");  
    } while (op != 7);  
      
  
    return 0;        
}
