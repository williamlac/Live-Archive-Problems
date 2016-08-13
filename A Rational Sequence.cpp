//Created by William Lacerda on 12/08/2016
//https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&page=show_problem&problem=5385
#include <bits/stdc++.h>
#include <string>
#define MAXN 10010
#define INF 0x0F0F0F0F
using namespace std;

int acha(int p, int q){
    if (p == 1){
        return pow(2,q-1);
    }
    //borda direita
    else if (q == 1){
        return pow(2,p)-1;
    }
    //filho esquerdo
    else if (p < q){
       return acha(p, q-p) * 2;
   }
    else {
        return acha(p-q, q) *2 + 1;
    }
}

int main(int argc, char const *argv[]) {
    int P, K, p, q;
    string s;
	cin >> P;
	while(P--) {
		string s;
		cin >> K >> s;
		int slash = s.find('/');
		p = stoi(s.substr(0, slash));
		q = stoi(s.substr(slash + 1));

        cout << K << " " << acha(p,q) << endl;
    }
    return 0;
}
