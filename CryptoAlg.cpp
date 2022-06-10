//////// Vigenère Cipher ////////

#include <iostream>
#include <string>
using namespace std;

void cipherVig(string text, string key) {

	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x' , 'y', 'z' };
	int t_numb, k_numb;
	string cipher;

	if (key.length() < text.length()) {
		for (int i = 0; ; i++) {

			key.push_back(key[i]);

			if (key.length() == text.length()) {
				break;
			}

		}
	}

	for (int i = 0; i < text.length(); i++) {

		for (int j = 0; j < 26; j++) {

			if (text[i] == alphabet[j]) {
				t_numb = j;
			}

		}

		for (int j = 0; j < 26; j++) {

			if (key[i] == alphabet[j]) {
				k_numb = j;
			}

		}

		char x = (t_numb + k_numb) % 26;

		for (int i = 0; i < 26; i++) {

			if (x == i) {
				cipher += alphabet[i];
			}

		}

	}
	
	cout << "\nCiphertext: " << cipher << endl << endl << endl;
}

int main() {

	string text, key;

	while (true) {

		cout << "Enter text: ";
		cin >> text;

		cout << "Enter key: ";
		cin >> key;

		cipherVig(text, key);

	}

	return 0;
}