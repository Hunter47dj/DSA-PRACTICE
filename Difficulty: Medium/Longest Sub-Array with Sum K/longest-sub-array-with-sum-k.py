#User function Template for python3

class Solution:
    def lenOfLongSubarr (self, arr, n, k) : 
        #Complete the function
        x={}
        currsum=0
        maxlen=0
        for i in range(len(arr)):
            currsum+=arr[i]
            if currsum==k:
                maxlen=i+1
            if (currsum-k) in x:
                maxlen=max(maxlen,i-x[currsum-k])
            if currsum not in x:
                x[currsum]=i
        return maxlen



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n, k = map(int , input().split())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.lenOfLongSubarr(arr, n, k))




# } Driver Code Ends