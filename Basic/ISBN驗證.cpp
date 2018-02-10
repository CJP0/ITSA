#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int in1[10];  
    char in0[50],*ptr,t;  
    while(gets(in0)!=NULL){  
        int a=0;  
        ptr=strtok(in0," ");  
        while(ptr!=NULL){  
            sscanf(ptr,"%c",&t);  
            if(t=='X')  
                in1[a]=10;  
            else  
                sscanf(ptr,"%d",&in1[a]);  
            a++;  
            ptr=strtok(NULL," ");  
        }  
        int n=2;  
        while(n--){  
            for(int i=0;i<9;i++)  
                in1[i+1]+=in1[i];  
        }  
        if(in1[9]%11)  
            printf("NO\n");  
        else  
            printf("YES\n");  
    }  
} 