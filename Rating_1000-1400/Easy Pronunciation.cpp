#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        bool ans = true;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt >= 4)
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

/* The else condition in which you reset cnt to 0 plays a crucial role in solving this problem correctly. Here's why it's there and why it's important:

The problem asks you to determine whether a word is easy or hard to pronounce based on whether it contains 4 or more consecutive consonants. To check this, you iterate through each character of the string s and use a counter variable cnt to keep track of consecutive consonants.

When you encounter a consonant (if condition), you increment cnt because you're in a sequence of consecutive consonants.

When you encounter a vowel (else condition), it means the sequence of consecutive consonants (if any) has ended. Therefore, you reset cnt to 0 to start counting a new sequence of consecutive consonants from scratch. This is because vowels break the sequence of consonants, and any previous count of consecutive consonants is no longer relevant to checking the rest of the word.

For example, consider the word "apple":

When iterating through "a", it's a vowel, so cnt is set to 0.
"p" is a consonant, so cnt becomes 1, and then for the next "p", cnt becomes 2.
When you reach "l", cnt is 3, but since there's an "e" (a vowel) following it, the sequence of consonants is broken, and cnt would be set back to 0.
If you didn't reset cnt to 0 upon encountering a vowel, the counter would incorrectly continue to increment even after the sequence of consonants has been interrupted by a vowel. This would lead to incorrect results, as the program could mistakenly identify words as hard to pronounce even if they have vowels interrupting sequences of consonants.
*/