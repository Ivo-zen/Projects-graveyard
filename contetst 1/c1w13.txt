#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    int wave = 1;
    int count = 0;

    for (int i = 1; i <= N; ++i) {
        std::cout << i << " ";

        ++count;
        if (count == wave) {
            std::cout << std::endl;
            count = 0;
            wave = wave == 1 ? 3 : wave - 1;
        }
    }

    return 0;
}
