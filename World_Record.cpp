#include<iostream>

using namespace std;
int main()
{
    int T, i, temp;
    float k1, k2, k3, v, time, temp2;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> k1 >> k2 >> k3 >> v;
        time = 100/(k1*k2*k3*v);
        // cout<<time<<endl;
        temp2 = (time*100) + 0.5;
        temp = temp2;
        time = temp/100.0;
        // cout<<time<<endl;
        if((9.58 - time) > 0.01)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}