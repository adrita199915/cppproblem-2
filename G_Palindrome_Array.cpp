#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int n, i;
cin >> n;
int a[n];
for (i = 0; i < n; i++) {
cin >> a[i];
}
int p = 0;
for (i = 0; i < n; i++) {
if (a[i] == a[n - i - 1])
p++;
}
if (p == n)
cout << "YES";
else
cout << "NO";
 
    return 0;
}