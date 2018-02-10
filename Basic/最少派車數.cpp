#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF){  
        int s[n],d[n],a=0,c=0,temp;  
        while(scanf("%d",&temp)!=EOF){  
            if(a%2){  
                d[c]=temp;  
                c++;  
            }  
            else  
                s[c]=temp;  
            a++;  
            if(c==n)  
                break;  
        }  
        for(int i=0;i<n;i++){  
            for(int j=(i+1);j<n;j++){  
                if(d[i]<=s[j]){  
                    c--;  
                    s[j]=0;  
                    break;  
                }  
            }  
        }  
        printf("%d\n",c);  
    }  
 } 