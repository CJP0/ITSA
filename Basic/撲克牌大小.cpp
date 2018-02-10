#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    char in[999],i0[999],temp,*ptr;  
    int n[999],x,temp0;  
    scanf("%d",&x);  
    getchar();  
    while(x--)  
    {  
        gets(in);  
        int i=0,a=0;  
        ptr=strtok(in," ");  
        while(ptr!=NULL)  
        {  
              
            i0[a]=*ptr;  
            ++ptr;  
            sscanf(ptr,"%d",&temp0);  
            n[a]=temp0;  
            a++;  
            ptr=strtok(NULL," ");  
        }  
        for (int e=0;e<a-1;e++)  
        {  
            for(int j=0;j<a-e-1;j++)  
                if(i0[j]<i0[j+1])  
                {  
                    temp=i0[j];  
                    i0[j]=i0[j+1];  
                    i0[j+1]=temp;  
                    temp0=n[j];  
                    n[j]=n[j+1];  
                    n[j+1]=temp0;  
                }  
                else if(i0[j]==i0[j+1] && n[j]<n[j+1]){  
                    temp0=n[j];  
                    n[j]=n[j+1];  
                    n[j+1]=temp0;  
                }  
        }  
        for(int e=0;e<a;e++)  
            {  
                if(e==(a-1))  
                    printf("%c%d",i0[e],n[e]);  
                else  
                    printf("%c%d ",i0[e],n[e]);  
            }  
        printf("\n");  
    }  
}