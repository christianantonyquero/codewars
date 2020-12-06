#include <string>

std::string encode(const std::string &str) {
  std::string output = str;
  for (int i = 0; i < str.length(); ++i)
  {
    switch (output.at(i)) {
      case 'a':
        output.at(i) = '1';
        break;

      case 'e':
        output.at(i) = '2';
        break;

      case 'i':
        output.at(i) = '3';
        break;

      case 'o':
        output.at(i) = '4';
        break;

      case 'u':
        output.at(i) = '5';
        break;
    }

  }
  return output;
}

std::string decode(const std::string &str) {
  std::string output = str;
  for (int i = 0; i < str.length(); ++i)
  {
    switch (output.at(i)) {
      case '1':
        output.at(i) = 'a';
        break;

      case '2':
        output.at(i) = 'e';
        break;

      case '3':
        output.at(i) = 'i';
        break;

      case '4':
        output.at(i) = 'o';
        break;

      case '5':
        output.at(i) = 'u';
        break;
    }

  }
  return output;
}