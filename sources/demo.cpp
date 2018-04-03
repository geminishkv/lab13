#include <print.hpp>
#include <cstdlib>

int main(int argc, char** argv) {
std::string text;
std::string log_path = std::getenv("LOH_PATH");
while(std::cin >> text) {
print(text, out);
out << std::endl;
}
}
