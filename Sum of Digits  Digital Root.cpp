// Solution 2
int digital_root(int n) 
{
  return (n-1)%9+1;
}

// Solution 1
using namespace std;
int digital_root(int n)
{
    int result = 0; 

    while(n > 0 || result > 9) 
    { 
        if(n != 0) 
        { 
          result += n % 10; 
          n /= 10; 
        }
        else
        {
          n = result; 
          result = 0; 
        }
    } 
    return result; 
}