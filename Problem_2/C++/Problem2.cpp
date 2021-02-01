#include <iostream>
using namespace std;

/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int main() {
    int i = 0, j = 1, k = 0, evenSum = 0;
    while (i < 4000000) {
        if (i % 2 == 0) {
            evenSum += i;
        }
        k = i + j;
        i = j;
        j = k;
    }
    cout << evenSum;
    return 0;
}