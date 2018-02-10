#include<stdio.h>  
#include<stdlib.h>  
#include <string.h>  
int main()  
{  
    char a[20];  
    int s;  
    while(scanf("%d",&s)!=EOF)  
    {  
        if(s<3 | s==12)  
            printf("Winter\n");  
        else if(s<6)  
            printf("Spring\n");  
        else if(s<9)  
            printf("Summer\n");  
        else if(s<12)  
            printf("Autumn\n");  
          
    }  
}  