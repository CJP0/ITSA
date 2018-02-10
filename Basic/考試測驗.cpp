#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int n,in[3];  
    scanf("%d",&n);  
    while(n--){  
        int totol=0,x=0,x8=0;  
        for(int i=0;i<3;i++){  
            scanf("%d",&in[i]);  
            totol+=in[i];  
            if(in[i]<60)  
                x++;  
            if(in[i]>=80)  
                x8++;  
        }  
        if(x==0)  
            printf("P\n");  
        else if((x==1) && (totol>=220))  
            printf("P\n");  
        else if((x==1) && (totol<220))  
            printf("M\n");  
        else if((x==2) && (x8==1))  
            printf("M\n");  
        else  
            printf("F\n");  
    }  
      
 } 