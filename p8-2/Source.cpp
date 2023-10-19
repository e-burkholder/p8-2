#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	cout<<countWords("Hello it is I.")<<endl;
	cout<<countWords("one")<<endl;
	cout<<countWords("one 2 three    4 five");

	return 0;
}

int countWords(string str) {
	int characters = str.length();
	int space = 0;
	for (int i = 0; i < characters; i++) {
		str.substr(i, 1);
		if (str.substr(i, 1) == " ") {
			space++;
			while (true) {
				i++;
				break;
			}
		}
	}
	return space;

}
