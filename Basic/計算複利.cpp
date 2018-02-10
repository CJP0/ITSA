#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
int main()  
{  
    double r, p;  
    int n,p0;  
    while (scanf("%lf", &r) != EOF) {  
        scanf("%d", &n);  
        scanf("%lf",&p);  
        p0 = p;  
        while (n--) {  
            p += p*r;  
            if(n)  
                p+=p0;  
        }  
        p=floor(p);  
        printf("%.0lf\n",p);  
    }  
} 