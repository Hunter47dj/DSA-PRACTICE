//{ Driver Code Starts
// Initial template for JAVA

import java.util.Scanner;

class aToi {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t > 0) {
            String str = sc.nextLine();

            Solution obj = new Solution();
            int num = obj.atoi(str);

            System.out.println(num);
            t--;
        }
    }
}
// } Driver Code Ends


// User function template for JAVA

/*You are required to complete this method */
class Solution {
    public int atoi(String s) {
        //lets get if the number is positive or not
        boolean positive = true;
        int i = 0;
        if(s.charAt(0) == '-'){
            i++;
            positive = false;
        } 
        int ans = 0;
        for(;i<s.length();i++){
            if(i == 0 && s.charAt(i) == '-') continue;
            if(s.charAt(i) == ' ') continue;
            if(!isDigit(s.charAt(i))) return -1;
            else{
                ans = ans*10 + (int) s.charAt(i)-'0';
            }
        }
        return !positive? -1*ans:ans;
    }
    
    private boolean isDigit(char c){
        return c >= '0' && c <= '9';
    }
}
