#include <iostream>
#include <algorithm>  
using namespace std;

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;  
}

int main() {
    long long N, M;
    cin >> N >> M;  
    cout << lcm(N, M) << endl;  
    return 0;
}
