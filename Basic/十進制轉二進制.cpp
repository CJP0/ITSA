#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
int main()  
{  
    int in,bin[8],bu;  
    while(scanf("%d",&in)!=EOF){  
                                int c=1;  
                                bu=in;  
                                for(int i=0;i<8;i++){  
                                        bin[i]=in%2;  
                                        in/=2;  
                                        }  
                                if(bu<0){  
                                         for(int i=0;i<8;i++){  
                                                 if(bin[i]){  
                                                           bin[i]=0+c;   
                                                           c=bin[i]/2;  
                                                           bin[i]%=2;  
                                                           }    
                                                  else{  
                                                      bin[i]=1+c;   
                                                      c=bin[i]/2;  
                                                      bin[i]%=2;  
                                                      }       
                                                 }  
                                         }  
                                for(int i=7;i>=0;i--)  
                                        printf("%d",bin[i]);  
                                printf("\n");  
    }    
} 