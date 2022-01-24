#include<iostream>
using std::cout;
int main(){
    //array with 5 elements
    int arr[5] = {10,20,30,40,50};
    int *ptr;
    ptr = arr;
    cout <<"array values using pointers\n";
    for (int i=0;i<5;i++){
        cout<< "*(ptr + " << i << "): ";
        cout<< *(ptr + i) << " \n";
    }
    cout <<"array values using arrays address refrencing\n";
    for (int i=0;i<5;i++){
        cout<< "*(arr + " << i << "): ";
        cout<< *(arr + i) << " \n";
    }
    cout <<"array values using its values\n";
    for (int i=0;i<5;i++){
        cout<<"arr[" << i << "]: ";
        cout<< arr[i] << " \n";
    }
return 0;
}