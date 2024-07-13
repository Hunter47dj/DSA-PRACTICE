#include<iostream>
using namespace std;

int main()
{ 
    char arr[6][6] = {'+','-'};
    int result =0;
    for(int i=0; i< N; i++)
    {
        for (int j = 0; j < N; j++)
        {
         if(arr[i][j] == '+')
            result += 2;
        else     result -=2;
        }
    }

    return result;
return 0;
}