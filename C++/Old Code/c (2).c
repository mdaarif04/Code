#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i < 15; i++)
    {
        printf("%d\n",i);
        if (n==10)
        {
           break;
        }
        
    }
    
    return 0;
}