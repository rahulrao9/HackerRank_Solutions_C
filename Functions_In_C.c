#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    
    if(a>b && a>c && a>d)
        max=a;
    else if (b>d && b>c && b>a)
        max=b;
    else if(c>b && c>d && c>a)
        max=c;
    else 
        max=d;
    
    return max;
    
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
