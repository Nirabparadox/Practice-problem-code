#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,x;
    cin>>s>>x;
    // int xlen=x.size();
    // for(int i=0;i<s.size();i++){
    //     if(s[i]==x[0]){
    //         if(s[i+1]==x[1]){
    //             if(s[i+2]==x[2]){
    //                 if(s[i+3]==x[3]){
    //                     s.replace(i,4,"#");

    //                 }
    //                 i+=3;

    //             }
    //             i+=2;
    //         }
    //         i++;
    //     }
    // }
    int slen=s.size();
    int xlen=x.size();

    for(int i=0;i<slen;i++){
        int p=i;
        for(int j=0;j<xlen;j++){
            
            if(s[i]==x[j]){
                i++;
                if(j==xlen-1){
                    s.replace(p,xlen,"#");
                    slen=slen-(xlen=1);
                }
            }
            else{
                i+=j;
            }
        }
        i--;
    }
    cout<<s<<endl;
    return 0;
}