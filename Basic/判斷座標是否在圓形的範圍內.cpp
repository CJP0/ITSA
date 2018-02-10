#include<stdio.h>  
#include<stdlib.h>  
#include <string.h>  
#include<math.h>  
int main()  
{  
    char c[20];  
    int a,b,s;  
    double v;  
    while(scanf("%d %d",&a,&b)!=EOF)  
    {  
        v=pow(((a*a)+(b*b)),0.5);  
        if(v>100)  
            printf("outside\n");  
        else  
            printf("inside\n");  
    }  
}