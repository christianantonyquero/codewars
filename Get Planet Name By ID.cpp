// #Solution 2
#include <string>

std::string get_planet_name(int id)
{
  std::string planetList[] = {" ","Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune", "Pluto"};
  return planetList[id];
}

// Solution 1
enum planet
{
  Mercury,Venus,Earth,Mars,Jupiter,Saturn,Uranus,Neptune,Pluto
};
std::string get_planet_name(int id)
{
if(id == 1) return "Mercury";
else if(id == 2) return "Venus";
else if(id == 3) return "Earth";
else if(id == 4) return "Mars";
else if(id == 5) return "Jupiter";
else if(id == 6) return "Saturn";
else if(id == 7) return "Uranus";
else if(id == 8) return "Neptune";
else if(id == 9) return "Pluto";
}