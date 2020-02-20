#include <iostream>

using namespace std;

int main()
{
    int t,n,sum,odd,even;
    cin>>t;

    for(int j=0; j<t; j++)
    {
        cin>>n;
        sum=0,odd=0,even=0;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]%2!=0||ar[i]==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum+=ar[i];
        }
        if(sum%2!=0||sum==1)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            if(odd!=0&&even!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
