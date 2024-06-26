class Solution {
public:

    vector<int> nextSmallerElement(vector<int> &arr, int n)
{
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i= n-1; i >=0; i--)
        {
            int num = arr[i];
            while( st.top() != -1 && num <= arr[st.top()] )
            {
                st.pop();
            }

            ans[i] = st.top();
            st.push(i);
        }
    
        return ans;
}

    vector<int> prevSmallerElement(vector<int> &arr, int n)
{
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i= 0; i<n; i++)
        {
            int num = arr[i];
            while( st.top() != -1 && num <= arr[st.top()] )
            {
                st.pop();
            }

            ans[i] = st.top();
            st.push(i);
        }
    
        return ans;
}
    

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        int area = INT_MIN;
        for(int i=0; i< n ; i++)
        {
            int l = heights[i];

            if(next[i] == -1)
            {
                next[i] =n;
            }

            int b = next[i] - prev[i] -1;

            int newArea = l*b;
            area = max(area,newArea);
        }

        return area;
    }
};