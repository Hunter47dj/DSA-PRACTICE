#include<bits/stdc++.h>
class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
                vector<string> result;
        queue<string> q;
        unordered_set<string> visited;

        q.push(s);
        visited.insert(s);

        bool found = false;

        while (!q.empty()) {
            string current = q.front();
            q.pop();

            if (isValid(current)) {
                result.push_back(current);
                found = true;
            }

            if (found) {
                // If we have found valid strings, don't generate more variations
                continue;
            }

            // Generate variations by removing one parenthesis at a time
            for (int i = 0; i < current.length(); ++i) {
                if (current[i] == '(' || current[i] == ')') {
                    string next = current.substr(0, i) + current.substr(i + 1);
                    if (visited.find(next) == visited.end()) {
                        q.push(next);
                        visited.insert(next);
                    }
                }
            }
        }

        return result;
    }

    private:
    bool isValid(string s) {
        int balance = 0;

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else if (c == ')') {
                balance--;
                if (balance < 0) {
                    return false;
                }
            }
        }

        return balance == 0;
    }
};