#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int a,b;  
    while(scanf("%d %d",&a,&b)!=EOF){  
        int ar[a*b];  
        for(int i=0;i<a*b;i++)  
            scanf("%d",&ar[i]);  
        for(int i=0;i<b;i++){  
            for(int j=0;j<a;j++){  
                if(j==(a-1))  
                    printf("%d",ar[i+(j*b)]);  
                else  
                    printf("%d ",ar[i+(j*b)]);  
            }     
            printf("\n");  
        }  
    }  
}  