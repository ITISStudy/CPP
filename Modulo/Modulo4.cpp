#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    while(k--){
        int a;
        long long b;
        cin>>a>>b;
        int x=a/b,sum=0;
        sum+=(x*b*(b-1)/2+(a-x*b)*(a-x*b+1)/2);
        if(b==sum) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
 
 
    return 0;
} 