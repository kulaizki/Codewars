#include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n){
  vector<vector<int>> table(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      table[i][j] = (i+1) * (j+1);
    }
  }
  return table;
}
