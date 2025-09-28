#include <iostream>
#include <climits>
int main()
{
    int arr[6][6];
        for(int i=0; i<6; i++)
            for(int j=0; j<6; j++)
                std::cin>>arr[i][j];
        
    int sum_max=INT_MIN, column, row;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            {
                int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                if(sum_max< sum)
                    {    
                        sum_max=sum;
                        row = i;
                        column = j;
                    }
            }
    std::cout<<sum_max<<std::endl;
    return 0;
}
