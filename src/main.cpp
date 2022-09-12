#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;
	auto s = string{};
	cin >> s;

	cout << s.substr(n - 5, 5);

	return 0;
}