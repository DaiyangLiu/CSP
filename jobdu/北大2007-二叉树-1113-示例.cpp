#include <iostream>  
#include <stdio.h>  
using namespace std;  
  
int main()  
{  
    int m, n, sum, left, right;  
    while(scanf("%d %d", &m, &n) && (m || n))  
    {  
        sum = 0;  
        if(m == n) sum = 1;  
        else  
        {  
            if(m <= n)   sum = 1;  
            left = 2 * m, right = 2 * m + 1;  
            while(n > right)  
            {  
                sum += (right - left + 1);  
                left *= 2, right = right * 2 + 1;  
                printf("%d\n",right); 
            }  
            if(n >= left) sum = sum + (n - left + 1);  
        }  
        printf("%d\n", sum);  
    }  

    return 0;  
}
