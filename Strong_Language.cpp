#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t, i, flag, j, n, k, temp, count = 0, conscount;
    
    
    string s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> k;
        cin >> s;
        vector<int> v;
        temp=0;
        count = 0;
        conscount = 0;
        flag = 0;
        for(j=0; j<n; j++)
        {
            if(s[j] == 42)
            {
                
                if(count != 0)
                {
                    v.push_back(j-temp);
                }
                temp = j;
                count += 1;   
            }
        }
        
         if(count != 0)
         {   
            for(j=0; j<count-1; j++)
            {
            if(v.at(j) == 1)
                    conscount += 1;
                else
                    conscount = 0;
                if(conscount == (k-1))
                {
                    flag = 1;
                    break;
                } 
            }
         }
        if(flag == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    return 0;
}