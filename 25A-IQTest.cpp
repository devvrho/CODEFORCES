#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        v.push_back(val);
    }

    int first = v[0] % 2;
    int last = v[n - 1] % 2;

    if(first == last){
        for(int i = 0; i < n - 1; i++){
            if(v[i] % 2 != v[i+1] % 2){
               if(v[i] % 2 == first && v[i] % 2 == last){
                   cout << i + 2 << endl;
                   break;
               }
               else{
                   cout << i + 1 << endl;
                   break;
               }
            }
        }
    }
    else{
        if(first == v[1] % 2){
            cout << n << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}