#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Write Your Code Here
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                int x = a[j];
                a[j] = a[j+1];
                a[j+1] = x;
                count++;
            }
        }
    }
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1];
    return 0;
}
