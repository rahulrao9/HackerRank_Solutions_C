#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float c,d,ans3,ans4;
    int a,b,ans1,ans2;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    ans1=a+b;
    ans2=a-b;
    ans3=c+d;
    ans4=c-d;
    printf("%d %d\n%.1f %.1f",ans1,ans2,ans3,ans4);
    
    
    return 0;
}
