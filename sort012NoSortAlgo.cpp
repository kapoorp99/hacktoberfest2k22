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
lli kadane(lli a[], lli n)
{
    lli s=a[0],smax=a[0];
    ffi(0,n)
    {
        s = max(a[i],s+a[i]);
        smax = max(smax,s);
    }
    return smax;
}
bool isPowerof2(int x)
{
  return (x && (!(x & (x - 1))));
}
lli fast_gcd(lli a,lli b)
{
    if(b==0)
        return a;
    else
        return fast_gcd(b, a % b);
}
lli fast_power(lli b, lli n) 
{
    if(n==0)
        return 1;
    if(n==1)
      return b;
    long long halfn=fast_power(b,n/2);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return (((halfn*halfn)% M)*b)%M;
}
bool ispalindrome(string str,lli l,lli r)
{
    while(l<=r)
    {
        if(str[l]!=str[r])
        return false;
        l++;
        r--;
    }
    return true;
}
lli reversenum(lli n)
{
    lli ans=0;
    while(n)
    {
        ans= (ans*10)+n%10;
        n/=10;
    }
    return ans;
}
//function returning a pointer
lli * reverseArray(lli a[],lli n)
{
  int head=0,tail=n-1;
  while(head<tail)
  {
    swap(a[head],a[tail]);
    head++;
    tail--;
  }
  return a;
}
pair<lli,lli> maxminArray(lli a[],lli n)
{
  lli mn=LLONG_MAX,mx=LLONG_MIN;
  pair<lli,lli> p;
  ffi(0,n)
  {
    if(mn>a[i])
    {
      mn = a[i];
    }
  }
  ffi(0,n)
  {
    if(mx<a[i])
    {
      mx = a[i];
    }
  }
  p = make_pair(mn,mx);
  return p;
}
pair<lli,lli> kthmaxminArray(lli a[],lli n,lli k)
{
  sort(a,a+n);
  lli kth_mn=a[k-1],kth_mx=a[n-k];
  pair<lli,lli> p;
  p = make_pair(kth_mn,kth_mx);
  return p;
}
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  tc
  { 
   lli n,cnt0=0,cnt1=0,cnt2=0;
   cin>>n;
   lli a[n];
   ffi(0,n)
   {
    cin>>a[i];
    if(a[i] == 0)
    {
        cnt0++;
    }
    else if(a[i] == 1)
    {
        cnt1++;
    }
    else
    {
        cnt2++;
    }
   }
   ffi(0,cnt0)
   {
    a[i] = 0;
   }
   ffi(cnt0,cnt0+cnt1)
   {
    a[i] = 1;
   }
   ffi(cnt0+cnt1,cnt0+cnt1+cnt2)
   {
    a[i] = 2;
   }
   ffi(0,n)
   {
    cout<<a[i]<<" ";
   }
   cout<<'\n';
  }
return 0;
}

//Time Complexity => O(n)
