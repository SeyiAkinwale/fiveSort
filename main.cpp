#include <vector>
#include <iostream>

void swap(int &a, int &b)
{int temp =a; a=b; b=temp; }

std::vector<int>& fiveSort(std::vector<int> &numbers) {
  // todo
  return numbers;
}

int main()
{
  int val = 5, diffVal=10;
  std::cout<<std::endl<<val<<diffVal;

  swap(val,diffVal);
  std::cout<<std::endl<<val<<diffVal;
  return 0;
}