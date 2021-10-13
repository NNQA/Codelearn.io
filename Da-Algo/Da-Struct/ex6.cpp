#include <iostream>
#include <cmath>
#include <vector>

bool check(int n) {
    if(n == 1) return false;
    for (int i = 2; i != n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int 
        n, k , x;
    int arr[100];

    std::cin >> n;
    for(int i = 0; i != n; i++) {
        std::cin >> arr[i];
    }

    for(int i = 0; i != n; i++) {
        if(check(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }
    return 0;
}