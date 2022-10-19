// 1353C. Board Moves
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    unsigned long long int t, n,i;
    cin >> t;
    while(t--){
        cin >> n;
        unsigned long long int sum=0;
        if(n==1) cout<<0<<endl;
        else{
            for(i=1;i<=n/2;i++){
                sum += i*i*8;
            }
            cout<<sum<<endl;
        }
    }
}