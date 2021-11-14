#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <cstdio>
#include <cstdlib>

void print(int val)
{
    if (val == 0)
    {
        putchar('0');
    }

    if (val < 0)
    {
        val = -val;
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
        putchar(invVal % 10 + '0');
        invVal = invVal / 10;
    }
}


int main (int argc, char* argv[])
{

    int val;

    printf("Type a number:\n");

    scanf("%d", &val);

    print(val);

    return 0;
}
