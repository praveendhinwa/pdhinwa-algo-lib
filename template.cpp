#include <bits/stdc++.h>

using namespace std;

/* Credits to Swift for these parts of the template, see the following blog http://codeforces.com/blog/entry/15643 */
// template begins here
#define mt make_tuple
#define eb emplace_back
#define pb push_back

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); }

vector<string> split(const string& s, char c) {
	vector<string> v;
	stringstream ss(s);
	string x;
	while (getline(ss, x, c))
		v.emplace_back(x);
	return move(v);
}

void err(vector<string>::iterator it) {}
template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args) {
	cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << '\n';
	err(++it, args...);
}

typedef long long ll;
typedef long double ld;
// template ends here

const int MAXN = (int) 1e5 + 10;


void read() {
	
}

void solve() {
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 1;
	cin >> T;
	while (T--) {
		read();
		solve();
	}
	return 0;
}
