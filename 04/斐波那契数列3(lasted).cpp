#include <iostream>
#include <vector>

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    
    int prev = 1;
    int curr = 1;
    int next;
    
    for (int i = 3; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> test_data;
    
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        test_data.push_back(a);
    }
    
    for (int i = 0; i < n; i++) {
        int result = fibonacci(test_data[i]);
        std::cout << result << std::endl;
    }
    
    return 0;
}
