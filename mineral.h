/*mineral.h
define a mineral class by xinyi zhang
*/

#include <ostream>
#include <cstring>

using namespace std;


class Mineral{

	string name;
	int hardness;

public:

	Mineral();
	Mineral(string nam, int har);
	ostream& operator<<(ostream& out);
	bool operator<(const Mineral& min);
	bool operator>(const Mineral& min);
	bool operator==(const Mineral& min);
	
};

Mineral::Mineral(){
	name="";
	hardness = 0;
}

Mineral::Mineral(string nam, int har){
	name = nam;
	hardness = har;
}

ostream& Mineral::operator<<(ostream& out){
	out<<name<<"H: "<<hardness;
	return out;
}

bool Mineral::operator<(const Mineral& min){
	return (hardness<min.hardness);		
}

bool Mineral::operator>(const Mineral& min){
	return (hardness>min.hardness);		
}

bool Mineral::operator==(const Mineral& min){
	return (hardness==min.hardness);	
}



