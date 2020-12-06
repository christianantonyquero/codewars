#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod);
};

ull fib(ull n)
{
    if (n <= 1)
      return n;
    return fib(n-1) + fib(n-2);
}

std::vector<ull> ProdFib::productFib(ull prod)
{
  bool isProd = true;
  ull ctr = 0;
  while (isProd)
  {
    if (fib(ctr)*fib(ctr+1) == prod)
      return {fib(ctr),fib(ctr+1), true};
    else if (fib(ctr)*fib(ctr+1) > prod)
      return {fib(ctr),fib(ctr+1), false};
    ++ctr;
  }
}