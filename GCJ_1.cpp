using namespace std;
#include<string>
#include<iostream>
#define endl "\n"
#define mod 1000000007
typedef long long ll;



int main() {


    int t;
    cin>>t;
    for(int i = 1; i <= t; i++) {

        string n,s1="",s2="",s3="";
        cin >> n;
        string::iterator si1;
      for(si1 = n.begin() ; si1 != n.end(); si1++){
                if(*si1=='4'){
                    s1.push_back('3');s2.push_back('1');

                }
                else
                   {

                   s1.push_back(*si1);
                   s2.push_back('0');}

      }

      string::iterator si2;
      string::iterator si3;

      for(si2 = s2.begin() ; si2 != s2.end(); si2++)
                   if(*si2=='1')
                   {
                       si3=si2;
                   }
           string::iterator si;
      for(si = si3 ; si != s2.end(); si++) {
        s3.push_back(*si);
      }


        cout<<"Case #"<< i <<":"<<s1<<" "<<s3<<endl;
    }

    return 0;

}
