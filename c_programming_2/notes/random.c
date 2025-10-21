// Xp, 7th, Random Notes

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    srand(time(NULL));
    char fam[][15] = {"Alex," "Harrison", "Josh", "Wes"};
    for(int i=0; i<5; i++){
    int num = rand()% 4;
    printf("Our random person is %s\n", fam[num]);
    }
    return 0;
}