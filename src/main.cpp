#include <iostream>
using namespace std;


int main(void){
  clock_t startTime = clock();
  unsigned long long i = 0;
  while(i < 1000000000000000){
    i++;
  }
  cout << "Hello World" << endl;
  cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
  return 0;

}
