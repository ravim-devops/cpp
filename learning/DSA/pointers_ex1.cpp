#include<iostream>
using std::cout;

void swap(int *firstvar, int *secvar){
    int temp = *firstvar;
    *firstvar = *secvar;
    *secvar = temp;
    return;
}

int main()
{
    int m = 10;
    int n = 20;
    cout<<"before swap m= " << m <<" n= "<< n <<"\n";
    swap(&m,&n);
    cout<<"after swap m= " << m << " n " <<n;
    return 0;
}