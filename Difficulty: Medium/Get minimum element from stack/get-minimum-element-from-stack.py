#User function Template for python3

class stack:
    def __init__(self):
        self.s=[]
        self.minEle=[]

    def push(self,x):
        #CODE HERE
        if len(self.s)==0:

            self.s.append(x)
            self.minEle.append(x)
        else:
            self.s.append(x)
            self.minEle.append(min(self.minEle[-1], x))
        


    def pop(self):
        #CODE HERE
        # x=self.s[len(self.s)-1]

        if len(self.s)==0:
            return -1
        else:
            ele=self.s[-1]
            self.s.pop()
            self.minEle.pop()
            return ele


    def getMin(self):
        #CODE HERE
        if len(self.minEle)==0:
            return -1
        return self.minEle[-1]


#{ 
 # Driver Code Starts
#contributed by RavinderSinghPB
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        q = int(input())

        arr = [int(x) for x in input().split()]

        stk=stack()  

        qi = 0
        qn=1
        while qn <= q:
            qt = arr[qi]

            if qt == 1:
                stk.push(arr[qi+1])
                qi+=2
            elif qt==2:
                print(stk.pop(),end=' ')
                qi+=1
            else:
                print(stk.getMin(),end=' ')
                qi+=1
            qn+=1
        print()

# } Driver Code Ends