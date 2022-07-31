//B - +-x

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;

    cin >> a;

    cin >> b;

    int result = a * b;
    int sum = a + b;
    int sub = a - b;

    if (sub > result) {
      result = sub;
    }
    if (sum > result) {
    result = sum;
    }
    cout << result << endl;

  return 0;
}
