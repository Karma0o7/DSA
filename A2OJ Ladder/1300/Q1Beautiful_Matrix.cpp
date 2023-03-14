#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int idx1, idx2;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin>>num;
            if(num == 1){
                idx1 = i;
                idx2 = j;
            }
        }
    }

    cout<<abs(abs(idx1 - 3) + abs(idx2 - 3))<<endl;
    return 0;
}