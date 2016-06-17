#include <stdio.h>

int main(void)
{
    int n;              // input variable
    int i;              // for loop pivot
    int nResult = 0;    // sum
    
    printf(" Input >> ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
        if(i%2==0)          // if variable 'i' is even number,
            nResult += i;   // nResult = nResult + i
    
    printf(" Result >> %d\n", nResult);
    return 0;
}