#include <bits/stdc++.h>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
typedef long long ll;

int maxSubArraySum(int a[], int size,int x)
{
    int max_so_far = INT_MAX, max_ending_here = 0,
       start =0, end = 0, s=0;int sum=0;

    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];

        if (max_so_far > max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
if(max_so_far<0)max_so_far=0;

//updated version
for(int j=0;j<size;j++)
    {
        if(j>=start && j<=end)a[j]=a[j]*x;

    }
int maxso_far = INT_MIN, maxending_here = 0,
       stat =0, en = 0, sm=0;

    for (int i=0; i< size; i++ )
    {
        maxending_here += a[i];

        if (maxso_far < maxending_here)
        {
            maxso_far = maxending_here;
            stat = sm;
            en = i;
        }

        if (maxending_here < 0)
        {
            maxending_here = 0;
            sm = i + 1;
        }
    }
for(int j=0;j<size;j++)
    {
        sum+=a[j];

    }


if(max_so_far>maxso_far )
cout<<max_so_far;
else
    cout<<maxso_far;
}


int main() {

int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int max_sum = maxSubArraySum(a,n,x);

    return 0;
}


