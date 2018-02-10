#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int sun,t;  
    char str[999];  
    scanf("%d",&t);  
    getchar();  
    while(t--)  
    {  
        gets(str);  
        sun=0;  
        for(int i=0;i<strlen(str);i++)  
            sun+=str[i];  
        printf("%d\n",sun);  
    }  
} 