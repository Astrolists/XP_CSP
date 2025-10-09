// Xp 7th name decorations
#include <stdio.h>
#include <string.h>

int main (void){
    char username[50];
    char decoration[3] = "<<<";
    char decoration_2[3] = ">>>";
    char decorated_name[50];
    printf("Tell me your username: \n");
    scanf("%s", username);
    strcat(decorated_name, decoration);
    printf("[%s]\n", decorated_name);
    strcat(decorated_name, " ");
    

}