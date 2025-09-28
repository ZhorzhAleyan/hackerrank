#include <iostream>
#include <vector>
void minimumBribes(std::vector<int> q) {
    int bribes = 0;
    int n = q.size();

    for (int i = 0; i < n; i++) {
        if (q[i] - (i + 1) > 2) {
            std::cout << "Too chaotic" << std::endl;
            return;
        }

        for (int j = std::max(0, q[i] - 2); j < i; j++) {
            if (q[j] > q[i])
                bribes++;
        }
    }

    std::cout << bribes << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> q(n);
        for (int i = 0; i < n; i++)
            std::cin >> q[i];

        minimumBribes(q);
    }
    return 0;
}

