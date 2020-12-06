#include <string>

std::string createPhoneNumber(const int arr [10]){
  //your code here
  
  std::string output = "(";
  for(int i = 0; i < 3; ++i)
  {
    output += std::to_string(arr[i]);
  }
  output += ") ";
  
  for(int i = 3; i < 6 ; ++i)
  {
    output += std::to_string(arr[i]);
  }
  
  output += "-";
    
  for(int i = 6; i < 10 ; ++i)
  {
    output += std::to_string(arr[i]);
  }
  return output;
}