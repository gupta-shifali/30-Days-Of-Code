    Difference(vector <int> a)
    {
        elements = a;
    }
    void computeDifference()
    {
        int x,n;
        maximumDifference = -99;
        n = elements.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(elements[j] > elements[j+1])
                {
                    int x = elements[j];
                    elements[j] = elements[j+1];
                    elements[j+1] = x;
                }
            }
        }
        maximumDifference = abs(elements[0] - elements[n-1]);
    }
