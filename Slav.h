#pragma once
#include <string>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <time.h>

using namespace std;

enum sex{male,female};

class Slav
{
private:
	static void init();

	static std::vector <string> names;
	static int _counter;

	string _name;
	int _id;

public:
	Slav();

	static int counter() { return _counter; }
	
	string name() { return _name; }
	int id() { return _id; }

	sex get();
	string description();
};
