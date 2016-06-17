#include <stdio.h>

int SQUARE(int n);      // function prototype
int main(void)
{
    int n;              // input variable
   
    printf(" Input >> ");
    scanf("%d", &n);
    
    printf(" Result >> %d\n", SQUARE(n));   // function call
 
}
int SQUARE(int n){
    return n * n;
}