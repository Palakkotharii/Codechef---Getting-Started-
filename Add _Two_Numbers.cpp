/*
The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

Input:
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output:
For each test case, add A and B and display the sum in a new line.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    int sum=0;
    while(t--)
    {
        cin>>a>>b;
        sum= a+b;
        cout<<sum<<endl;
    }
//     int t;
//    cin>>t;
//    int a,b;
//    while(t--){
//     int sum=0;
//     cin>>a>>b;
//     sum=a+b;
//     cout<<sum<<"\n";
//    }
    return 0;
}