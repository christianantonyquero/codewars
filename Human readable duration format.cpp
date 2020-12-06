#include <string>
#include <vector>

using namespace std;
string unitOfTime[] = {"second", "minute", "hour", "day", "year"};

string print(int t, int unitTime)
{
  if(t > 0)
  {
    string returnStr = to_string(t) + " " + unitOfTime[unitTime];
    return (t > 1) ? (returnStr + "s") : returnStr;
  }
  return "";
}

string format_duration(int seconds) {
  int second = 0, minute = 0,hour = 0,day = 0,year = 0;
  string result = "";
  vector<pair<int, int>> printHelp;

  if (seconds > 0)
  {
    minute = seconds/60;
    second = seconds%60;    
    if (minute > 60)
    {
      hour = minute/60;
      minute = minute%60;
      if(hour > 24)
      {
        day = hour/24;
        hour = hour%24;
        if(day > 365)
        {
          year = day/365;
          day = day%365;
        }
      }
    }
    if(second)
      printHelp.push_back({second, 0});
    if(minute)
      printHelp.push_back({minute, 1});
    if(hour)
      printHelp.push_back({hour, 2});
    if(day)
      printHelp.push_back({day, 3});
    if(year)
      printHelp.push_back({year, 4});

    for(int i = printHelp.size()-1; i >= 0; --i)
    {
      if(i != 0){
        if(i==1)
          result.append(print(printHelp[i].first, printHelp[i].second) + " ");
        else
          result.append(print(printHelp[i].first, printHelp[i].second) + ", ");
      }
      else
      {
        if(printHelp.size()!=1)
          result.append("and ");
        result.append(print(printHelp[i].first, printHelp[i].second));
      }  
    }
  }
  else
  {
    return "now";
  }
  return result;
}