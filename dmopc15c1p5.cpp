#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
#include <set>
#include <unordered_set>
#include <list>
#include <string>
#include <stack>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <random>
#include <map>
#include <unordered_map>
#include <complex>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;
typedef long long unsigned llu;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
struct tri {int first, second, t ;};
#define f first
#define s second
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define pb push_back
#define mp make_pair
#define INF 2e18
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int i, y, j;
int w, h, n, psa[251][251], g = 0;
int main(){
    cin.sync_with_stdio(0); cin.tie(0);
    scan(h);scan(w);scan(n);
    for(i = 1; i <= w; i++){
        for(y = 1; y <= h; y++){
            scan(psa[i][y]);
            psa[i][y] += psa[i-1][y] + psa[i][y-1] - psa[i-1][y-1];
        } 
    }
    int n2 = n;
    while(n2){
        int s = min(h, n / n2);
        for(i = 1; i + n2 <= w + 1; i++){
            for(y = 1; y + s <= h + 1; y++){
                int t = psa[i + n2 - 1][y + s - 1] + psa[i - 1][y - 1] - psa[i + n2 - 1][y - 1] - psa[i - 1][y + s - 1];
                if(t > g) g = t;
            }
        }
        n2--;
    }
    cout<<g<<endl;
}