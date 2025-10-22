// Xp 7th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){
    float monthly_rent;
    float monthly_utility;
    float monthly_income;
    float monthly_transportation;
    float monthly_groceries;

    float number1, total1, percentage1;
    float number2, total2, percentage2;
    float number3, total3, percentage3;
    float number4, total4, percentage4;
    float number5, total5, percentage5;
    printf("What is your monthly rent?\n");
    scanf("%f", &monthly_rent);
    printf("Please also input your income.");
    scanf("%d", total1);
    percentage1 = (number1/total1)*100;
    printf("The percentage of rent to income is: %.2f%%\n", percentage1);

    printf("what is your monthly utility bill?\n");
    scanf("%f", &monthly_utility);

    printf("what is your monthly income?\n");
    scanf("%f", &monthly_income);

    printf("What is your monthly transportation cost?\n");
    scanf("%f",&monthly_transportation);

    printf("What is your monthly grocery bill?");
    scanf("%f", &monthly_groceries);

    



}