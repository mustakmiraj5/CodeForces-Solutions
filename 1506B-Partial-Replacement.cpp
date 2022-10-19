//1506B. Partial Replacement
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0,i,j;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i] == '*'){
                break;
            }
        }
        for(j=n-1;j>=0;j--){
            if(s[j] == '*'){
                break;
            }
        }
        if(j==i) cnt = 1;
        else if(j-i <= k){
            cnt = 2;
        }else{
            while(true){
                int st = i+k;
                for(int x=st;x>i;x--){
                    if(s[x] == '*'){
                        cnt++;
                        i = x;
                        break;
                    }
                }
                if(j-i <= k){
                    cnt += 2;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}

