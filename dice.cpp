#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int rn= (rand() % 5) + 1;
    cout << "You rolled a dice and got: "<< rn << endl;
    
    return 0;
}