#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int an[4],a0,a1,a2[4];  
    scanf("%d",&a0);  
    getchar();  
    for(int i=3;i>=0;i--){  
        an[i]=a0%10;  
        a0/=10;  
    }  
    while(scanf("%d",&a1)!=EOF){  
        if(a1==0000)  
            break;  
        for(int i=3;i>=0;i--){  
            a2[i]=a1%10;  
            a1/=10;  
        }  
        int as=0,bs=0;  
        for(int i=0;i<4;i++){  
            for(int j=0;j<4;j++){  
                if(an[i]==a2[j] && i==j)  
                    as++;  
                if(an[i]==a2[j] && i!=j)  
                    bs++;  
            }  
        }  
        printf("%dA%dB\n",as,bs);  
    }  
 } 