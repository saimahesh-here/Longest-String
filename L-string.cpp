#include <iostream>
#include <vector>
#include <string>
using namespace std;

void longestCommonSubstring(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    
    // Step 1: Initialize a 2D DP table
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int maxLength = 0;
    int endIndex = 0; // To track the ending index of the longest substring in s1

    // Step 2: Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i;
                }
            }
        }
    }

    // Step 3: Extract the longest common substring
    string result = s1.substr(endIndex - maxLength, maxLength);

    // Step 4: Display the DP table
    cout << "Dynamic Programming Table (2D Grid):\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: Display the results
    cout << "\nLongest Common Substring: " << result << endl;
    cout << "Length of Longest Common Substring: " << maxLength << endl;
}

int main() {
    // Example input strings
    string s1 = "ABABC";
    string s2 = "BABCA";

    // Call the function to find the longest common substring
    longestCommonSubstring(s1, s2);

    return 0;
}
