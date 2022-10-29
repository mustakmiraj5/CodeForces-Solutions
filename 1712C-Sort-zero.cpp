//1712C. Sort Zero
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n;
        int l = n-1;
        vector<int> ai,bi;
        for(int i=0;i<n;i++){
            cin>>a;
            ai.push_back(a);
        }
        if(is_sorted(ai.begin(), ai.end())){
            cout<<0<<endl;
        }else{
            int x=0;
            for(int i=n-1;i>=0;i--){
                if(ai[i] < ai[i-1]){
                    x = i;
                    break;
                }
            }
            bi = ai;
            bi.erase(bi.begin()+x, bi.end());
            for(int i=n-1;i>=x;i--){
                auto it = find(bi.begin(), bi.end(), ai[i]);
                if(it != bi.end()){
                    x = i;
                    break;
                }
            }

                ai.erase(ai.begin()+x, ai.end());
                sort(ai.begin(), ai.end());
                ai.erase(unique(ai.begin(), ai.end()), ai.end());
                cout<<ai.size()<<endl;
                ai.clear();
                bi.clear();

        }
    }
return 0;
}
