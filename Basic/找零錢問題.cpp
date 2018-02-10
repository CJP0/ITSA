#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    int in[4],totol,a=0,t;  
    char *temp,str[99];  
    gets(str);  
    temp=strtok(str,",");  
    while(temp!=NULL){  
        sscanf(temp,"%d",&t);  
        in[a]=t;  
        a++;  
        temp=strtok(NULL,",");  
    }  
    totol=in[1]*15+in[2]*20+in[3]*30;  
    if(totol>in[0])  
        printf("0\n");  
    else  
    {  
        in[0]-=totol;  
        printf("%d,",in[0]%5);  
        in[0]-=in[0]%5;  
        printf("%d,",(in[0]%50)/5);  
        printf("%d\n",in[0]/50);  
    }  
} 