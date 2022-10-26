#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define M 1000000007 
typedef long long int lli; 
#define pb push_back
#define tc  lli t;cin >> t;while(t--)
#define ffi(x,y) for(lli i=x;i<y;i++)
#define ffj(x,y) for(lli j=x;j<y;j++)
#define frj(x,y) for(lli j=x;j>y;j--)
#define fri(x,y) for(lli i=x;i>y;i--)
const long double PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899863;
int kadane(int a[], int n)
{
    int sum = 0;
    int max_so_far = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        max_so_far = max(max_so_far,sum);
        if(sum<0)
        {
            sum = 0;
        }
    }
    return max_so_far;
}
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  tc
  { 
   lli n;
   cin>>n;
   lli a[n];
   ffi(0,n)
   {
    cin>>a[i];
   }
   lli ans = kadane(a,n);
   cout<<ans<<'\n';
  }
return 0;
}
