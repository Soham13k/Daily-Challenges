#include <iostream>
using namespace std;

long long countDivisors(long long N) {
    long long ans = 1;
    
    int count = 0;
    while (N % 2 == 0) {
        count++;
        N /= 2;
    }
    ans *= (count + 1);

    for (long long i = 3; i * i <= N; i += 2) {
        count = 0;
        while (N % i == 0) {
            count++;
            N /= i;
        }
        ans *= (count + 1);
    }

    if (N > 1) ans *= 2;

    return ans;
}

int main() {
    long long N;
    cin >> N;
    cout << countDivisors(N) << endl;
    return 0;
}
