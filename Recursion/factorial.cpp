#include <iostream>
using namespace std;

int fact(int n)
{
    // base case is must
    if (n == 1)
        return 1;
    int ans = n * fact(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n:-" << endl;
    cin >> n;
    int ans = fact(n);
    cout << "the factorial of n is " << ans << endl;
    return 0;
}