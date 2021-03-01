#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    double k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<double> dragons;
    vector<double> multiples;
    double answer = 0;

    //get multiples in a vector
    //then sort them
    //then remove any duplicates
    multiples.push_back(k);
    multiples.push_back(l);
    multiples.push_back(m);
    multiples.push_back(n);
    sort(multiples.begin(), multiples.end());
    multiples.erase( unique( multiples.begin(), multiples.end() ), multiples.end() );
    int size = multiples.size();

    for( int i = 1; i <= d; i++ ){
        dragons.push_back(i);
    }

    for( int i = 0; i < d; i++ )
    {
        for( int j = 0; j < size; j++ )
        {
            if(dragons[i] != 0){
                if(fmod(dragons[i],multiples[j]) == 0){
                    answer++;
                    dragons[i] = 0;
                }
            }
        }
    }
    cout << answer << endl;
}