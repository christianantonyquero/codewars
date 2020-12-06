#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  int x = 0;
  int y = 0;
  int xEdge = 0;
  int yEdge = 0;
  
  std::vector<int> output;
  if (0x0 == snail_map.data())
  {
    return output;
  }
  
  while (output.size() != snail_map[0].size() * snail_map[0].size())
  {
    // ---->
    std::cout << "Whilex" << std::endl;
    for(x=xEdge ; x < snail_map[y].size() - xEdge; ++x)
    {
      std::cout << "y:" << y << " x:" << x << " -> " << snail_map[y][x] << std::endl;
      output.push_back(snail_map[y][x]);
    }
    --x;
    // Going down
    for(y+=1 ; y < snail_map.size() - yEdge; ++y)
    {
      std::cout << "y:" << y << " x:" << x << " dw " << snail_map[y][x] << std::endl;
      output.push_back(snail_map[y][x]);
    }
    // <-------
    --x;
    --y;
    for(; x >= xEdge; --x)
    {
      output.push_back(snail_map[y][x]);
      std::cout <<  "x:" << x <<  " y:" << y <<  " <- " << snail_map[y][x] << std::endl;
    }
    
    ++x;
    --y;
    ++yEdge;
//   Going up
    for(; y >= yEdge; --y)
    {
      output.push_back(snail_map[y][x]);
      std::cout <<  "x:" << x <<  " y:" << y <<  " /. " << snail_map[y][x] << std::endl;
    }
    ++y;
    ++xEdge;
    
    std::cout << snail_map[0].size() * snail_map[0].size() << std::endl;
    std::cout << output.size() << std::endl;
  }
    return output;
}