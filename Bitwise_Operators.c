#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0,or=0,xor=0;
  for (int i = 1;i<=n;i++){
      for(int j = 1; j<= n ; j++){
          if(i!=j){
          int temp;
          temp = i&j;
          if (temp>and && temp<k)
            and = temp;
          temp=i|j;
          if (temp>or && temp<k)
            or = temp;
          temp = i^j;
          if (temp>xor && temp<k)
            xor = temp;
          }
      }
  }
printf("%d\n%d\n%d\n",and,or,xor);  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
