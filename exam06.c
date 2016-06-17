#include <stdio.h>

int main(void)
{
    int n;              // input variable
    int i, j;           // for loop pivot

    printf(" Input >> ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if( i <= j )
                printf("%02d ", i*10+j);
            else
                printf("   ");
        }
        printf("\n");
    }
 
}