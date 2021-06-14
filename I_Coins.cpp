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
int MAX = 1e9+7;

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
   int n;
   cin>>n;

   vector<double> v(n);
   F(i,0,n,1)
     cin>>v[i];

     double dp[n][n+1];
     memset(dp,0,sizeof(dp));

     dp[0][0] = (1-v[0]);
     dp[0][1] = v[0];

     F(i,1,n,1){
         F(j,0,n+1,1){
             dp[i][j] += (1-v[i])*dp[i-1][j];

             if(j>0)
               dp[i][j] += v[i]*dp[i-1][j-1];
         }
     }

    //  F(i,0,n,1){
    //      F(j,0,n+1,1)
    //        cout<<dp[i][j]<<" ";
    //        cout<<endl;
    //  }

     double ans=0;
     F(i,n/2+1,n+1,1)
       ans += dp[n-1][i];

       cout<<setprecision(10)<<ans;

}
 
 
 
int main() {
    
      eval();
      cout<<endl;
	return 0;
}