#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int in;  
    float s=0,ns=0,n[5][3]={{120,2.1,2.1},{210,3.02,2.68},{170,4.39,3.61},{200,4.97,4.01},{0,5.63,4.5}};  
    while(scanf("%d",&in)!=EOF){  
        for(int i=0;i<5;i++){  
            if(in>n[i][0] & i!=4){  
                s+=n[i][0]*n[i][1];  
                ns+=n[i][0]*n[i][2];  
            }  
            else{  
                s+=in*n[i][1];  
                ns+=in*n[i][2];  
            }  
            in-=n[i][0];  
            if(in<=0)  
                break;  
        }  
        printf("Summer months:%.2f\n",s);  
        printf("Non-Summer months:%.2f\n",ns);  
    }  
}