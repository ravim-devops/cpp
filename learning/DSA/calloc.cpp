#include<iostream>
#include<cstdlib>
using std::cout;
int main(){
    int *calloc_pointer;
    calloc_pointer = (int*) calloc(10, sizeof(int));
    if(calloc_pointer){
        cout<<"lets initialize 10 memory blocks with even numbers\n";
        for (int i=0;i<10;i++)
        *(calloc_pointer +i) = i*2;
        cout << "lets see the initialized values of calloc pointers\n";
        for (int i=0;i<10;i++){
            cout<<"calloc_pointer[ " << i << " ]: ";
            cout<< *(calloc_pointer +i) << "\n";
        }
    }
    free(calloc_pointer);
    return 0;
}