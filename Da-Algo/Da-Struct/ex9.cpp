    #include <iostream>
    #include <cmath>
    #include <vector>
    #include <map>
    #include <algorithm>

    int main() {
        int n;
        std::vector<int> vect;


        std::cin >> n;
        while(n--) {
            int a;
            std::cin >> a;
            vect.push_back(a);
        }

        std::cin >> n;
        while(n--) {
            int a;
            std::cin >> a;
            vect.push_back(a);
        }

        std::sort(vect.begin(), vect.end());

        for(auto a: vect) {
            std::cout << a << " ";
        }

        return 0;
    }