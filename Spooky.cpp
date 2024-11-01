#include<iostream>
using namespace std;
void HITHERE();
void Boo();
void halloween();
int main() {

	halloween();
	HITHERE();
	Boo();


}
void halloween() {
	int answer;
	cout << ("how was your halloween") << endl;
	cin >> answer;
	if (answer < 5) {
		cout << "sorry it wasn't great" << endl;
	}
	else {
		cout << "Glad you had a good halloween" << endl;
	}
}
void HITHERE() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void Boo() {
	string choice = " ";
	while (choice != "Boo") {
		cout << "Type Boo to Quit" << endl;
		cin >> choice;
		if (choice == "Boo") {
			cout << " AHHHHHHHHHH";
		}
	}
}