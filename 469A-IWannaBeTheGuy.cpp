#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> levels;

    int q;
    cin >> q;
    int qVal;
    for( int i = 0; i < q; i++ ){
        cin >> qVal;
        levels.push_back(qVal);
    }
    int p;
    cin >> p;
    int pVal;
    for( int i = 0; i < p; i++ ){
        cin >> pVal;
        levels.push_back(pVal);
    }

    sort(levels.begin(), levels.end());
    levels.erase( unique( levels.begin(), levels.end() ), levels.end() );
    if(levels.size() == n){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
}