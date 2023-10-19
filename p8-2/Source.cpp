#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q")
			break;
		cout << "Words: " << countWords(input)<<endl;
	}

	return 0;
}

int countWords(string str) {
	int characters = str.length();
	int space = 1;
	for (int i = 0; i < characters; i++) {
		str.substr(i, 1);
		if (str.substr(i, 1) == " " && str.substr(i - 1, 1) != " ") {
			space++;
		}
	}
	return space;

}
