//  XP 7th first assignment
#include <stdio.h>


int main (void){

    char name = [100];

    printf("What is your name?: \n");
    fgets(name, sizeof(name), stdin);

    printf("Hello  %s,welcome  to your first c program \n",name)



    return 0;
}