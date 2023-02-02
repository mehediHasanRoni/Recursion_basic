#include<bits/stdc++.h>
using namespace std;
void  rec(int n,int i){
    int r;
    if (n==0){
        cout<<i<<endl;
        return;
    }
    else{
        r=n%10;
        i=i + r;
        n=n/10;
        rec(n,i);
    }
}
int main(){
    int n;
    cin>>n;
    rec(n,0);
}

