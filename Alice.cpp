/*
Input Format
The first and only line of input contains two space-separated integers
X,Y — the marks of Alice and Bob respectively.

Output Format
For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.

The judge is case insensitive so you may output the answer in any case. In particular YES, yes, yEsare all considered equivalent toYes`.
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}