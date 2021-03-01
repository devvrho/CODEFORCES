#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    unsigned long long p, a, b, c;
    vector<unsigned long long> times;
    vector<unsigned long long> answers;
    unsigned long long theAnswer = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> p >> a >> b >> c;
        unsigned long long x, y, z;
        if( p % a == 0){
            x = (p/a) * a;
        }
        else{
            x = ((p/a) + 1) * a;
        }
        if( p % b == 0){
            y = (p/b) * b;
        }
        else{
            y = ((p/b) + 1) * b;
        }
        if( p % c == 0){
            z = (p/c) * c;
        }
        else{
            z = ((p/c) + 1) * c;
        }
        times.push_back(x);
        times.push_back(y);
        times.push_back(z);
        sort(times.begin(), times.end());
        theAnswer = times[0] - p;
        answers.push_back(theAnswer);
        times.pop_back();
        times.pop_back();
        times.pop_back();
    }
    for (int i = 0; i < t; i++)
    {
        cout << answers[i] << endl;
    }
}