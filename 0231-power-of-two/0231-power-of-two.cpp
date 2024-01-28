class Solution {
public:
    bool isPowerOfTwo(int n) {
          long check=0;
          int i=0;
          while(check<=n)
          {
              check= pow(2,i);
              i++;
              if(check==n) return true;
          }
    return false;
    }
};