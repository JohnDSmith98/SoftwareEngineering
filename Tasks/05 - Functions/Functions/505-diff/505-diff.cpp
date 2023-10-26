#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absdiff(int u, int v);


int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;
    

    int diff = absdiff(var1, var2);

    // print out the results
    cout << "Absolute diff = " << diff << endl;
}

// Simple function to subtract
// return result is u-v
int sub(int u, int v)
{
    int y = u - v;
    return y;
}
int absdiff(int u, int v)
{
    int diff = 0;

    if (u >= v)
    {
        diff = sub(u, v);
    }
    else
    {
       diff = sub(v, u);
    }
    return diff;
}