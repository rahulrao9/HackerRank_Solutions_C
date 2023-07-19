#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i = 0;
    int space = -1;
    while (s[i]!='\0'){
        i++;
        if(s[i]==' '){
            
            for(int j=space+1;j<i;j++){
                printf("%c",s[j]);
            }
            space = i;
            printf("\n");
        }
    }
    
    for(int x=space+1;x<strlen(s);x++){
        printf("%c",s[x]);
    }
    
    return 0;
}
