#include<stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, *new_ptr;
    ptr = (int*) malloc(4*sizeof(int));
    if (ptr == NULL){
    printf("memory allocation failed!\n");
    exit(1);
    }
    //initializing ptr variables
    for(int i=0;i<4;i++){
        *(ptr +i) = (i*2) +1; //ptr contains 4 odd numbers
    }
    new_ptr = (int*) realloc(ptr, 8*sizeof(int));
    if (new_ptr == NULL){
    printf("memory allocation failed!\n");
    exit(1);
    }
    //initializing new_ptr variables fro index 4 onwards
    for(int i=4;i<8;i++){
        *(ptr +i) = (i*2); //new_ptr contains 4 even numbers, appended at end of ptr 
    }

    //print all variables stored in new_ptr
    for (int i=0;i<8;i++){
        printf("values stored at new_ptr[ %d ]: %d \n", i, *(new_ptr + i));
    }
    free(ptr);
    free(new_ptr);

}