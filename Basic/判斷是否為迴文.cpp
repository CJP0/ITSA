#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>   
int main()  
{  
    char str[100];  
    int x;  
    while(scanf("%s",str)!=EOF)  
    {  
        x = (strlen(str)-1);  
        int c=0;  
        for(int i=0;i<strlen(str);i++)  
        {  
            if(str[i] != str[x-i])  
            {  
                c=1;  
                break;  
            }     
        }  
        if (c==0)  
            printf("YES\n");  
        else  
            printf("NO\n");  
          
    }  
}  