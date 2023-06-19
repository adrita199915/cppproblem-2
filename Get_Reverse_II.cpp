#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin >> n;
    string nm[n], cls[n], s[n];
    int id[n];
    for (int i = 0; i < n; i++) {
        cin >> nm[i] >> cls[i] >> s[i] >> id[i];
    }
    for (int i = 0; i < n/2; i++) {
        int temp = id[i];
        id[i] = id[n-1-i];
        id[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << id[i] << endl;
    }
    return 0;
}

  