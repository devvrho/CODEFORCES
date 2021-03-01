#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> luckies {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int size;
    size = luckies.size();
    bool maybe = false;
    for(int i = 0; i < size; i++){
        if(n % luckies[i] == 0){
            maybe = true;
            break;
        }
    }
    if(maybe){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}