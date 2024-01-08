#include <bits/stdc++.h>
using namespace std;

// fibonacci series keliye recursive
int fibonacci(int n) {
    // yadi n zero ya one hai toh woh number khud ko return karega
    if (n <= 1) {
        return n;
    }
    // recursively call krenge n-1 and n-2 ko
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// mai code ya driver code......
int main() {
    int n;
    n = 10;
    cout << fibonacci(n);
}