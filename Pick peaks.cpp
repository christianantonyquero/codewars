// Solution 1
#include <iostream>
#include <vector>

using namespace std;

PeakData pick_peaks(vector<int> v) {
  PeakData result;
  int topPos = 0;
  int topPeak = v[0];
  int rise = 0;

  if (v.size() == 0)
    return result;

  for (size_t  i = 0; i < v.size()-1; i++)
  {
    if(v[i] < v[i+1])
    {
      topPos = i+1;
      topPeak = v[i+1];
      rise = 1;
    }
    else if (v[i] > v[i+1] && rise != 0)
    {
      result.pos.push_back(topPos);
      result.peaks.push_back(topPeak);
      rise = 0;
    }
  }
  
  return result;
}

// Solution 1
#include <iostream>
#include <vector>

using namespace std;

PeakData pick_peaks(vector<int> v) {
  PeakData result;
  int topPos = 0;
  int topPeak = v[0];
  int rise = 0;
  if (v.size() == 0)
    return result;

  for (size_t  i = 0; i < v.size()-1; i++)
  {
    if(v[i] < v[i+1])
    {
      topPos = i+1;
      topPeak = v[i+1];
      rise = 1;
    }
    else if (v[i] > v[i+1] && rise != 0)
    {
      result.pos.push_back(topPos);
      result.peaks.push_back(topPeak);
      rise = 0;
    }
  }
  
  return result;
}