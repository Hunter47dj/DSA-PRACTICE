//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     unordered_map<string, set<string>> memo;

    // A helper function to generate a unique key for the memoization table
    string makeKey(int i, int j, const string& current) {
        return to_string(i) + "|" + to_string(j) + "|" + current;
    }

    void backtrack(const string &s, const string &t, int i, int j, vector<vector<int>> &dp, string current, set<string> &result, int lcsLength) {
        // Base case: if we've found a subsequence of the correct length, store it
        if (current.size() == lcsLength) {
            result.insert(current);
            return;
        }

        // Generate a key for memoization
        string key = makeKey(i, j, current);
        if (memo.find(key) != memo.end()) {
            result.insert(memo[key].begin(), memo[key].end());
            return;
        }

        set<string> localResult;

        while (i > 0 && j > 0) {
            if (s[i - 1] == t[j - 1]) {
                backtrack(s, t, i - 1, j - 1, dp, s[i - 1] + current, localResult, lcsLength);
                break;
            } else {
                if (dp[i - 1][j] == dp[i][j - 1]) {
                    backtrack(s, t, i - 1, j, dp, current, localResult, lcsLength);
                    backtrack(s, t, i, j - 1, dp, current, localResult, lcsLength);
                    break;
                }
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    i--;
                } else {
                    j--;
                }
            }
        }

        if (current.size() == lcsLength) {
            localResult.insert(current);
        }

        // Store the result in the memoization table
        memo[key] = localResult;
        result.insert(localResult.begin(), localResult.end());
    }

    vector<string> all_longest_common_subsequences(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        // Build the LCS table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int lcsLength = dp[m][n];
        set<string> result;

        // Use backtracking to find all LCS
        backtrack(s, t, m, n, dp, "", result, lcsLength);

        vector<string> ans(result.begin(), result.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        vector<string> ans = ob.all_longest_common_subsequences(s, t);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends