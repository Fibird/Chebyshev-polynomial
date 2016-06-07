#include <stdio.h>
#include <stdlib.h>

double Cheby(int n, double x)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        return (2 * x * Cheby(n - 1, x) - Cheby(n - 2, x));
    }
}
int main()
{
    int n;
    double x, t;
    printf("Please enter n: ");
    scanf("%d", &n);
    printf("Please enter x: ");
    scanf("%lf", &x);
    t = Cheby(n, x);
    printf("The result of T%d(%lf)=%lf\n", n, x, t);
    return 0;
}
