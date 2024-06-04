#include <iostream>
using namespace std;
void cut_triangle(int level) {
// base case
  if (level == 0) {
    cout << "*\n";
    return;
  }
	//recursive call
  cut_triangle(level-1);

	//small calculation
  for (int i = 0; i < level; i++) {
    cout << "* ";
  }
  cout << endl;

	//recursive call
  cut_triangle(level-1);
}

int main() {
  int level;
  cout << "Enter the number of levels: ";
  cin >> level;

  cut_triangle(level);

  return 0;
}