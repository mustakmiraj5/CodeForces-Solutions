//1675C. Detective Task
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size() == 1){
            cout<<1<<endl;
        }else{
            int countsus=0,l;
            l = s.size();
            for(int i=0;i<l;i++){
                if(s[0] == '0'){
                    countsus = 1;
                    break;
                }else if(s[i] == '1'){
                    countsus = 1;
                }else if(s[i] == '?'){
                    countsus++;
                }else if(s[i] == '0'){
                    countsus++;
                    break;
                }
            }
            cout<<countsus<<endl;
        }
    }
return 0;
}
