#include <iostream>
#include <vector>

int main()
{
	size_t count, i = 1;
	size_t x;
	std::vector<int> guest, permutation, seats;
	std::cin >> count;
	while (guest.size() < count)
	{
		std::cin >> x;
		guest.push_back(x);
		seats.push_back(i++);
	}
	permutation = guest;
	for (size_t i = 0; i < guest.size(); ++i)
	{
		permutation[guest[i] - 1] = seats[i];
	}
	for (int elem : permutation)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}