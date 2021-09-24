#include <stdio.h>
int main()
{
    
 
    int x, y;
    printf("enter the value of x :");
    scanf("%d" , &x);
    printf("enter the value of y:");
    scanf("%d" , &y);
    if (x>y)
    {
        printf("x is greater than y\n");
    }
    if (x<y)
    {
        printf("xis less than y\n");
    }
    if (x==y)
    {
        printf("x is wqual to y\n");
    }
    printf("End of program");
    return 0;
}