#include <vector>

using namespace std;
typedef long long ll;

class RemovedNumbers
{
public:
  static vector<vector<long long>> removNb(long long n);
};

ll total = 0;

vector<vector<ll>> RemovedNumbers::removNb(ll n)
{
  vector<vector<ll>> output;
  total = (n*(n+1)/2);
  
  for (int i = n ; i > 0 ; --i)
  {
    ll j = (total - i)/(i+1);
    if (( (total - i)%(i+1) == 0) && j < n)
      output.push_back({j,i});
  }
  
  return output;
}