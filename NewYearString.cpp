#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int>ans;
    for(int i = 0 ; i<t ; i++){
        int n;
        cin>>n;
        string s = "";
        cin>>s;

        if((s.find("2026") != string :: npos) || (s.find("2025") == string :: npos)){
            ans.push_back(0);
            
        }
        else{
            ans.push_back(1);
        }

        

    }
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
}