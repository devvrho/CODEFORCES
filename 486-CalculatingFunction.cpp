#include <iostream>

using namespace std;

int main(){
    unsigned long long n;
    cin >> n;

    signed long long answer = 0;

    if(n % 2 == 0){
        answer = n / 2;
    }
    else{
        answer = (-1) * ((n / 2) + 1);
    }
    cout << answer << endl;
}