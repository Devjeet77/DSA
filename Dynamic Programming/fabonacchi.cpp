#include <iostream>
#include <vector> 
using namespace std;

int topDown(int n, vector<int>& dp){
      // base case
    if (n == 0 || n == 1)
        return n;
    
    //step 3: check the and already exists or not
    if(dp[n]!=-1){
        return dp[n];
    }
    //step 2: store the an in dp array
    // int ans = topDown(n - 1,dp) + topDown(n - 2, dp);  here replace int ans with dp[n]
    dp[n] = topDown(n - 1,dp) + topDown(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    //step 1: Create DP array
    vector<int> dp(n+1, -1);
    //here -1 represents that we are initializing the dp Array as -1
    int ans = topDown(n, dp);
    cout << "The sum of the given fabonacchi series is : " << ans << endl;
    return ans;

    // return 0;
}