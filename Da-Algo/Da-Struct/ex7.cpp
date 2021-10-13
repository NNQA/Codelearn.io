#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int n;
    std::map<int, int> value;
    int arr[100];
    int temp = -1;
    std::cin >> n;
    for(int i = 0; i != n; i++) {
       std::cin >> arr[i];
       if(arr[i] > temp) temp = arr[i];
       value[arr[i]]++;
    }
    
    for(int i = 0; i != temp + 1; i++) {
        if(value[i] > 0) {
            std::cout << i << " - " << value[i] << "; "; 
        }   
    }
    
    return 0;
}