#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


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
       cout << array[i] << " " << endl;
    }



    return 0;
}
