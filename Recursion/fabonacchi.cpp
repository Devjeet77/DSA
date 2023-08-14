#include <iostream>
using namespace std;

int fabonacchiRec(int n)
{
    // base case
    if (n == 2)
        return 1;
    if (n == 1)
        return 0;

    int ans = fabonacchiRec(n - 1) + fabonacchiRec(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int ans = fabonacchiRec(n);
    cout << "The sum of the given fabonacchi series is" << ans << endl;
    return 0;
}