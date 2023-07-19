#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    int temp,digit;
    int sum=0;
    while (n!=0){
        digit=n%10;
        temp=n-digit;
        n=temp/10;
        sum+=digit;
    }
    printf("%d",sum);
    
    return 0;
}
