#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) * (b)) / gcd((a), (b))
#define M 1000000007
typedef long long int lli;
#define pb push_back
#define tc  \
  lli t;    \
  cin >> t; \
  while (t--)
#define ffi(x, y) for (lli i = x; i < y; i++)
#define ffj(x, y) for (lli j = x; j < y; j++)
#define frj(x, y) for (lli j = x; j > y; j--)
#define fri(x, y) for (lli i = x; i > y; i--)
const long double PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899863;
lli kadane(lli a[], lli n)
{
  lli s = a[0], smax = a[0];
  ffi(0, n)
  {
    s = max(a[i], s + a[i]);
    smax = max(smax, s);
  }
  return smax;
}
bool isPowerof2(int x)
{
  return (x && (!(x & (x - 1))));
}
lli fast_gcd(lli a, lli b)
{
  if (b == 0)
    return a;
  else
    return fast_gcd(b, a % b);
}
lli fast_power(lli b, lli n)
{
  if (n == 0)
    return 1;
  if (n == 1)
    return b;
  long long halfn = fast_power(b, n / 2);
  if (n % 2 == 0)
    return (halfn * halfn) % M;
  else
    return (((halfn * halfn) % M) * b) % M;
}
bool ispalindrome(string str, lli l, lli r)
{
  while (l <= r)
  {
    if (str[l] != str[r])
      return false;
    l++;
    r--;
  }
  return true;
}
lli reversenum(lli n)
{
  lli ans = 0;
  while (n)
  {
    ans = (ans * 10) + n % 10;
    n /= 10;
  }
  return ans;
}
class tree
{
public:
  lli val;
  tree *left, *right;

  tree(lli value)
  {
    this->val = value;
    this->left = this->right = NULL;
  }
  tree *insert(lli value, tree *root)
  {
    if (root == NULL)
      return new tree(value);
    if (value < root->val)
      root->left = insert(value, root->left);
    else
      root->right = insert(value, root->right);
    return root;
  }
  void inorder(tree *root)
  {
    if(root==NULL)
      return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
  }
  void preorder(tree *root)
  {
    if(root==NULL)
      return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
  }
  void postorder(tree *root)
  {
    if(root==NULL)
      return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
  }
  void level_order_traversal(tree *root)
  {
    queue<tree *> q;
    q.push(root);
    while(!q.empty())
    {
      auto temp = q.front();
      q.pop();
      cout<<temp->val<<" ";
      if(temp->left!=NULL)
      {
        q.push(temp->left);
      }
      if(temp->right!=NULL)
      {
        q.push(temp->right);
      }
    }
  }
};

int main()
{
  FAST_IO;
  tree *root = NULL;
  root = root->insert(7, root);
  root = root->insert(5, root);
  root = root->insert(8, root);
  root = root->insert(4, root);
  root = root->insert(6, root);
  root = root->insert(9, root);
  root->inorder(root);
  cout<<'\n';
  root->preorder(root);
  cout<<'\n';
  root->postorder(root);
  cout<<'\n';
  root->level_order_traversal(root);
  cout<<'\n';
  return 0;
}
