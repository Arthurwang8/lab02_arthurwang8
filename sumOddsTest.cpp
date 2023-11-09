#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  // Fill this in with exactly four tests that determine whether your
  // code for sumOdds() correctly sums up all the odd numbers in
  // arrays of various sizes.  Include both positive, negative and
  // zero values in your test arrays.
  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(15,
	       sumOdds(fiveThrees,5),
	       "sumOdds(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       sumOdds(zeros,3), 
	       "sumOdds(zeros,3)" );  

  
  int fiveInts[5]={1,2,3,4,5}; 
  assertEquals(8,
	       sumOdds(fiveInts,5), 
	       "sumOdds(fiveInts,5)" ); 

  int empty[] = {};
  assertEquals(0,
	       sumOdds(empty,0), 
	       "sumOdds(empty,0)" ); 

  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  assertEquals(127,
	       sumOdds(primes,10), 
	       "sumOdds(primes,10)" ); 

  int meaning[] = {42};
  assertEquals(0,
	       sumOdds(meaning,1), 
	       "sumOdds(meaning,1)" ); 

  int mix[10]={-10,-3,0,3,4,5,9,10,11,29};
  assertEquals(54,
	       sumOdds(mix,10), 
	       "sumOdds(mix,10)" );

  
  return 0;
}
