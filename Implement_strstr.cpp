// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int strstr(string a, string b)
{
    int index = a.find(b);
    if (index != string ::npos)
    {
        // cout << index << kk;
        return index;
    }

    return -1;
}