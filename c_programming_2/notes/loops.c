// XP 7th Loops Notes

#include <stdio.h>
#include <string.h>

int main (void){

    int nums[] = {13, 4316, 3162, 1, 67, 88,}; // Arrays
    char candies[][20] = {"twiix", "skitt", "caram", "brown", "bluee"};

    for(int x = 0; x < 6; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy!\n", candies[i]);
    }

    int num = 0;
    while(num < 11);
    printf("%d\n", num);
    num++;
    
    

    return 0;
}