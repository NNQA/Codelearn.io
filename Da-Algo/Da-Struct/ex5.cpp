#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int 
        n, k , x;
    std::cin >> n;
    std::vector<int> vect;
    while(n--) {
        int a;
        std::cin >> a;
        vect.push_back(a);
    }

    std::cin >> k;
    vect.erase(vect.begin() + k);
    for(auto a : vect) {
        std::cout << a << " ";
    }
    return 0;
}