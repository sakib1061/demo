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
double eqation(double x) {return (x*x*x)-(2*x)-5;}
double der(double x) {return 3*x*x-2;}
void falsi(double a,double b,int n,double err)
{
    double c,d;
    int it=0;
    c=((a*eqation(b))-(b*eqation(a)))/(eqation(b)-eqation(a)+0.0);
    cout<<"Aprroximation :"<<c<<endl;
    while(it<=n)
    {
        if(c<0)
            a=c;
        else
            b=c;
        d=c;
      c=((a*eqation(b))-(b*eqation(a)))/(eqation(b)-eqation(a));
      if(fabs(d-c)<=err)
      {
         cout<<"Aprroximation :"<<c<<endl;
         break;
      }
      cout<<"Aprroximation :"<<c<<endl;
      it++;
    }
}
void newton(double a,int n,double err)
{
    double c,d,h;
    int it=0;
    while(it<=n)
    {
        h=eqation(a)/der(a);
        c=a-h;
        if(fabs(c-a)<=err)
        {
            cout<<"Aprroximation :"<<c<<endl;
         break;
        }
        cout<<"Aprroximation :"<<c<<endl;
      it++;
      a=c;
    }
}
void bisection(double a,double b,int n,double err)
{
    double c,d,f1,f2,f3;
    int it=0;
    while(it<=n)
    {
        d=c;
        c=(a+b)/2.0;
        f1=eqation(c);
        f2=eqation(a);
        f3=eqation(b);

        if(f1<0)
            a=c;
        else
            b=c;
        if(fabs(d-c)<=err)
        {
            cout<<"Aprroximation :"<<c<<endl;
            break;
        }
        cout<<"Aprroximation :"<<c<<endl;
      it++;
    }
}
///Main Code Starting From Here///
int main()
{
double a;double b;int n;double err;
cout<<"FALSI\n";
cin>>a>>b>>n>>err;
falsi(a,b,n,err);
cout<<"BISECTION\n";
bisection(a,b,n,err);
cout<<"NWETON\n";
cin>>a;
newton(a,n,err);
return 0;
}
///Never Give Up///

