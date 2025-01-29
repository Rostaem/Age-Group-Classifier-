// Age Group Classifier

#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter your age: " << endl;
  cin >> age;

 string category = (age < 12) ? "Child" :
                   (age >= 12 && age <= 19) ? "Teenager":
                    (age >= 20 && age <= 64) ? "Adult" : "Senior";

 cout << "You have been classified as : " << category << endl;


  return 0;
}