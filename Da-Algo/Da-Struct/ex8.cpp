    #include <iostream>
    #include <cmath>
    #include <vector>
    #include <map>
    #include <algorithm>

    int main() {
        int n;
        int arr[1000];


        std::cin >> n;
        for(int i = 0; i != n; i++) {
            std::cin >> arr[i];
        }

        bool tick1 = true, tick2 = true;
        for(int i = 1; i != n; i++) {
            if(arr[i] <= arr[i - 1]) tick1 = false;
            if(arr[i] >= arr[i - 1]) tick2 = false;
        }
        if(tick1 || tick2) {
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
        return 0;
    }