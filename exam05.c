#include <stdio.h>

int main(void)
{
    int n;              // input variable
    int nResult = 0;    // sum
    
    while(1){
        printf(" Input >> ");
        scanf("%d", &n);
        if( n == 0 )
            break;
        nResult += n;
    }
    printf(" Result >> %d\n", nResult);
    return 0;
}