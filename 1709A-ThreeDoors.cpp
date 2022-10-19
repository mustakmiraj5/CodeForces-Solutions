// 1709A. Three Doors
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        cin>>a>>b>>c;
        if(a==0){
            if(b==1 && c==2) cout<<"YES"<<endl;
            else if(b==3 && c==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(b==0){
            if(a==3 && c==2) cout<<"YES"<<endl;
            else if(a==2 && c==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(a==3 && b==1) cout<<"YES"<<endl;
            else if(a==2 && b==3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
   return 0;
}
