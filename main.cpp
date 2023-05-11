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

  for(int i=0; i<numbers.size(); i++) 
    std::cout<<numbers[i]<<" ";
  return 0;
}