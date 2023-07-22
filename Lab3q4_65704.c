#include <stdio.h>
int main()
{
    int a;
    int b = 0;
    int cnt = 0;
    printf("enter number : ");
    scanf("%d", &a);
    if(a>0)
        b += a;
    else
        return 0;
    while (a > 0)
    {

        printf("enter number : ");
        scanf("%d", &a);
        if(a>0)
            b += a;
            cnt++;
    }
    printf("sum = %d\n avg = %d\n", b, b / cnt);

    return 0;
}
