#include <vector>
#include <iostream>

void swap(int &a, int &b)
{int temp =a; a=b; b=temp; }

std::vector<int>& fiveSort(std::vector<int> &numbers) 
{
  int rPointer=numbers.size()-1;
  for(int lPointer=0; lPointer<numbers.size()/2; lPointer++)
  {
    std::cout<<std::endl<<"hello";
    
  }
  return numbers;
}

int main()
{
  std::vector<int> numbers {12, 5, 1, 5, 12, 7};
  fiveSort(numbers);
  return 0;
}