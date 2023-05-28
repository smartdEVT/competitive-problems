#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
    
    int r;
    double l1,l2;

    cin>> r;

    l1=(3.0*r)/5.0;
    l2=(4.0*r)/5.0;

    double a1=l1*l2;
    double a2= (M_PI*r*r/2)-(asin(0.8)*r*r);

    cout<< setprecision(12)<<a1+a2<<endl;

	return 0;
}