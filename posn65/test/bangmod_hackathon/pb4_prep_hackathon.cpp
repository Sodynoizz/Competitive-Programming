#include <bits/stdc++.h>
using namespace std;

int price[4] = {10, 5, 2, 1};
int res[4] = {0, 0, 0, 0};

void calculate(int N, int M){
	int x = N%M;
	for (int i=0; i<4; i++){
		int cnt = 0; 
		while (x > price[i]){
			x = x % price[i];			
			cnt++;
		}
		res[i] = cnt;
	}
	cout<<"\nSSR : "<<res[0];
	cout<<"\nSR : "<<res[1];
	cout<<"\nR : "<<res[2];
	cout<<"\nC : "<<res[3];
}

int main(){
    int N, M, res;
    cin>>N>>M;
    if (N<M) {
        cout<<"NEED MORE GEMS!";
        return 0;
    }
    cout<<"You get a SCEPTER!";
    calculate(N, M);
    return 0;
}
