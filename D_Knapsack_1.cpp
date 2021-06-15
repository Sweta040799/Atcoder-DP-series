/*******************************************INoob1*******************************************************/
#include <bits/stdc++.h>
using namespace std;

#define      ff                             first
#define      ss                             second
#define      pb                             push_back
#define      mp                             make_pair
#define      F(i,a,b,c)                     for(int i=a;i<b;i+=c)
#define      FR(i,a,b,c)                    for(int i=a;i>=b;i-=c)
#define      be(x)                          x.begin()
#define      en(x)                          x.end()
#define      yes                            cout<<"YES"
#define      no                             cout<<"NO"
#define      acc(x)                         accumulate(be(x),en(x),0)
#define      fin(x,y)                       find(be(x),en(x),y)
#define      dsort(x)                       sort(be(x),en(x),greater<int>())
#define      srt(x)                         sort(be(x),en(x))
int MAX = 1e9;

typedef      vector<int>                    vi;
typedef      vector<pair<int,int>>          vp;
typedef      pair<int,int>                  pp;
typedef      map<int,int>                   mpp;
typedef      unordered_map<int,int>         upp;
typedef      unsigned long long int         ll;
 
 
int fact(int k){
    if(k>2)
      return k*fact(k-1);
    return 1;
}
int getDivisor(int r){
    int d=0;
    F(i,1,r+1,1){
       if(r%i==0)
         d++;
    }
    return d;
}
bool isPrime(int r){
  if (r <= 1)  return false; 
    if (r <= 3)  return true; 
  
    if (r%2 == 0 || r%3 == 0) return false; 
  
    for (int i=5; i*i<=r; i=i+6) 
        if (r%i == 0 || r%(i+2) == 0) 
          return false; 
  
    return true; 
}
 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
 
 
/*******************************************Workspace***************************************************/
 
void eval(){
     int n,m;
    cin>>n>>m;
    int w[n],v[n];
    F(i,0,n,1)
    cin>>w[i]>>v[i];
    ll dp[n+1][m+1];
    F(i,0,m+1,1)
      dp[0][i]=0;
    F(i,0,n+1,1)
      dp[i][0]=0;
 
      F(i,1,n+1,1){
          F(j,1,m+1,1){
              if(j>=w[i-1]){
                  dp[i][j]=max(dp[i-1][j],(v[i-1]+dp[i-1][j-w[i-1]]));
              }
              else
                dp[i][j]=dp[i-1][j];
          }
      }
      cout<<dp[n][m];
 
}
 
 
 
int main() {
    
      eval();
      cout<<endl;
	return 0;
}
