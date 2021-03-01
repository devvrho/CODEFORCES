#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long index;
    long long half;
    long long answer = 0;

    if(fmod(n,2) == 0){
        half = (n / 2);
        if(k > half){
            index = k - half;
            answer = index * 2;
        }
        else{
            index = k;
            answer = (index * 2) - 1;
        }
    }
    else{
        half = (n / 2) + 1;
        if(k > half){
            index = k - half;
            answer = index * 2;
        }
        else{
            index = k;
            answer = (index * 2) - 1;
        }
    }
    cout << answer << endl;
}