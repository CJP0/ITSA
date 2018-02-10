#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    float a;  
    int b;  
    while(scanf("%f %d",&a,&b)!=EOF){  
        if(b==1)  
            printf("%.1f\n",((a-80)*0.7));  
        else  
            printf("%.1f\n",((a-70)*0.6));  
    }  
} 