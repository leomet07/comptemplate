#include <iostream>

using namespace std;

int main() {
    
    int a[] = {0, 1 , 1, 0 , 1};
    int n = sizeof(a) / sizeof(int);
    int pre[n + 1];
    pre[0] = 0;

    for (int i = 1; i < n + 1; i++){
      pre[i] = pre[i -1] + a[i-1];
    }

    for (int i = 0; i < sizeof(pre) / sizeof(int); i++){
        int curr = pre[i];
        cout << i << ": " << curr << endl;
    }
	cout << "Prefix sums" << endl;
    return 0;
}
