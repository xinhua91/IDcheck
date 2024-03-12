#include <bits/stdc++.h>
using namespace std;

int main(){
	int cn[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	int m[10]={1,8,7,6,5,4,3,2,1};
	char in[11], s[10];
	int t, t2, sum, check;
	
	cout << "請輸入身分證字號: ";
	cin >> in;
	for(int i=0;i<26;i++) if(in[0]==65+i) t=cn[i];
	t2 = ((t%10)*9+t/10)%10;
	sum = t2*m[0];
	for(int i=1;i<10;i++) sum+=(((int)in[i]-'0')*m[i]);
	check = 10-(sum%10);
	cout << "檢查碼 = " << check << endl;
	if(check == (int)in[9]-'0') cout << "此身分證號檢查通過" <<endl;
	else cout << "此身分證號檢查錯誤" << endl;
}
