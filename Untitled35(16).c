#include<stdio.h>
int main()

{
    float AvgPumpkin;
    int PriceOfPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    AvgPumpkin = ( (float)PriceOfPumpkin * (float)sales) / (float)daysWorked;
    printf("Average daily profit $ %.2f", AvgPumpkin);

    return 0;

}
