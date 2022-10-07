/*
  题目：掉入陷阱的数字
  时间：2022.10.7
  作者：Copur
 */

#include <stdio.h>

int sumn(int n)
{
    int sum = 0;
    for (int i = 0; i <= 9; i++)
    {
        if ((n * 10) / 10 == 0)
        {
            break;
        }
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int trap(int n)
{
    return sumn(n) * 3 + 1;
}

int main()
{
    int n;
    if (scanf("%d", &n))
    {
        int temp = 0;
        for (int i = 1;; i++)
        {
            if (temp != trap(n))
            {
                temp = trap(n);
                printf("%d:%d\n", i, temp);
                n = trap(n);
            }
            else
            {
                if (i > 2)
                {
                    printf("%d:%d\n", i, temp);
                }
                break;
            }
        }
    }
}
