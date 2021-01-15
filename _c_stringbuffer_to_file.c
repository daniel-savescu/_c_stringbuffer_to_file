#include <stdio.h>
#include <stdlib.h>

#define bufferSize 100

void writeToFile(char* stringBuffer, FILE* file);

int main(){

 char buffer[bufferSize];

 FILE* pointerToFile = fopen( "filename", "w");

 if(pointerToFile == NULL){
    printf("Unable to create file.\n");
    exit(EXIT_FAILURE);
  }
  else{
    writeToFile(buffer, pointerToFile);
  }
return 0;
}

void writeToFile(char* stringBuffer, FILE* file){

 printf("Enter contents to store in file : \n");

 fgets(stringBuffer, bufferSize, stdin);
 fputs(stringBuffer, file);
 fclose(file);

 printf("File created and saved successfully. :-) \n");

}
