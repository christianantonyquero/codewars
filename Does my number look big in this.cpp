#include<cmath>
using namespace std;
bool narcissistic( int value ){
  //Code away
  int total = 0;
  vector<int> temps;
  int digits = 0;
  int valueT = value;

  while(valueT > 9)
  {
    temps.push_back(valueT%10);
    valueT = valueT/10;
    ++digits;
  }
  temps.push_back(valueT);
  ++digits;
  
  for (auto &temp: temps)
  {
    cout << "temp:" << temp << " digits:" << digits << endl;
    total += pow(temp, digits);
  }
  return (total == value) ? true : false;
}