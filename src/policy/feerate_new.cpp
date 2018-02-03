
/** coding this shit in C, no idea if it works in C++ */

/** return multiplier for developer feerate */ 
int getDevFeeRate() {
  double feeRate = 0.1; // 10% developer fee
  return feeRate;
}

/** return amount to be paid as developer's fee given 
number of coins mined nCoins */
int getDevFeeAmount(double nCoins) {
  double multiplier = getDevFeeRate();
  return multiplier*nCoins;
}

