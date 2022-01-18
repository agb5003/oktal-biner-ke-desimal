#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_length(long oktal);

int main(void)
{
    long oktal = get_long("Oktal: \n");
    int oktalLength = get_length(oktal);

    int currentValue = 0;
    double convertedValue = 0;
    double decimal= 0;
    for(int i = 0; i < oktalLength; i++)
    {
        currentValue = oktal % 10;
        convertedValue = currentValue * pow(8.0, (double) i);
        decimal += convertedValue;
        oktal = oktal / 10;
    }

    printf("Decimal: %lf\n", decimal);

}

int get_length(long oktal)
{
    int i = 0;
    do
    {
        oktal = oktal / 10;
        i++;
    } while (oktal > 0);
    return i;
}