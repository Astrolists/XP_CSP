// XP 7th old enough
#include <stdio.h>
#include <math.h>

int main (void){
    int age;

    printf("What is your age?\n");
    scanf("%d", &age);

if (age < 3){
    printf("Youre a toddler.");      
}else if (age == 15){
    printf("You can get a learners permit!");
}else if (age == 16){
    printf("You can get a drivers license!");
}else if (age >= 18){
    printf("You can vote");
}else(age < 15 && age == 4);{
    printf("You should be in school!");
}
}