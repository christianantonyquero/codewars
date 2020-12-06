#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool validate_battlefield(vector< vector<int> > field) {
  if (field.empty() || field[0].empty())
    return 0;

  int H = field.size();
  int W = field[0].size();
  auto isInside = [&](int row, int col) {
    return 0 <= row && row < H && 0 <=col && col < W;
  };
  
  vector<pair<int,int>> vertDirections = {{1,0}, {-1,0}};
  vector<pair<int,int>> horiDirections = {{0,1}, {0,-1}};
  vector<pair<int,int>> diagonal = {{1,1}, {1,-1}, {-1,-1}, {-1,1}};
  vector<vector<bool>> visited(H, vector<bool>(W));
  vector<int> ships(5); 
  int elements = 0;
  int length = 0;
  
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      bool vert = false, hori = false;
      int cellConnected = 0;
      if (!visited[i][j] && field[i][j] == 1)
      {
        cellConnected = 1;
        ++elements;
        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j] = true;
        while(!q.empty())
        {
          pair<int, int> p = q.front();
          q.pop();

          for (auto &direction : diagonal)
          {
            int new_row = p.first + direction.first;
            int new_col = p.second + direction.second;
            if (isInside(new_row, new_col) && field[new_row][new_col] == 1)
            {
              return false;
            }
          }

          for (auto &direction : vertDirections)
          {
            int new_row = p.first + direction.first;
            int new_col = p.second + direction.second;
            if (isInside(new_row, new_col) && !visited[new_row][new_col] && field[new_row][new_col] == 1)
            {
              ++cellConnected;
              q.push({new_row, new_col});
              visited[new_row][new_col] = true;
              cout << cellConnected;
              vert = true;
            }
          }          
          for (auto &direction : horiDirections)
          {
            int new_row = p.first + direction.first;
            int new_col = p.second + direction.second;
            if (isInside(new_row, new_col) && !visited[new_row][new_col] && field[new_row][new_col] == 1)
            {
              ++cellConnected;
              q.push({new_row, new_col});
              visited[new_row][new_col] = true;
              cout << cellConnected;
              hori = true;
            }
          }
        }
      }
      if (hori && vert)
        return false;
      if (cellConnected && cellConnected > ships.size())
        return false;
      
      ships[cellConnected]++;
    }
  }
  if (elements > 10)
    return false;
  
  cout << endl;
  for (int a = 1; a < ships.size(); ++a)
  {
    if (ships[a] != ships.size()-a)
      return false;
  }

  return true;
}