#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    


char str[1000];
int freq[10];

scanf("%s",str);
for(int i = 0; i<10 ; i++)freq[i]=0;

for (int i=0; i<strlen(str);i++){
    int x = str[i] - '0';
    if(x>=0 && x<=9)
        freq[x]+=1;
}



for (int i=0; i<10 ;i++){
    printf("%d ",freq[i]);
}

    return 0;
}
