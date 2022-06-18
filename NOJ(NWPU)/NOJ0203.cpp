#include <iostream>
#include <string>
using namespace std;
int main()
{
    int y, m, d, days, i;
    int sum = 0;
    scanf("%d-%d-%d", &y, &m, &d);
    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        mon[1] = 29;
    for (i = 0; i < m - 1; i++)
        sum = sum + mon[i];
    sum = sum + d;
    printf("%d", sum);
    return 0;
}
