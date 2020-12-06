using namespace std;
class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr);
};

std::vector<std::string> DirReduction::dirReduc(std::vector<std::string> &arr)
{
    if(arr.empty() || arr.size() == 1)
    {
      return arr;
    }

    std::vector<int> removal;
    for(int i = 0; i < arr.size()-1; ++i)
    {
      if ((arr[i] == "SOUTH" && arr[i+1] == "NORTH") || (arr[i] == "NORTH" && arr[i+1] == "SOUTH") || (arr[i] == "EAST" && arr[i+1] == "WEST") || (arr[i] == "WEST" && arr[i+1] == "EAST"))
      {
        removal.push_back(i);
        removal.push_back(i+1);
        ++i;
      }
    }

    if(removal.size() > 0)
    {
      for(int i = removal.size()-1; i >= 0; --i)
      {
        arr.erase(arr.begin() + removal[i]);
      }
      DirReduction::dirReduc(arr);
    }
    else
    {
      return arr;
    }
  return arr;
}