#include <iostream>
#include <unordered_map>
#include <string>
#include<algorithm>
bool hasUnique(std::string& s)
{
  std::unordered_map<char,bool> Map; 
  for(int i =0; i < s.size(); i++)
    {
      if(Map[s[i]])
        return false;
      Map[s[i]] = true;
    }
	return true;
}

bool hasUniqueNoDS(std::string& s)
{
  if(s.size()==0) return false;
  if(s.size() == 1) return true;

  std::sort(s.begin(), s.end());
  for(auto i = 0; i < s.size(); i++)
    {
      if(s[i] == s[i+1])
        return false;
    }
  return true;
}

int main()
{
	std::string ch = "CHARLIE";
	std::cout << hasUniqueNoDS(ch);
    return 0;
}


