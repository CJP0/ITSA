#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int n,sp,i1[100]={0},i2[100]={0},m,rt,out[100];  
    char in[200];  
    scanf("%d",&n);  
    getchar();  
    while(n--){  
        gets(in);  
        for(int i=0;i<strlen(in);i++){  
            if(in[i]==32){  
                sp=i;  
                break;  
            }  
        }  
        if(sp>=(strlen(in)/2))  
            m=sp-1;  
        else  
            m=strlen(in)-sp-2;  
        rt=strlen(in);  
        for(int i=m;i>=0;i--){  
            rt--;  
            if(in[rt]==32)  
                break;  
            i2[i]=in[rt]-'0';  
        }  
        if(in[rt-1]==32)  
            rt--;  
        for(int i=m;i>=0;i--){  
            rt--;  
            if(rt<0)  
                break;  
            i1[i]=in[rt]-'0';  
        }  
        int t=0;  
        for(int i=m;i>=0;i--){  
            out[i]=(i1[i]+i2[i]+t)%10;  
            t=(i1[i]+i2[i]+t)/10;  
        }  
        if(t){  
            m++;  
            for(int i=m;i>0;i--)  
                out[i]=out[i-1];  
            out[0]=t;  
        }  
        for(int i=0;i<=m;i++)  
            printf("%d",out[i]);  
        printf("\n");  
        for(int i=0;i<=m;i++){  
            i1[i]=0;  
            i2[i]=0;  
            out[i]=0;  
        }  
    }  
}