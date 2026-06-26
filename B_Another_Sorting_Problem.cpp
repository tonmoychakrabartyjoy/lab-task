#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int test;
    cin >> test;

    while (test--){
        long long int n;
        cin >> n;

        long long int a[n];
        for (long long int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long int k=0;
        long long int j = a[0];
        bool flag = true;
        bool flag2 = true;

        for (long long int i=1; i<n; i++){
            if(a[i] < j){
                if(k < j-a[i]){
                    k = j-a[i];
                }
                flag2 = false;
            }else{
                j = a[i];
            }
        }

        if(flag2){
            cout << "YES" << endl;
            continue;
        }

        j = a[0];
        for(long long int i=1; i<n; i++){
            if(a[i] < j){
                a[i]+=k;
            }
            if(a[i] < j){
                cout << "NO" << endl;
                flag = false;
                break;
            }
            j = a[i];
        }

        
        if(flag){
            cout << "YES" << endl;
        }
    }
    return 0;
}