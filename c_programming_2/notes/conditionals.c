// XP 7th Conditionals
#include <stdio.h>
#include <string.h>

/* Logical operators
&& and
| | or
!not
*/
int main (void){

    int grade;
    char name[50];
    printf("What is your grade percent?\n");
    scanf("%d\n", &grade);

    printf("What is your name?\n");
    scanf("%c\n", &name);

    if (strcmp(name, "Xander")== 0){
        printf("You dont deserve a grade");
    }else if(grade >= 90){
        printf("You have an a!\n");
    }else if(grade >= 80){
    printf("You have a B!\n");
    }else if (grade >= 70){
        printf("You have a C!\n");
    }else{
    printf("You are failing\n");
    }
    

    return 0;
}