/*
  题目：求组合数
  时间：2022.10.11
  作者：Copur
 */
#include <stdio.h>

int facto(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * facto(n - 1);
    };
}

int main() {
    int m, n;
    if (scanf("%d %d",&m,&n))
    {
        /* code */
    }
    
}