#include <stdio.h>
#include <cs50.h>
#include <math.h>

int biner_length(long biner);

int main(void)
{
    long biner = get_long("Biner: \n");
    long binerLength = biner_length(biner);

    int currentValue = 0;
    double convertedValue = 0;
    double totalValue = 0;
    for(int j = 0; j < binerLength; j++)
    {
        currentValue = biner % 10;
        printf("currentValue: %i\n", currentValue);
        convertedValue = currentValue * pow(2.0, (double) j);
        printf("%lf\n", convertedValue);
        totalValue += convertedValue;
        biner = biner / 10;
    }
    printf("Desimal: %lf\n", totalValue);
}

int biner_length(long biner)
{
    int i = 0;
    do
    {
        biner = biner / 10;
        i++;
    } while (biner > 0);
    int binerLength = i;

    return binerLength;
}