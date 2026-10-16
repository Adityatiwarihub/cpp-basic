#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
  int slast = 0;
  int flast = 1;
  int next;
  if (n <= 0) {
    cout << slast << endl;
    } else if (n == 1) {
    cout << flast << endl;
  } else {
    cout << slast << " " << flast << " ";
    for (int i = 3; i <= n; i++) {
      next = slast + flast;
      cout << next << " ";
      slast = flast;
      flast = next;
    }
  }
  return 0;
}
