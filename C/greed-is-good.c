int score(const int dice[5]) {

    int points = 0, mult = 0, ctr = 0, minus = 0;
  
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if (dice[i] == dice[j])
          ctr++;
        
        if (j == 0) {
        if (dice[i] == 1)
          points += 100;
        if (dice[i] == 5)
          points += 50;
        }
        
        if (ctr > 2) {        
          if (dice[i] == 1) {
            mult = 10;
            minus = 300;
          }
          
          else if (dice[i] == 5) {
            mult = 5;
            minus = 150;
          }
          
          else 
            mult = dice[i];
          
        }
      }  
      ctr = 0;
    }
  
  return points + (mult * 100) - minus;
}
