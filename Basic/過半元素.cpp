#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    char *ptr,in[999];  
    int str[100][2],s[100][2],temp,a=0,n,r=0,m=0,m0;  
    while(gets(in)!=NULL){  
    a=0;  
    ptr=strtok(in," ");  
    while(ptr!=NULL){  
        sscanf(ptr,"%d",&str[a][0]);  
        str[a][1]=1;  
        a++;  
        ptr=strtok(NULL," ");  
    }  
    r=0;  
    for(int i=0;i<a;i++){  
        if(str[i][1]){  
            n=0;  
            for(int j=i;j<a;j++){  
                if(str[i][0] == str[j][0]){  
                    n++;  
                    str[j][1]=0;  
                }  
            }  
            s[r][0]=str[i][0];  
            s[r][1]=n;  
            r++;  
        }  
    }  
    for(int i=0;i<r;i++){  
        if(s[i][1]>m){  
            m=s[i][1];  
            m0=i;  
        }  
    }  
    if((a/2)<m)  
        printf("%d\n",s[m0][0]);  
    else  
        printf("NO\n");  
      
    m=0;  
    }  
 } 