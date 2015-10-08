#include <bits/stdc++.h>
using namespace std;
#define size 32000
int A[size];
int sieve()
{
    int i,j;
    for(i=4;i<=size;i+=2)
        if(i%2==0)
        A[i]=1;
        A[0]=A[1]=1;
    for(i=3;i<=sqrt(size);i+=2)
    {
        if(A[i]==0) {
            for(j=2;i*j<=size;j++)
                A[j*i]=1;
        }
    }
    for(i=0;i<size;i++)
        if(A[i]==0)
        printf("%d",i);

}
int main() {
    sieve();
}
