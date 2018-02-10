#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    float in[10],m=0,n=0,temp;  
    int a=0;  
    while(scanf("%f",&in[a])!=EOF & a<9){  
        a++;  
    }  
      
    for(int i=0;i<9;i++){  
        for(int j=0;j<(9-i);j++){  
            if(in[j]>in[j+1]){  
                temp=in[j];  
                in[j]=in[j+1];  
                in[j+1]=temp;  
            }  
        }  
    }  
    printf("maximum:%.2f\n",in[9]);  
    printf("minimum:%.2f\n",in[0]);   
              
}  