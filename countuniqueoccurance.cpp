#include <bits/stdc++.h>
using namespace std;

int solution(vector<int>& A) {
    
    sort(A.begin(), A.end()); // Sorting the input array

    // If the size of the array is less than or equal to 2, then the answer is the size of the array.
    if(A.size() <= 2) {
        return A.size();
    }

    // Variable to store the result
    int result = 0;

    // mp[i][difference] represents the count of arithmetic subsequences ending at index i with gap 'difference'
    unordered_map<int, int> mp[A.size()];

    // Loop through the array to find the length of the longest arithmetic subsequence
    for(int i = 1; i < A.size(); i++) {
        for(int j = 0; j < i; j++) {
            // Calculate the gap between the current elements
            int difference = A[i] - A[j];
            // Counter variable to store the count of arithmetic subsequences
            int count_AS = 1;

            // If the subsequence ending at index 'j' with gap 'difference' exists,
            // update the count and store it in mp[i][difference]
            if(mp[j].count(difference) != 0) {
                count_AS += mp[j][difference];
                mp[i][difference] = count_AS;
            }
            // If the subsequence does not exist, initialize the count to 1 and store it in mp[i][difference]
            else {
                mp[i][difference] = 1 + count_AS;
            }

            // Update the answer with the maximum count
            result = max(result, mp[i][difference]);
        }
    }
    // Return the length of the longest arithmetic subsequence
    return result;
}
