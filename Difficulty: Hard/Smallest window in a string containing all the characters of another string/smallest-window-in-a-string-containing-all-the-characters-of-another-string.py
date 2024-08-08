#User function Template for python3

from collections import Counter

class Solution:
    def smallestWindow(self, s: str, p: str) -> str:
        if not s or not p or len(p) > len(s):
            return "-1"

        # Frequency map for characters in P
        char_count = Counter(p)
        required = len(char_count)
        left, right = 0, 0
        formed = 0

        # Current window character counts
        window_counts = {}

        # Result variables
        min_length = float('inf')
        min_window = (-1, -1)

        while right < len(s):
            char = s[right]
            window_counts[char] = window_counts.get(char, 0) + 1

            if char in char_count and window_counts[char] == char_count[char]:
                formed += 1

            while left <= right and formed == required:
                char = s[left]

                window_length = right - left + 1
                if window_length < min_length:
                    min_length = window_length
                    min_window = (left, right)

                window_counts[char] -= 1
                if char in char_count and window_counts[char] < char_count[char]:
                    formed -= 1

                left += 1

            right += 1

        if min_window[0] == -1:
            return "-1"
        else:
            return s[min_window[0]:min_window[1] + 1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        s=str(input())
        p=str(input())
        ob = Solution()
        print(ob.smallestWindow(s,p))
# } Driver Code Ends