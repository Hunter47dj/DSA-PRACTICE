#include<iostream>
using namespace std;



int main()
{ 
    int arr[]= {7, 4, 8, 2, 9, 5};


    for (int i = 0; i < 6-1; i++)
    {
        int minIndex=i;

        for (int j = i+1; j < 6; j++)
        {
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
       
       swap(arr[minIndex],arr[i]);
        
    }
    
for (int i = 0; i < 6; i++)
{
    cout<<arr[i];
}



return 0;
}