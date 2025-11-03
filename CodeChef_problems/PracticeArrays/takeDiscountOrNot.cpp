#include <iostream>
#include <vector>
using namespace std;
int main()
 {
    int T;
    cin >> T;
    while (T--) 
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        long long total_without_coupon = 0;
        long long total_with_coupon = X;
        for (int i = 0; i < N; i++)
        {
            total_without_coupon += A[i];
            int discounted_price = A[i] - Y;
            if (discounted_price < 0)
                discounted_price = 0;
            total_with_coupon += discounted_price;
        }
        if (total_with_coupon < total_without_coupon)
            cout << "COUPON\n";
        else
            cout << "NO COUPON\n";
    }
}
