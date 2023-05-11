#include <vector>
#include <iostream>

void swap(int &a, int &b)
{int temp =a; a=b; b=temp; }

std::vector<int>& fiveSort(std::vector<int> &numbers) 
{
  int lPointer=0;
  int rPointer=numbers.size()-1;
  while (lPointer<rPointer)
  {


    if(numbers[lPointer]==5  &&  numbers[rPointer]==5)
    {rPointer--;}
    else if(numbers[lPointer]==5  && numbers[rPointer]!=5)
    {
      swap(numbers[lPointer], numbers[rPointer]);
      lPointer++; rPointer--;
    }
    else
      lPointer++;
  }
  return numbers;
}

int main()
{
  std::vector<int> numbers {12, 5, 1, 5, 12, 7};
  fiveSort(numbers);

  std::vector<int> fives(20000, 5);
  std::vector<int> fours(20000, 4);
  std::vector<int> nums;
  nums.reserve(fives.size() + fours.size());
  nums.insert(nums.end(), fives.begin(), fives.end());
  nums.insert(nums.end(), fours.begin(), fours.end());
  fiveSort(nums);

  for(int i=0; i<nums.size(); i++) 
    std::cout<<nums[i]<<" ";
  return 0;
}