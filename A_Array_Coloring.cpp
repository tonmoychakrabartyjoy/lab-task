#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        int n;
        cin >> n;
        map <int, string> aa;
        for(int j=0; j<n; j++){
            int key;
            cin >> key;
            if((j+1)%2 != 0){
                aa[key]="red";
            } else{
                aa[key]="blue";
            }
        }

        auto p = aa.begin();
        int ac = 0;
        for(auto it = ++aa.begin(); it != aa.end(); it++ ){
            if(p->second == it->second){
                ac++;
                break;
            }
            p++;
        }

        if(ac == 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }

    }
    return 0;
}