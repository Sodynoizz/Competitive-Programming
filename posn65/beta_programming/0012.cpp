#include <bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x:v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename ... Tail> void dbg_out(Head H, Tail ... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define endl '\n'
#define ll long long
#define pii pair<int, int>
#define mii map<int, int>
#define vii vector<int, int>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

int main(){
    string str;
    cin >> str;
    for(int w = 0; w < 5; w++){
    	if(w == 0 || w == 4){
    		cout << "..";
    		for (int i = 1; i <= str.size(); i++){
    			if (i%3==0) cout << '*';
    			else cout << '#';
    			if (i < str.size()) cout << "...";
			}
			cout << "..";
		} else if(w == 1 || w == 3){
			cout << ".";
			for (int i = 1; i <= str.size(); i++){
				if (i % 3 == 0) cout << "*.*";
				else cout << "#.#";
				cout << ".";
			}
		} else {
            for (int  i = 1; i <= str.size(); i++) {
				if (i % 3 == 0) cout << "*." << str[i-1] << ".";
				else if ((i-1) % 3 == 0 && i != 1) cout << "." << str[i-1] << ".";
				else cout<<"#."<<str[i-1]<<".";
				if (i <= str.size()){
					if (i % 3 == 0) cout << '*';
					else if (i == str.size()) cout << '#';
				}
			}
		}
		cout << endl;
	}
}