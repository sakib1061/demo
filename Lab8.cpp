/***********************************\
        BOXTROLL
        Sakibhossain.nstu@gmail.com
/************************************/
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define vip(A) vector<pair<int,int> >A
#define ulta(A) reverse(all(A))
#define pai(A) pair<int,int>A
#define mkp(x,y) make_pair(x,y)
#define ll long long int
#define ull unsigned long long int
#define re(x) return x
#define repa(i,j) for(i=1;i<=j;i++)
#define rep(i,j) for( i=0;i<j;i++)
#define pob pop_back()
#define per(i,j) for(int i=j;i>=0;i--)
#define po(i,j) pow(i+0.0,j)
#define pb(x) push_back(x)
#define ppb(x,y) push_back(pair<int, int>(x,y))
#define pf printf
#define sf scanf
#define all(x) x.begin(), x.end()
#define clr(x) x.erase(all(x))
#define sum(x) accumulate(all(x),0)
#define vi(x) vector<int>x
#define vs(x) vector<string>x
#define fimax(A) max_element(all(A))
#define fimin(A) min_element(all(A))
#define ca(x) pf("Case %d: ",x)
#define show(A) for(int i=0;i<A.size();i++){cout<<A[i]<<endl;}
#define ok pf("ok\n")
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template <class T> T Max(T a, T b) { return a>b?a:b;}
template <class T> T Min(T a, T b) { return a<b?a:b;}
bool stb(const string &a,const string &b) ///sorting from small to big size///
{
    return a.size()<b.size();
}
bool bts(const string &a,const string &b)  ///sorting from big to small size///
{
    return a.size()>b.size();
}
bool pas(const pair< int,int > &a,const pair <int,int> &b) ///Sort by Second elements of Pair ///
{
    return a.ss<b.ss;
}
///Main Code Starting From Here///
int main()
{
double X[10],Y[10],h,r=0;
int n;
cin>>n;
for(int i=0;i<n;i++)
    cin>>X[i]>>Y[i];
    h=X[1]-X[0];
    for(int i=1;i<n-1;i+=2)
        r+=4*Y[i];
    for(int i=2;i<n-1;i+=2)
        r+=2*Y[i];
        r+=Y[0]+Y[n-1];
        r*=(h/3.0);
        cout<<r;
return 0;
}
///Never Give Up///
//7
//4.0 1.3863
//4.2 1.4351
//4.4 1.4816
//4.6 1.5260
//4.8 1.5686
//5.0 1.6094
//5.2 1.6486
