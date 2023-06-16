/*
problem link -->  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string ans = "EGYPT";
    string result = "";

    int i = 0;
    while (i < s.size())
    {
        // Check if there are enough characters remaining in the string
        if (i + 4 < s.size())
        {
            string a = s.substr(i, 5);
            if (a != ans)
            {
                result += s[i];
                i++;
            }
            else if (a == ans)
            {
                result += ' ';
                i += 5;
            }
        }
        else
        {
            result += s[i];
            i++;
        }
    }
    cout << result << endl;

    return 0;
}
