// Xp 7th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){
    float monthly_rent;
    float monthly_utility;
    float monthly_income;
    float monthly_transportation;
    float monthly_groceries;

   
    printf("What is your monthly rent?\n");
    scanf("%f", &monthly_rent);

    printf("what is your monthly utility bill?\n");
    scanf("%f", &monthly_utility);

    printf("what is your monthly income?\n");
    scanf("%f", &monthly_income);

    printf("What is your monthly transportation cost?\n");
    scanf("%f",&monthly_transportation);

    printf("What is your monthly grocery bill?");
    scanf("%f", &monthly_groceries);

    int rent_percentage = (monthly_rent * 100) / monthly_income;
    int utility_percentage = (monthly_rent * 100) / monthly_income;
    int grocery_percentage = (monthly_groceries * 100) / monthly_income;
    int transportation_percentage = (monthly_transportation * 100)/ monthly_income;
    



}