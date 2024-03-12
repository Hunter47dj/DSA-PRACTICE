#User function Template for python3

import numpy as np
class Solution:
    def genFibNum(self, a, b, c, n, m):
        if n<3: return 1
        mtrx = np.array([[a,b,c],[1,0,0],[0,0,1]])
        res = np.identity(3,dtype=int)
        n -= 2
        while n>0:
            if n&1: res = (res@mtrx)%m
            mtrx = (mtrx@mtrx)%m
            n = n>>1
        return sum(res[0])%m


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        a,b,c,n,m=map(int,input().split())
        
        ob = Solution()
        print(ob.genFibNum(a,b,c,n,m))
# } Driver Code Ends