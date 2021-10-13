#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    while(n--) {
        int a;
        std::cin >> a;
        a = a * a;
        std::cout << abs(a) << " ";
    }
    return 0;
}