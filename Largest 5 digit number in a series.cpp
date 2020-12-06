#include <string>
using namespace std;
int largest_five_digits(const std::string &digits)
{
    int result = 0;

    for(int i = 0; i < digits.length()-4; ++i)
    {
      result = max(result, stoi(digits.substr(i, 5)));
    }
    return result;
}