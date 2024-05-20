//{ Driver Code Starts
//Initial Template for C#


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                long[] arr = new long[3];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                arr = Array.ConvertAll(elements.Split(), long.Parse);
                long x = arr[0];
                long n = arr[1];
                long m = arr[2];
                Solution obj = new Solution();
                long res = obj.PowMod(x,n,m);
                Console.Write(res+"\n");
                
            }

        }
    }
}
// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Complete this function
    public long PowMod(long x, long n, long m)
    {
        //Your code here
         long result=1;
        if(m==1)
        return 0;
        x=x%m;
        while(n>0){
            if((n&1)==1){
                result = (result*x)%m;
            }
            n=n/2;
            x=(x*x)%m;
        }
        return result;
    }
}