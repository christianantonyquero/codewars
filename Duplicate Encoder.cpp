#include <string>
#include <stdio.h>
#include <ctype.h>
std::string duplicate_encoder(const std::string& word){
  std::string output = "";
  std::map<char,int> myMap;
  std::map<char,int>::iterator it;
  std::map<char,int>::iterator itPrint;
  for (int i = 0 ; i < word.length(); ++i)
  {
    it = myMap.find(tolower(word[i]));
    if (it != myMap.end())
    {
      it->second++;
    }
    else
    {
      myMap.insert(std::pair<char, int>(tolower(word[i]), 1));
    }
  }

  for (int i = 0 ; i < word.length(); ++i)
  {
    itPrint = myMap.find(tolower(word[i]));
    if (itPrint->second > 1)
    {
      output += ")";
    }
    else
    {
      output += "(";
    }
  }
  return output;
}