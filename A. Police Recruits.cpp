#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()
#define iparr                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }

using namespace std;
int main()
{
    ll n, e;
    ll p = 0, c = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> e;
        if(e == -1)
        {
            if(p > 0)
                p--;
            else
                c++;
        }
        else
            p += e;
    }

    cout << c << endl;
    return 0;
}