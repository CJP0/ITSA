#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int in,m,c,s;  
  
        scanf("%d",&in);  
        if(in%4==0 & in%100!=0)  
            printf("Bissextile Year\n");  
        else if(in%400==0)  
            printf("Bissextile Year\n");  
        else  
            printf("Common Year\n");  
          
      
} 