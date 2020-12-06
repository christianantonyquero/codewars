class Same {
//     public :static bool comp(std::vector<int>, std::vector<int>);
public:
  static bool comp(std::vector<int> cpa, std::vector<int> cpb)
  {
    std::vector<int> a;
    std::vector<int> b;
    a=cpa;
    b=cpb;
      
    if (a.empty() && b.empty())
    {
      std::cout << "xxx"<< b.empty();
      return true;
    }
    if (a.empty())
    {
      std::cout << b.empty();
      return false;
    }
    if (b.empty())
    {
      std::cout << "false4" ;
      return false;
    }
    if (a.size() == 0)
    {
      std::cout << "false6" ;
      return false;
    }
    if (b.size() == 0 || (a.size() != b.size()))
    {
      std::cout << "false1" ;
      return false;
    }
    
    for (int i = 0; i < a.size() ; ++i)
    {
      std::vector<int>::iterator it;
      it = find(b.begin(), b.end(), a[i]*a[i]);
      if(it != b.end())
      {
        b.erase(it);
      }
      else{
        return false;
      }
    }
    return true;
  }
};