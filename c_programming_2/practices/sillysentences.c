#include <stdio.h>
#include <string.h>

int main (void){
    char username[50];
    char decoration[6] = "<<<<<<";
    char decoration_2[6] = ">>>>>>";
    printf("Tell me your username: \n");
    scanf("%s", username);
    strcat(decoration, username);
    printf(strcat);

}