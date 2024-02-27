#include <iostream>
#include <ctime>

using namespace std;

int main(){
   
    srand(time(0));
    int rn= rand() % 10;
    cout << rn;

    return 0;
}