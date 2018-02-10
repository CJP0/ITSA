#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<ctype.h>  
int main()  
{  
    char in[999],bu;  
    int s,bu1;  
    while(gets(in)!=NULL){  
        scanf("%d",&s);  
        getchar();  
        for(int i=0;i<strlen(in);i++){  
            if(isalnum(in[i])){  
                bu=in[i];  
                bu1=in[i]+s;  
                if(islower ( bu ) && bu1>'z')  
                    bu1-=26;  
                else if(isupper ( bu ) && bu1>'Z')  
                    bu1-=26;  
                else if(isdigit ( bu ) && bu1>'9')  
                    bu1-=10;  
                in[i]=(char)bu1;  
            }  
        }  
        puts(in);  
    }  
} 