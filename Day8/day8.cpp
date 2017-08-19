#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string,int> book;
    string a,query;
    int i,n,b;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        book.insert(pair <string, int> (a, b));
    }
    while(cin>>query)
    {
        if(book.find(query) != book.end())
            cout << query << "=" << book.find(query)->second << endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
