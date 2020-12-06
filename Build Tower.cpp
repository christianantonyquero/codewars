class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> res;
        int starCtr = 1;
        for (int i = 1; i <= nFloors; ++i)
        {
          std::string fSpace(nFloors-i,' ');
          std::string star(starCtr,'*');
          starCtr += 2;
          std::string temp = fSpace + star + fSpace;
          res.push_back(temp);
        }
        return res;
    }
};