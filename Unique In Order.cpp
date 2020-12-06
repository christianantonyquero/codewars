#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  //your code here
  std::vector<T> output;
  T currentT;
  if(iterable.size()!=0)
  {
    currentT = iterable[0];
    output.push_back(currentT);
  } 

  for(int i = 1; i < iterable.size(); ++i)
  {
    if(currentT != iterable[i])
    {
      currentT = iterable[i];
      output.push_back(iterable[i]);
    }
  }
  return output;
  
}

std::vector<char> uniqueInOrder(const std::string& iterable){
  //your code here
  std::vector<char> output;
  char currentChar;
  if(iterable.size()!=0)
  {
    currentChar = iterable[0];
    output.push_back(currentChar);
  } 
  
  for(int i = 1; i < iterable.size(); ++i)
  {
    if(currentChar != iterable[i])
    {
      currentChar = iterable[i];
      output.push_back(iterable[i]);
    }
  }
  return output;
}