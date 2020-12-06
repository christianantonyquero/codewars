#include<cmath>
using namespace std;
bool isOperator(char i)
{
  if (i == '+') return true;
  if (i == '-') return true;
  if (i == '*') return true;
  if (i == '/') return true;
  return false;
}
bool isNumber(char i)
{
  if (i == '0') return true;
  if (i == '1') return true;
  if (i == '2') return true;
  if (i == '3') return true;
  if (i == '4') return true;
  if (i == '5') return true;
  if (i == '6') return true;
  if (i == '7') return true;
  if (i == '8') return true;
  if (i == '9') return true;
  if (i == '.') return true;
  return false;
}

std::string calculateString(std::string calcIt) 
{
    std::string result = "";
    double iResult = 0;
    std::string first = "";
    std::string second = "";
    int i = 0;
    while (!isOperator(calcIt.at(i)))
    {
      if (isNumber(calcIt.at(i)))
        first+=calcIt.at(i);
      ++i;
    }
    char oprtr = calcIt.at(i);
    ++i;
    while(i!=calcIt.length() && !isOperator(calcIt.at(i)))
    {
      if (isNumber(calcIt.at(i)))
        second+=calcIt.at(i);
      ++i;
    }

    switch (oprtr)
    {
    case '+':
    iResult = stod(first) + stod(second);
    break;
    case '-':
    iResult = stod(first) - stod(second);
    break;
    case '*':
    iResult = stod(first) * stod(second);
    break;
    case '/':
    iResult = stod(first) / stod(second);
    break;
    }
    result = to_string((int) round(iResult));
    return result;
}   