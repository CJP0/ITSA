#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <ctype.h>  
void strlwrs(char string[]);  
int main()  
{  
    char *str[200],*ptr,in[1001];  
    while(gets(in)!=NULL){  
        strlwrs(in);  
        ptr=strtok(in," ");  
        int p=0,p1;  
        while(ptr!=NULL){  
            p1=1;  
            for(int i=0;i<p;i++){  
                if((strcmp(*(str+i),ptr))==0){  
                    p1=0;  
                    break;  
                }  
                else{  
                    continue;  
                }  
            }  
            if(p1){  
                *(str+p)=ptr;  
                p++;  
            }  
            ptr=strtok(NULL," ");  
        }  
        p--;  
        for(int i=0;i<p;i++)  
            printf("%s ",*(str+i));  
        printf("%s\n",*(str+p));  
    }  
 }   
void strlwrs(char string[])   
{  
    int i = 0;   
    while (string[i] != '\0')   
    {  
        if (string[i] >= 'A' && string[i] <= 'Z') {  
            string[i] = string[i] + 32;  
        }  
        i++;  
    }  
} 