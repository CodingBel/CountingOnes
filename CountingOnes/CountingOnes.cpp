// This program is written to count the total number of 
// ones in a given number. 

#include<iostream>

int oneCounter(unsigned int incoming) {
	int Ones = 0;
	unsigned int x = 1;

	while (incoming > 0) {
		x &= incoming;

		if (x == 1)
			Ones++;

		x = 1;
		incoming >>= 1;
	}

	return Ones;
}

int main() {
	std::cout << oneCounter(8) << std::endl;
	return 0;
}

