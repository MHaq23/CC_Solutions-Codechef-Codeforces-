#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



int main() {

   int q;cin>>q;
   vector<string> ans;
while(q--){
    int n;
    cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }int f1=0,f2=0;
    /*for(int i=1;i<n-2;i++)
        {
            if(a[i]-a[i+1]==-1 && a[0]-a[n]==1){f1=1;}
            else
            {f1=0;break;}


        }
        for(int i=1;i<n-2;i++)
        {

        if(a[i]-a[i+1]==1 && a[0]-a[n]==-1)f2=1;
        else
            {f2=0;break;}

        }

    if(f1==1 || f2==1)
        ans.push_back("YES");
    else
        ans.push_back("NO");

    }*/

    for(int i=find(a.begin(),a.end(),1)-a.begin();i<n;i++)
        {
            if(i<n-1)
            if(a[i]-a[i+1]==1)f1==1;
            else
                f1==0;
        }
    for(int i=find(a.begin(),a.end(),1)-a.begin();i>0;i--)
        {
            if(i>0)
            if(a[i]-a[i-1]==1)f2==1;
            else
                {f2==0;}
        }

        if(f1==1 ||f2==1)ans.push_back("YES");
        else if(a.size()==1)
            ans.push_back("NO");
        else
            ans.push_back("NO");
}

for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<endl;
        }

return 0;

}
