#include <iostream>
#include <string>

std::string generate_pattern(int n) {
    std::string pattern = "";
    for (int i = 0; i < n; ++i) {
        pattern += std::string(n - i - 1, ' ');
        for (int j = 0; j <= i; ++j) {
            pattern += std::to_string(j);
        }
        pattern += std::string(i, std::to_string(i).front());
        pattern += '\n';
    }
    return pattern;
}

int main() {
    int num;
    std::cout << "Enter Number: ";
    std::cin >> num;

    int lines = (num % 5 == 0) ? num : num % 5 + 5;
    std::cout << generate_pattern(lines);

    return 0;
}
