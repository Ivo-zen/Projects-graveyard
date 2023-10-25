#include <algorithm>
#include <iostream>
#include <tuple>

#include <algorithm>

std::tuple<int, int> reduce(int m, int n) {
    int gcd = std::gcd(m, n);
    return std::make_tuple(m / gcd, n / gcd);
}

std::tuple<int, int, int> find_lcm(int a, int b) {
    int lcm = a * b / std::gcd(a, b);
    return std::make_tuple(lcm, lcm / a, lcm / b);
}

int main() {
    int m1, n1, m2, n2;
    char _;
    std::cin >> m1 >> _ >> n1
             >> m2 >> _ >> n2;
    std::tie(m1, n1) = reduce(m1, n1);
    std::tie(m2, n2) = reduce(m2, n2);

    auto[lcm, c1, c2] = find_lcm(n1, n2);
    auto[m, n] = reduce(m1 * c1 + m2 * c2, lcm);

    std::cout << m << '/' << n << std::endl;
}
