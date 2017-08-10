#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int n,max=0,count=0;
    cin >> n;
    while(n>0)
    {
        if(n%2 == 1)
        {
            count++;
            if(count>=max)
                max=count;
        }
        else
            count=0;
        n=n/2;
    }
    cout<<max;
    return 0;
}
