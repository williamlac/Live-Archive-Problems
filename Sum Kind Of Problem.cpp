//Created by William Lacerda on 12/08/2016
//https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&page=show_problem&problem=5381
#include <bits/stdc++.h>
#include <string>
#define MAXN 10010
#define INF 0x0F0F0F0F
using namespace std;

long int S1(int N){
    long int res=0;
    int s = 1;
    for (int i = 0; i < N; i++) {
        res+=s;
        s++;
    }
    return res;
}
long int S2(int N){
    long int res=0;
    int s = 1;
    for (int i = 0; i < N; i++) {
        res+=s;
        s+=2;
    }
    return res;
}
long int S3(int N){
    long int res=0;
    int s = 2;
    for (int i = 0; i < N; i++) {
        res+=s;
        s+=2;
    }
    return res;
}
int main(int argc, char const *argv[]) {
    int P;
    int K;
    int N;
    cin>>P;
    while (P--) {
        cin>>K>>N;
        cout<<K << " "<<S1(N) << " "<<S2(N) << " "<<S3(N) << endl;
    }
    return 0;
}
