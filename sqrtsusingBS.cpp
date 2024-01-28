
int mySqrt(int x) {
    int s = 0;
    int e = x;
    long long int mid = (s + e) / 2;
    long long int ans=-1;    
    
    while (s <= e) {
        if (mid * mid == x)
            return mid;

        if (mid * mid < x) {
            ans = mid;
            s = mid + 1;
        } else
            e = mid - 1;

        mid = (s + e) / 2;
    }
    return ans;
}

float decimal(int x, int tempsol, int precision)
{
    
    double factor =1;
    double ans=tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor=factor/10;

        for (double j = ans; j*j < x; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;

}

#include<iostream>
using namespace std;
int main() {

    int x=8;
    int tempsol= mySqrt(x);
    cout<<"num"<<tempsol<<endl;

    float value = decimal(x,tempsol,3);  // here 3 is the no of digits after decimal .
    cout<<"value "<<value;
}