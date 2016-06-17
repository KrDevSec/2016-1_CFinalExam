#include <stdio.h>
#include <math.h>
int main(void)
{
    int na, nb;         // input variable 'a', 'b'
    double dResult;     // result 'c'
    
    printf(" Input >> ");
    scanf("%d%d", &na, &nb);

    dResult = (double)(na*na + nb*nb);
    dResult = sqrt(dResult);
    
    printf("Result >> %lf\n", dResult);
 
    return 0;
}