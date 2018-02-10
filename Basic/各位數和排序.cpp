#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int s,temp,t0,t1;  
    scanf("%d",&s);  
    getchar();  
    int in[s][2],v=0,n;  
    while(scanf("%d",&temp)!=EOF)  
    {  
        in[v][0]=temp;  
        n=0;  
        while(temp)  
        {  
            n+=temp%10;  
            temp/=10;  
        }  
        in[v][1]=n;  
        v++;  
        if(v==s)  
            break;  
    }  
        for(int i=0;i<(s-1);i++)  
            for(int j=0;j<(s-i-1);j++){  
                if(in[j][1]>in[j+1][1])  
                {  
                    t0=in[j][1];  
                    in[j][1]=in[j+1][1];  
                    in[j+1][1]=t0;  
                    t1=in[j][0];  
                    in[j][0]=in[j+1][0];  
                    in[j+1][0]=t1;  
                }  
                if(in[j][1]==in[j+1][1])  
                    if(in[j][0]>in[j+1][0])  
                    {  
                        t1=in[j][0];  
                        in[j][0]=in[j+1][0];  
                        in[j+1][0]=t1;  
                    }  
            }  
                  
        for(int i=0;i<s;i++){  
            if(i<(s-1))  
                printf("%d ",in[i][0]);  
            else  
                printf("%d",in[i][0]);  
        }  
        printf("\n");  
      
} 