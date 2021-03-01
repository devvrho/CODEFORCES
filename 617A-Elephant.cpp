#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x;
    cin >> x;
    vector <int> steps{ 5, 4, 3, 2, 1 };

    int answer = 0;
    int i = 0;
    while( x > 0 ){
        if(x < steps[i]){
            i++;
        }
        else{
            x = x - steps[i];
            answer++;
        }
    }
    cout << answer << endl;
}
