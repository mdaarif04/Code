#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    printf("Enter number of a\n");
    scanf("%d",&a);
    printf("Enter number of b\n");
    scanf("%d",&b);
    printf("Enter number c\n");
    scanf("%d",&c);
    printf("Enter number d\n");
    scanf("%d",&d);

    int ans;
    if (a > b && a > c && a > d)
        ans = a;
    else if (b > c && b > d)
        ans = b;
    else if (c > d)
        ans = c;
    else
        ans = d;
    return ans;
    
}
