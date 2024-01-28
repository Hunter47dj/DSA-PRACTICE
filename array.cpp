#include<iostream>
using namespace std;

int main()
{ 
    // double arr[] = {1,2,3,4,5,6,7,8,9,0};
    // double add= 0;

    // for (auto i:arr)
    // {
    //     cout<<i<<endl;
    //     add+=i;
    // }
    // cout<<"sum "<<add;

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        *(arr+i)=i;
    }

    cout<<"values ";
    int add=0;

    for (int i = 0; i < 10; i++)
    {
        cout<< *(arr+i)<<" ";
        add+= *(i+arr);
    }
    cout<<add;
    

return 0;
}