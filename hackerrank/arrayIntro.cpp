#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Array Introductions: Hacker Rank Problem solution
Author: Yadiel F. Cabrera

Description:
This is my solution to the exercise on HackerRank for Introduction to
arrays.

The problem was to display the items on reverse order
from a given array.
*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    int array[1005];
    cin >> n;

    int a;

    // fill array with numbers
    for (int i = 0; i < n; i++){
          cin >> a;
          array[i] = a;
    }

    // display the numbers in the reverse order
    for(int i = n-1; i>=0; i--){
       cout << array[i] << " ";
    }


    return 0;
}
