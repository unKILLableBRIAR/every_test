#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main(){
    char file_name[100];
    scanf("%s", file_name);
    
    FILE* fp1 = fopen(file_name, "r");
    if(fp1 == NULL){
        fprintf(stderr, "Can't open this file!\n");
        return 1;
    }

    student tmp_student;
    int flag = 0;
    char tmp_str[50];
    int tmp_id;

    while(fscanf(fp1, "%d %s %s %s %s", &tmp_student.id, tmp_student.name, tmp_student.univ, tmp_student.major, tmp_student.home) == 5){
        printf("id : %d\n", tmp_student.id);
        printf("name : %s\n", tmp_student.name);
        printf("univ : %s\n", tmp_student.univ);
        printf("major : %s\n", tmp_student.major);
        printf("home : %s\n", tmp_student.home);
        printf("\n");
    }   

    fclose(fp1);

    return 0;
}