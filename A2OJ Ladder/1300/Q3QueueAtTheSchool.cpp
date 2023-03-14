#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, time;
    cin>>size>>time;
    string str;
    cin>>str;
    int i = 0;
    while(time--){
        for(int i = 0; i < size; i++){
            if(str[i] == 'B' && str[i+1] == 'G'){
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}