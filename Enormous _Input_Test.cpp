// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Usually you can use printf/scanf in c++;
    // however if you wanna use cin and cout it is slow.
    // to make it faster, use cin.tie(null) and set ios_base::sync_with_stdio(false)


   ios_base::sync_with_stdio(false);
   cin.tie(0); 
    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

/*
Synchronization allows multiple objects to use the same resource (such as method of class ) by controlling the access of target method . 
i.e by default Synchronization true hota hia to 1st line usko false kr deti hai


tie() => this method simply guarantees the flushing of cout before cin accepts as input 

--- these 2 methods increase the input and output speed .. we use these when you have to deal with large no of input and output !!

*/