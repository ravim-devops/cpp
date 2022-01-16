#include <iostream>
using std::cout; 
using std::cin;
int main(){
    int guess = 7, number;
    bool keeplooping = true;

    while(keeplooping)
    {
        cout<< "enter your guess number \n";
        cin>> number;
        if (number > guess)
        cout<< number << " too high, keep going... \n";
        if (number < guess)
        cout<< number << " too low, keep going... \n";
        if (number == guess)
        {
            cout<< number << " it is! congrats you have number \n";
            keeplooping = false;
        }
        
    }

return 0;
}