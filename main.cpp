//Annabelle Cormia

#include <iostream>

using namespace std;

int sum(int n);

int main(){

  int n;
  cout << "Enter an integer for n. ";
  cin >> n;
  sum(n);
  cout << "\nCurrent value: " << n << endl;

  cout << "Hello world!" << endl;

}

int sum(int n){

  int sum;

  for (int i = 1; i < n; i++){
    sum+=i;
  }

  return sum;

}
