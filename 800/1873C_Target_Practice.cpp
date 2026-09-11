#include <bits/stdc++.h>
using namespace std;
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
void solve(){
    string s;
    char a[10][10];
    int count = 0;
    for (int i=0; i<10; i++){
        cin >> s;
        for (int j = 0; j<10;j++){
           a[i][j] = s[j];
               
           }
        }
    for ( int i = 0 ; i<10; i++){
        for(int j = 0 ; j<10 ; j++){
            if (a[i][j] == 'X')
            count += score[i][j];
        }
    }  
    cout << count << endl;
}
int main() {
int t;
cin >> t;
while (t--){
    solve();
}
}
