#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{
    int randomWinner;

    /* initialize random seed: */
        srand (time(NULL));

    /* generate secret number between 1 and 10: */
        randomWinner = rand() % 15 + 0;
        cout << randomWinner;

     /* erzeuge eine Array */
        std::string winners[16] = { "Jason",
      "Mike",
      "Jenny",
      "Mary",
      "Tom",
      "Chris",
      "Laura",
      "Jay",
      "George",
      "Peter",
      "Ashley",
      "David",
      "Emily",
      "Jacob",
      "Charly",
      "Harry"
    };
    cout << "\nThe Winner is: "+ winners[randomWinner];


}
