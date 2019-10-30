#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string string_ = "", token, line;
	stringstream iss;
	vector<string> v;
	fstream file;
	file.open("final.txt");

	if (file) {
		while (getline(file, line)) {
			iss << line;
			while (getline(iss, token, ' '))
				string_ += token;
			iss.clear();
			iss << string_;
			string_ = "";
			token = "";
			while (getline(iss, token, '\n'))
				string_ += token;
			if(string_ != "")
				v.push_back(string_);
			string_ = "";
			iss.clear();
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}