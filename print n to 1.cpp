#include<bits/stdc++.h>
using namespace std;
void  print(int n){
    if (n == 0){
        return;
    }
    else{
        cout<<n<<" ";
        n--;
        print(n);
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}

