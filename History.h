#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class History {
	
private:
	vector <string> operations;
public:
	void add(string operation);
	void show();
	void load();
	void save();
	void clear();
};