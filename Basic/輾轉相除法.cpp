#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int i0,i1,m,t;  
    while(scanf("%d %d",&i0,&i1)!=EOF){  
        m=i0;  
        if(i1>i0)  
            m=i1;  
        for(int i=1;i<=m;i++){  
            if((i0%i==0) && (i1%i==0))  
                t=i;  
        }  
        printf("%d\n",t);  
    }  
 } 