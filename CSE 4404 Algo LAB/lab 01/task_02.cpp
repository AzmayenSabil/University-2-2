#include <bits/stdc++.h>
using namespace std;


int main(){

    int x;
    cin>>x;

    int eof = -1;

    vector <int> a;


    while(1){

        cin>>x;
        a.push_back(x);

        sort(a.begin(), a.end());

        if(a.size() % 2 == 0){
            cout << (a[a.size()/2] + a[a.size()/2 + 1])/2 << endl;
        }
        else{
            cout << a[a.size()/2] << endl;
        }

    }



    return 0;
}

