#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>   
#include<ctype.h>   
int main()  
{  
    char str[999];  
    int x[26]={0},s[26]={0};  
    while(gets(str)!=NULL)  
    {  
        int n=1;  
        for(int i=0;i<strlen(str);i++)  
        {  
            if(str[i]==32)  
                n+=1;  
            else  
            {  
                if(isupper(str[i]))  
                    x[str[i]-65]+=1;  
                s[str[i]-97]+=1;  
            }  
        }  
  
        printf("%d\n",n);  
        for(int i=0;i<26;i++)  
        {  
            if(x[i])  
                printf("%c : %d\n",(i+65),x[i]);  
            if(s[i])  
                printf("%c : %d\n",(i+97),s[i]);  
            x[i]='\0';  
            s[i]='\0';  
        }  
        memset(str, '\0', strlen(str));  
    }  
 } 