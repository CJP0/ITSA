#include<stdio.h>  
#include<stdlib.h>  
#include <string.h>  
#include<math.h>  
int main()  
{  
    char c[20];  
    int a,b,s;  
    double v;  
    while(scanf("%d",&a)!=EOF)  
    {  
        b=3;  
        s=0;  
        while(b<=a)  
        {  
            s+=b;  
            b+=3;  
        }  
        printf("%d\n",s);  
    }  
}  