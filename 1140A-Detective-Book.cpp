//1140A. Detective Book
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0,cnt=0;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i] > m){
            m = a[i];
        }
        if(m == i){
            cnt++;
        }
    }
    cout<<cnt<<endl;
return 0;
}
