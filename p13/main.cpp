#include <iostream>

int main() {
	// 10x10 hollow square
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col)
			std::cout << (row == 0 || row == 9 || col == 0 || col == 9 ? '*' : ' ');
		std::cout << '\n';
	}
	std::cout << '\n';

	// 10x10 square with a 4x4 empty center
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col) {
			const bool center = row >= 3 && row <= 6 && col >= 3 && col <= 6;
			std::cout << (center ? ' ' : '*');
		}
		std::cout << '\n';
	}
	std::cout << '\n';

	// 10-column by 5-row hollow isosceles triangle
	for (int row = 0; row < 5; ++row) {
		const int stars = 2 * row + 1;
		for (int space = 0; space < (10 - stars) / 2; ++space) std::cout << ' ';
		for (int col = 0; col < stars; ++col)
			std::cout << (row == 4 || col == 0 || col == stars - 1 ? '*' : ' ');
		std::cout << '\n';
	}
	std::cout << '\n';

	// Inverted hollow (anti-isosceles) triangle
	for (int row = 4; row >= 0; --row) {
		const int stars = 2 * row + 1;
		for (int space = 0; space < (10 - stars) / 2; ++space) std::cout << ' ';
		for (int col = 0; col < stars; ++col)
			std::cout << (row == 4 || col == 0 || col == stars - 1 ? '*' : ' ');
		std::cout << '\n';
	}
	std::cout << '\n';

	// 10x10 X
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col)
			std::cout << (row == col || row + col == 9 ? '*' : ' ');
		std::cout << '\n';
	}

	return 0;
}
