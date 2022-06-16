#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],count=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n/2;i++)
        {
            for(int j=n;j>n/2;j--)
            {
                if(a[i] != a[j])
                {
                    count++;
                }
            }
        }

        int x = ceil(count)/2;
        cout<<x<<endl;
    }
}