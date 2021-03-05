#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> tests;

    //fill answers w/ zeros
    //then change answers to ones for the cases that work
    vector<int> answers;
    for(int i = 0; i < t; i++){
        answers.push_back(0);
    }

    for(int i = 0; i < t; i++){
        int x, n, m;
        cin >> x >> n >> m;

        if(x > (10 * m)){
            while(n > 0){
                x = (x / 2) + 10;
                n--;
            }
        }
        if(x <= (10 * m)){
            answers[i] = 1;
        }
    }

    //print answers
    for(int i = 0; i < t; i++){
        if(answers[i] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}