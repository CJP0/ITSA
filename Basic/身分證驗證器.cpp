#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int srt[10],v;  
    char in[10];  
    while(gets(in)!=NULL){  
        int a=10;  
        for(int i=65;i<91;i++){  
            if(i==73){  
                if(in[0]==73){  
                    a=34;  
                    break;  
                }  
                continue;     
            }  
            else if(i==79){  
                if(in[0]==79){  
                    a=35;  
                    break;  
                }  
                continue;  
            }  
            else if(i==87){  
                if(in[0]==87){  
                    a=32;  
                    break;  
                }  
                continue;  
            }  
            else{  
                if(in[0]==i)  
                    break;  
                else  
                    a++;  
            }  
        }  
        if(in[0]=='Z')  
            a=33;  
        v=(a/10)+(9*(a%10))+(8*(in[1]-'0'))+(7*(in[2]-'0'))+(6*(in[3]-'0'))+(5*(in[4]-'0'))+(4*(in[5]-'0'))+(3*(in[6]-'0'))+(2*(in[7]-'0'))+(in[8]-'0')+(in[9]-'0');  
        if(v%10==0)  
            printf("CORRECT!!!\n");  
        else  
            printf("WRONG!!!\n");  
    }  
 } 