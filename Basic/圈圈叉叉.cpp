#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    int in[9],a=0;  
    while(scanf("%d",&in[a])!=EOF & a<8)  
        a++;  
    if((in[0]+in[1]+in[2])==3 || (in[0]+in[1]+in[2])==0)  
        printf("True\n");  
    else if((in[3]+in[4]+in[5])==3 || (in[3]+in[4]+in[5])==0)  
        printf("True\n");  
    else if((in[6]+in[7]+in[8])==3 || (in[6]+in[7]+in[8])==0)  
        printf("True\n");  
    else if((in[0]+in[3]+in[6])==3 || (in[0]+in[3]+in[6])==0)  
        printf("True\n");  
    else if((in[1]+in[4]+in[7])==3 || (in[1]+in[4]+in[7])==0)  
        printf("True\n");  
    else if((in[2]+in[5]+in[8])==3 || (in[2]+in[5]+in[8])==0)  
        printf("True\n");  
    else if((in[0]+in[4]+in[8])==3 || (in[0]+in[4]+in[8])==0)  
        printf("True\n");  
    else if((in[2]+in[4]+in[6])==3 || (in[2]+in[4]+in[6])==0)  
        printf("True\n");  
    else  
        printf("False\n");  
} 