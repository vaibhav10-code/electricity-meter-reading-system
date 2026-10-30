#include <stdio.h>

int calculateunits(int x, int y)// x= previous units, y= current units

{
    return y-x;
}

float calculatebill(int units)
{
    if (units<=100)
        return units* 3.0;
    else if (units<=200)
        return 100* 3.0+ (units-100)* 5.0;
    else
        return 100* 3.0 + 100* 5.0 + (units-200)* 7.0;
}

void displayreport(char name[], int x, int y,
                   int units, float bill)
{
    printf("bill report \n");
    printf("customer name: %s \n", name);
    printf("previous reading: %d \n", x);
    printf("current reading: %d \n", y);
    printf("units used: %d \n", units);
    printf("total Bill: rupeees %.2f \n", bill);
}

int main()
{
    char name[50];
    int x,y, units;
    float bill;

    printf("Enter customer name:");
    scanf(" %49[^\n]", name);

    printf("Enter previous reading:");
    scanf("%d",&x);

    printf("Enter current reading:");
    scanf("%d",&y);

    if (x<0 || y<x)
    {
        printf("wrong reading in meter \n");
        return 0;
    }

    units = calculateunits(x,y);
    bill = calculatebill(units);

    displayreport(name, x, y,units,bill);

    return 0;
}
