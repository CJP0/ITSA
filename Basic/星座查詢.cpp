#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int m,d,s[12][4]={{1,12,2,18},{2,19,3,20},{3,21,4,20},{4,21,5,21},{5,22,6,21},{6,22,7,22},{7,23,8,23},{8,24,9,23},{9,24,10,23},{10,24,11,22},{11,23,12,21},{12,22,1,20}};  
    char *a[12]={"Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittarius","Capricorn"};  
    while(scanf("%d %d",&m,&d)!=EOF){  
        for(int i=0;i<12;i++){  
            if(m==s[i][0] && d>=s[i][1]){  
                printf("%s\n",a[i]);  
            }         
            else if(m==s[i][2] && d<=s[i][3]){  
                printf("%s\n",a[i]);  
            }  
              
        }  
    }  
 } 