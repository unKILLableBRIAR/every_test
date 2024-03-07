#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main(){
    student* tmp;
    tmp = (student*)malloc(sizeof(student));
    tmp -> id = 20220000;
    strcpy(tmp -> name, "my_name");
    strcpy(tmp -> univ, "hannam");
    strcpy(tmp -> major, "computer_science");
    strcpy(tmp -> home, "Daejeon");

    printf("학번 : %d\n", tmp -> id);
    printf("이름 : %s\n", tmp -> name);
    printf("학교 : %s\n", tmp -> univ);
    printf("전공 : %s\n", tmp -> major);
    printf("집 : %s\n", tmp -> home);

    free(tmp);

    return 0;
}