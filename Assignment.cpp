#include <iostream>
#include <vector>
using namespace std;
// Function declaration
int getSum(vector<int> vector1);
float getAverage(vector<int> vector1);

// Main function
int main()
{
  vector<int> vector1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "The sum of the numbers is: " << getSum(vector1) << endl;
  cout << "The average of the numbers is: " << getAverage(vector1) << endl;
  return 0;
}

// Function definition
int getSum(vector<int> vector1)
{
  int sum = 0;
  for (int i = 0; i < vector1.size(); i++)
  {
    sum += vector1[i];
  }
  return sum;
}
float getAverage(vector<int> vector1)
{
  float sum = 0;
  for (int i = 0; i < vector1.size(); i++)
  {
    sum += vector1[i];
  }
  return (sum / vector1.size());
}
