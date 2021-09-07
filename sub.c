#include<stdio.h>
int subtract()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}