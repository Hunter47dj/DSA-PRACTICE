//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());

        while (tc-- > 0) {
            String[] nk = br.readLine().trim().split(" ");
            int n = Integer.parseInt(nk[0]);
            int k = Integer.parseInt(nk[1]);

            String[] str = br.readLine().trim().split(" ");
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(str[i]);
            }

            Solution sln = new Solution();
            ArrayList<ArrayList<Integer>> ans = sln.fourSum(a, k);
            for (ArrayList<Integer> v : ans) {
                for (int u : v) {
                    System.out.print(u + " ");
                }
                System.out.print("$");
            }
            if (ans.isEmpty()) {
                System.out.print(-1);
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


// User function Template for Java

// arr[] : int input array of integers
// k : the quadruple sum required

class Solution {
    public ArrayList<ArrayList<Integer>> fourSum(int[] arr, int k) {
        // code here
         int n = arr.length;
        Arrays.sort(arr);
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        
        for(int i = 0; i < n - 3; i++) {
            if(i > 0 && arr[i] == arr[i-1]) continue; 
            for(int j = i + 1; j < n - 2; j++) { 
                if(j > i + 1 && arr[j] == arr[j-1]) continue; 
                int sum = arr[i] + arr[j];
                int l = j + 1, r = n - 1;
                while(l < r) {
                    int currentSum = arr[l] + arr[r];
                    if(currentSum > k - sum) {
                        do {
                            r--;
                        } while(l < r && arr[r] == arr[r + 1]);
                    } 
                    else if(currentSum < k - sum) {
                        do {
                            l++;
                        } while(l < r && arr[l] == arr[l - 1]); 
                    } 
                    else {
                        ArrayList<Integer> quad = new ArrayList<>();
                        quad.add(arr[i]);
                        quad.add(arr[j]);
                        quad.add(arr[l]);
                        quad.add(arr[r]);
                        res.add(quad);
                        do {
                            l++;
                        } while(l < r && arr[l] == arr[l - 1]);
                        do {
                            r--;
                        } while(l < r && arr[r] == arr[r + 1]); 
                    }
                }
            }
        }
        return res;
    }
}