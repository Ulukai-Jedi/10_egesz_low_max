//A program olvasson be 10 egész számot, majd írassa ki a legkisebbet és a legnagyobbat!
#include <iostream>
#include <vector>

template <class T>
void kiir(const std::vector<T>& tomb) {
	for (int i = 0; i < tomb.size(); i++) {
		std::cout << tomb[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::vector<int> szamok;
	int a = 0;

	for (int i = 0; i < 10; i++) {
		std::cout << "Kerek egy szamot a tombbe: " << std::endl;
		std::cin >> a;
		szamok.push_back(a);
	}
	std::cout << "A tomb elemei: " << std::endl;
	kiir(szamok);

	int maximum = -21474836;

	for (int i = 0; i < szamok.size(); i++) {
		if (szamok[i] > maximum) {
			maximum = szamok[i];
		}
	}
	std::cout <<"A tomb elemeinek maximuma: "<< maximum << std::endl;

	int minimum = 21474836;

	for (int i = 0; i < szamok.size(); i++) {
		if (minimum > szamok[i]) {
			minimum = szamok[i];
		}
	}
	std::cout << "A tomb elemeinek minimuma: " << minimum << std::endl;


	/*eljárás maximumkiválasztás1
		MAXINDEX = 0
		ciklus I = 1 - tõl(N – 1) - ig
		ha A[I] > A[MAXINDEX], akkor
		MAXINDEX = I
		elágazás vége
		ki : MAXINDEX
		eljárás vége*/
	
}