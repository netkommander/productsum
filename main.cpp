/*****
It makes sense!
5.15.20
*****/

#include <iostream>
#include <vector>

int main()
{
  std::vector<int> values = {
    2,4,3,6,1,9};
  int total_even=0;
  int total_odd=1;

  for(int n=0;n<values.size();n++)
  {
    if(values[n] % 2 == 0)
    {
      total_even = total_even + values[n];
    }
   if(values[n] % 2 == 1)
   {
     total_odd = total_odd * values[n];
   }
  }

  std::cout << "Sum of even: " << total_even;
  std::cout << "\nProduct of odd: " << total_odd;
  }
