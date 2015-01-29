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
	string get_name();
	string get_name()const;
	int get_hardness();
	int get_hardness()const;
	
	
};


ostream& operator<<(ostream& out, const Mineral& min);
bool operator<(const Mineral& left, const Mineral& right);
bool operator>(const Mineral& left, const Mineral& right);
bool operator==(const Mineral& left, const Mineral& right);

Mineral::Mineral(){
	name="";
	hardness = 0;
}

Mineral::Mineral(string nam, int har){
	name = nam;
	hardness = har;
}

string Mineral::get_name(){
	return name;
}	

string Mineral::get_name()const{
 	return name;
 }

 int Mineral::get_hardness()const{
 	return hardness;
 }

int Mineral::get_hardness(){
	return hardness;
}	

ostream& operator<<(ostream& out, const Mineral& min){
	out<<min.get_name()<<"H: "<<min.get_hardness();
	return out;
}

bool operator<(const Mineral& left, const Mineral& right){
	return (left.get_hardness()<right.get_hardness());		
}

bool operator>(const Mineral& left, const Mineral& right){
	return (left.get_hardness()>right.get_hardness());		
}

bool operator==(const Mineral& left, const Mineral& right){
	return (left.get_hardness()==right.get_hardness());	
}



