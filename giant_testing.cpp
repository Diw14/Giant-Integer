#include <bits/stdc++.h>
#include "giantint.h"
using namespace std;
//using namespace giantint;
int main(){
	string n;
	cin>>n;
	giantint x(n);
	cout<<giant_fact(x);
	return 0;
}
