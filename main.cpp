#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    int n = 0;

    cin >> n;
    float num_list[n];

    for (int i = 0; i < n; ++i) {
        float a;
        cin >> a;
        num_list[i] = a;

    }
    cout << max_array(num_list, n) << endl;
    return 0;
}

