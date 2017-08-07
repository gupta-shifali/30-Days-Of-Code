#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s,e,o;
        cin>>s;
        for(int j=0;s[j]!='\0';j++)
        {
            count++;
        }
        for(int k=0;k<count;k++)
        {
            if(k%2==0)
            {
                e += s[k];
            }
            else
            {
                o += s[k];
            }
        }
        cout<<e<<" "<<o<<endl;
        count=0;
    }
    return 0;
}

