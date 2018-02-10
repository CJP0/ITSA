#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>
void nsort(int array[])
{
    int i, j, temp,size=4;
     
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
int main()  
{  
    int in[4],m,c,s;  
	
	  
        for(int i=0;i<4;i++)  
            scanf("%d",&in[i]);  
        nsort(in);
        c=0;
        for(int i=0;i<4;i++){
        	for(int j=0;j<4;j++){
        		if(in[i]==in[j] && i!=j){
        			c++; 
        			m=in[i];
				}
			}	
		}
        int t=0;
        switch(c)  
        {  
            case 2 : 
            	for(int i=0;i<4;i++)
            		if(in[i]!=m)
            			t+=in[i];
				printf("%d\n",t);  
                break;  
            case 4 : printf("%d\n",in[2]+in[3]);  
                break;  
            case 12 : printf("WIN\n");  
                break;  
            default : printf("R\n");  
        }  
    
}