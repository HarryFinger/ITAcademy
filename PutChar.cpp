#include <cstdio>

void print(int val)
{
    if (val < 0)
    {
        val = ~val + 1;
        putchar('-');
    }

    int invVal = 0;

    while (val != 0)
    {
        invVal = invVal * 10 + val % 10;
        val /= 10;
    }

    while (invVal != 0)
    {
        putchar(invVal % 10 + 48);
        invVal = invVal / 10;
    }
}


int main()
{
    int val;

    printf("Type a number:\n");

    scanf_s("%d", &val);

    print(val);
}
