#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
void sort(int array[],int size);  
int main()  
{  
    int s,in[3];  
    while(scanf("%d",&s)!=EOF){  
        while(s--){  
            int total=0;  
            for(int i=0;i<3;i++)  
                scanf("%d",&in[i]);  
            int pr[in[2]];  
            for(int i=0;i<in[2];i++)  
                scanf("%d",&pr[i]);  
            sort(pr,in[2]);  
            for(int i=0;i<in[1];i++)  
                total+=pr[i];  
            if(total<=in[0])  
                printf("%d\n",total);  
            else  
                printf("Impossible\n");  
        }  
    }  
 }   
void sort(int array[],int size){  
    {  
    int i, j, temp;  
       
    for (i = 0; i < size - 1; i++) {  
        for (j = 1; j < size; j++) {  
            if (array[j - 1] > array[j]) {  
                temp = array[j - 1];  
                array[j - 1] = array[j];  
                array[j] = temp;  
            }  
        }  
    }  
}  
} 