#include<string>
#include<unordered_map>

bool scramble(const std::string& s1, const std::string& s2){
  std::unordered_map<char, int> h1;
  std::unordered_map<char, int> h2;
  int ctr = 0;
  for (int i : s1) h1[i]++;
  for (int i : s2) h2[i]++;
  for (const auto& [key, value] : h2) {
    if (h1.count(key) && h1[key] >= value)
      ctr++;
  }
  if (ctr == h2.size()) {return true;}
  return false;
}
