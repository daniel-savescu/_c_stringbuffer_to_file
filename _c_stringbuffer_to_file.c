/* StringBuffer To File */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int main(){

 char buffer[BUFFER_SIZE];

 FILE* pointerToFile = fopen( /*path and file name*/, "w");

 if(pointerToFile == NULL){
    printf("Unable to create file.\n");
    exit(EXIT_FAILURE);
  }
  else{
    printf("Enter contents to store in file : \n");
    fgets(buffer, BUFFER_SIZE, stdin);
    fputs(buffer, pointerToFile);
    fclose(pointerToFile);
    }
  printf("File created and saved successfully. :-) \n");
  return 0;
}
