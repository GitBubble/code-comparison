#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>
using namespace std;
int main()
{
  clock_t one;
  clock_t two;
  clock_t averagePrintf;
  clock_t averageCout;
  clock_t averagedumbHybrid;
  for (int j = 0; j < 100; j++) {
    one = clock();
    for (int d = 0; d < 20; d++) {
      printf("helloperson;");
      printf("\n");
    }
    two = clock();
    averagePrintf += two-one;

    one = clock();
    for (int d = 0; d < 20; d++) {
      cout << "helloperson;";
      cout << endl;
    }
    two = clock();
    averageCout += two-one;

    one = clock();
    for (int d = 0; d < 20; d++) {
      cout << "helloperson;";
      cout << "\n";
    }
    two = clock();
    averagedumbHybrid += two-one;
  }
  averagePrintf /= 100;
  averageCout /= 100;
  averagedumbHybrid /= 100;
  cout << "printf took " << averagePrintf << endl;
  cout << "cout took " << averageCout << endl;
  cout << "hybrid took " << averagedumbHybrid << endl;
}

