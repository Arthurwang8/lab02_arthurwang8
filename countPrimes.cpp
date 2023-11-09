#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include "utility.h"


using namespace std;

int countPrimes(int a[], int size) {
  string temp;
  int count = 0;
  for (int i = 0; i< size; i++){
  temp = a[i];
  if(temp.isPrime()){
  count ++;
  }
  }
 return count; 
}
