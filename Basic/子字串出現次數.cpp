#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    char in0[300],in1[600];  
    while(gets(in0)!=NULL){  
        int sun=0,j;  
        gets(in1);  
        for(int i=0;i<strlen(in1);i++){  
            for(j=0;j<strlen(in0);j++)  
                if(in0[j]!=in1[i+j])  
                    break;  
            if(j==strlen(in0))  
                sun++;  
        }  
        printf("%d\n",sun);  
    }  
} 