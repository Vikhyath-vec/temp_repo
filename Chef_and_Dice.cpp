#include<iostream>
using namespace std;
int main()
{
    int i, quo, rem;
    long long result, n, t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        quo = n / 4;
        rem = n % 4;
        if( quo == 0 && rem == 0)
            result = 0;
        else if(quo == 0 && rem == 1)
            result = 20;
        else if(quo == 0 && rem == 2)
            result = 36;
        else if(quo == 0 && rem == 3)
            result = 51;
        else if(rem == 0)
            result = 44*quo + 16;
        else if(rem == 1)
            result = 44*quo + 12 + 20;
        else if(rem == 2)
            result = 44*quo + 8 + 36;
        else if(rem == 3)
            result = 44*quo + 4 + 51;
        cout<<result<<"\n";
    }
    return 0;
}