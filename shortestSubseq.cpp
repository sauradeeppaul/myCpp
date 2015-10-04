// C++ program to find the longest repeating
// subsequence
#include <iostream>
#include<string>
using namespace std;
 
int findLongestRepeatingSubSeq(string str)
{
    int n = str.length();
 
    // Create and initialize DP table
    int dp[n+1][n+1];
    for (int i=0; i<=n; i++)
        for (int j=0; j<=n; j++)
            dp[i][j] = 0;
 
    // Fill dp table (similar to LCS loops)
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            // If characters match and indexes are not same
            if (str[i-1] == str[j-1] && i!=j)
                dp[i][j] =  1 + dp[i-1][j-1];                               
            // If characters do not match
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    cout<<dp;
    return dp[n][n];
}
 
// Driver Program
int main()
{
    string str;
    cin>>str;
    cout << "The length of the largest subsequence that"
            " repeats itself is : "
        << findLongestRepeatingSubSeq(str);
    return 0;
}
