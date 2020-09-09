/*Write String Buffer in C file */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

void main(){
    
    char buffer[BUFFER_SIZE];
    FILE* pointerToFile = fopen("path and file_name", "w");
    
    if(pointerToFile == NULL){
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter contents to store in file : \n");
    fgets(buffer, BUFFER_SIZE, stdin);

    fputs(buffer, pointerToFile);

    fclose(pointerToFile);

    printf("File created and saved successfully. :-) \n");
}
