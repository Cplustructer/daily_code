#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	int len = v.size();
	int res = v[0];
	int p = v[0];
	for (int i = 1; i < len; i++){
		p = (p+v[i])<v[i] ? v[i] : (v[i] + p);
		res = (p < res) ? res : p;
	}
	cout << res << endl;
	return 0;
}
