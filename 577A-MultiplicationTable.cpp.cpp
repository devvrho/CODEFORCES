#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    unsigned long n;
    cin >> n;
    unsigned long x;
    cin >> x;

    unsigned long ans = 0;

    for( unsigned long i = 1; i <= n; i++ ){
        if(fmod(x,i) == 0){
            if((x / i) <= n){
                ans++;
            }
        }
    }
    cout << ans << endl;
}
