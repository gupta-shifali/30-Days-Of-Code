/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template<typename T>
void printArray(vector <T> x)
{
    for(int i=0; i<x.size(); i++)
        cout<<x[i]<<endl;
}
