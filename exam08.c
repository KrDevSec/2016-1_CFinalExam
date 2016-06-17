#include <stdio.h>

#define YES 1
#define NO 0

int IS_PRIME(int n);    // function prototype
int main(void)
{
    int n;              // input variable
   
    printf(" Input >> ");
    scanf("%d", &n);
    
    printf(" %d %s prime number.\n",
                n,
                (IS_PRIME(n))? "is" : "isn't"
                );   // function call
 
}
int IS_PRIME(int n){
    int i;              // for loop pivot
    int cnt=0;          // divided in variable 'i'
    
    for(i=1; i<=n; i++){
        if(n%i==0)
            cnt++;
        if( cnt > 2 )
            break;
    }
    
    if ( cnt == 2 )
        return YES;      // return 1
    else
        return NO;       // return 0
}