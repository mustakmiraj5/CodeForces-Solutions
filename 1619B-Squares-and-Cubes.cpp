//1619B. Squares and Cubes
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    unsigned long long t;
    cin>>t;
    while(t--){
        unsigned long long n,i;
        set<int> s;
        cin>>n;
        i=1;
        while(true){
            if(i*i > n && i*i*i > n) break;
            s.insert(i*i);
            if(i*i*i <= n){
                s.insert(i*i*i);
            }
            i++;
        }
        cout<<s.size()<<endl;
        s.clear();
    }
 
return 0;
}