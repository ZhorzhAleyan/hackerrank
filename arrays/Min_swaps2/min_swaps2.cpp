#include <iostream>
#include <vector>
void minimumSwaps (std::vector<int> arr)
 {
    size_t swaps = 0;
    size_t n = arr.size();

    for (size_t i = 0; i < n; i++) {

        while (arr[i] != i + 1) {
            const int correctIndex = arr[i] - 1;
            std::swap(arr[i], arr[correctIndex]);
            swaps++;
        }
    }

    std::cout<<swaps<<std::endl;
}

int main() {
    int n;
    std::cin >> n; 

    std::vector<int> queries(n);

    for (int i = 0; i < n; i++) {
        std::cin >> queries[i];
    }

     minimumSwaps(queries);

    return 0;
}
