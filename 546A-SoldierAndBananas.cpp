#include <bits/stdc++.h>

int main(){
    int k, n, w;
    std::cin >> k >> n >> w;

     // Total cost of all bananas
     int cost = 0;
     for(int i = 1; i <= w; i++){
         cost += (i * k);
     }

     std::cout << cost - n;

    return 0;
}