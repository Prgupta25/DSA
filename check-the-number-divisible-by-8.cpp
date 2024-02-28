#include<bits/stdc++.h> 
using namespace std;  
bool check(string str) 
{ 
    int n = str.length(); 
 
    if (n == 0) 
        return false; 

    if (n == 1) 
        return ((str[0]-'0')%8 == 0); 
 
    if (n == 2) 
        return (((str[n-2]-'0')*10 + (str[n-1]-'0'))%8 == 0); 
 
    for (int i = 0; i < n - 2; i++) { 
        int num = (str[i]-'0')*100 + (str[i+1]-'0')*10 + (str[i+2]-'0'); 
        if (num % 8 == 0) 
            return true; 
    } 
  
    return false; 
}  
int main() 
{ 
    string str = "54141111648421214584416464555"; 
    check(str)? cout << "Yes" : cout << "No"; 
    return 0; 
} 