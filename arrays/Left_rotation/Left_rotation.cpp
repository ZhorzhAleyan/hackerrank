#include <iostream>
#include <vector>
#include <algorithm>
void rotation_left(std::vector<int>& arr, int d){
    std::reverse(arr.begin(), arr.begin()+d);
    std::reverse(arr.begin()+d, arr.end());
    std::reverse(arr.begin(), arr.end());
}

int main()
{  
    size_t n, d; 
     std::cin>>n>>d; 
  d%=n;
std::vector<int> arr(n);
  for(size_t i=0; i<n; i++)
    std::cin>>arr[i];
   rotation_left(arr, d);

 for(int i=0; i<n; i++)
  std::cout<<arr[i]<<" ";
    
    return 0;
}
