#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int in;  
    while(scanf("%d",&in)!=EOF){  
        int t=0;  
        for(int i=2;i<in;i++){  
            if(in%i==0)  
                t++;  
        }  
        if(t)  
            printf("NO\n");  
        else  
            printf("YES\n");  
    }  
 }