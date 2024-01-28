#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
       
        int start=0;
        int end= s.size()-1;
        cout<<end;

        while(start<=end)
        {
            if((s[start] >='a'  && s[start] <='z')  || (s[start] >=0 && s[start] <= 9))
            { cout<<"hii";
                if ((s[end] >='a'  && s[end] <='z') || (s[end] >=0 && s[end] <= 9))
                { cout<<"hii";
                    if(s[start] != s[end])
                        return false;
                    else 
                         {
                            start++;
                            end--;
                         }
                }
                else end--;
                
            }
            else start++;

        }
        return true;
    }

int main()
{ 
    // string s1= "A man, a plan, a canal: Panama";
    // toupper(s1[0]);

    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    // // cout<<s1;

    string s="0p";
    // // cout<<isPalindrome(s);
    // string str = "Coding Ninjas Is A Coding Platform";
    // int i=0;
	// while(str[i] != '\0' )
	// {
	// 	if(str[i]==' ')
	// 		str[i]="@40";
	// }
    // vector<int> v;
    
    

return 0;
}