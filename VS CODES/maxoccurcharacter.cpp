// find the character whose occurance is maximum in the string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]= {0};

    int size= str.size();

    for(int i=0; i< size; i++)
    {
        
        int index= str[i]-'a';
        arr[index]++;
    }

    int count =0; 
    int index=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > count )
        {
            index=i;
            count=arr[i];
        }
    }
    return 'a'+index;
    }



// char highestOccurringChar(char input[]) {
//     // Write your code here
//     int arr[26]= {0};

//     int size= sizeof(input);
//     cout<<"size "<<size<<endl;

//     for(int i=0; i< size; i++)
//     {
        
//         int index= input[i]-'a';
//         cout<<index;
//         arr[index]=arr[index]+1;
//     }
// cout<<endl;
//     int count =0; 
//     int index=0;
//     for (int i = 0; i < 26; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     for(int i=0; i<26; i++)
//     {
//         if(arr[i] > count )
//         {
//             index=i;
//             count=arr[i];
//         }
//     }
//     return 'a'+index;
// }


int main()
{ 
   
    char input[] = "acccdbbaba";

    string str= "jtyiki";
    str.replace(1,1,"%40");

    // cout<<"high: "<<highestOccurringChar(input);
    cout<<"high "<<getMaxOccuringChar(str);
return 0;
}