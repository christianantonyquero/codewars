#include <string>

std::string work_on_strings(const std::string &a, const std::string &b) {
  std::map<char, int> aCounter;
  std::map<char, int> bCounter;
  std::map<char, int>::iterator aIterator;
  std::map<char, int>::iterator bIterator;
  std::map<char, int>::iterator aIterChange;
  std::map<char, int>::iterator bIterChange;
  
  std::string output = "";
  for (int i = 0 ; i < a.length() ; ++i)
  {
    aIterator = aCounter.find(tolower(a[i]));
    if (aIterator != aCounter.end())
    {
      if (aIterator->second == 1)
      {
        aIterator->second = 0;
      }
      else
      {
        aIterator->second = 1;
      }
    }
    else
    {
      aCounter.insert(std::pair<char,int>(tolower(a[i]),1));
    }
  }
  
  for (int i = 0 ; i < b.length() ; ++i)
  {
    bIterator = bCounter.find(tolower(b[i]));
    if (bIterator != bCounter.end())
    {
      if (bIterator->second == 1)
      {
        bIterator->second = 0;
      }
      else
      {
        bIterator->second = 1;
      }
    }
    else
    {
      bCounter.insert(std::pair<char,int>(tolower(b[i]),1));
    }
  }
  
  for (int i = 0 ; i < a.length() ; ++i)
  {
    std::map<char, int>::iterator aIterChange;
    aIterChange = bCounter.find(tolower(a[i]));
    if(aIterChange != bCounter.end() && aIterChange->second == 1)
    {
      if(isupper(a[i]))
      {
        output += a[i] + 32;
      }
      else
      {
        output += a[i] - 32;
      }
    }
    else
    {
      output += a[i];
    }
  }

  for (int i = 0 ; i < b.length() ; ++i)
  {
    std::map<char, int>::iterator bIterChange;
    bIterChange = aCounter.find(tolower(b[i]));
    if(bIterChange != aCounter.end() && bIterChange->second == 1)
    {
      if(isupper(b[i]))
      {
        output += b[i] + 32;
      }
      else
      {
        output += b[i] - 32;
      }
    }
    else
    {
      output += b[i];
    }
    
  }
  
  return output;
}