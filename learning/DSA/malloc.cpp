#include<iostream>
#include<cstdlib>
using std::cout;
int main(){
    int *malloc_pointer;
    malloc_pointer = (int*) malloc(5*sizeof(int));
    if(malloc_pointer){
        cout<<"lets initialize 5 memory blocks with odd numbers\n";
        for (int i=0;i<5;i++)
        *(malloc_pointer +i) = (i*2) + 1;
        cout << "lets see the initialized values of malloc pointers\n";
        for (int i=0;i<5;i++){
            cout<<"malloc_pointer[ " << i << " ]: ";
            cout<< *(malloc_pointer +i) << "\n";
        }
    }
    free(malloc_pointer);
    return 0;
}