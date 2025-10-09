// Xp 7th name decorations
#include <stdio.h>
#include <string.h>

int main (void){
    
    char username[20];
    printf("What is your username?:\n");
    scanf("%s", username);


    char decorated_username[30];
    strcat(username, decorated_username);

    printf("<<<%s %s>>>", username);

}