
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int hat, nose, left_eye, right_eye, left_arm, right_arm, toros, base;
	int total_input;

	cout << "\nHello! do you want to bild a snowman?\n";
	cout << "pleas choos which hat you would like the snowman to wear?\n";
	cout << "\noption 1:\n _===_ \n";
	cout << "\noption 2:\n  ___  \n ..... \n";
	cout << "\noption 3:\n   _   \n  /_\\  \n";
	cout << "\noption 4:\n  ___  \n (_*_) \n";
	cout << "\npleas enter your choice\n";
	cin >> hat;
	if (hat<1||hat>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> hat;
	}
	if (hat<1||hat>4){
		throw;
	}
	total_input= hat;

	cout << "\npleas choos which nose you would like the snowman will be\n";
	cout << "\noption 1: ,\n";
	cout << "\noption 2: .\n";
	cout << "\noption 3: _\n";
	cout << "\noption 4: no nose\n";
	cout << "\npleas enter your choice\n";
	cin >> nose;
	if (nose<1||nose>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> nose;
	}
	if (nose<1||nose>4){
		throw;
	}
	total_input=total_input*10+ nose;


	cout << "\npleas choos which eyes you would like the snowman will be\n";
	cout << "\noption 1: .\n";
	cout << "\noption 2: o\n";
	cout << "\noption 3: O\n";
	cout << "\noption 4: -\n";
	cout << "\npleas enter your choice for left eye\n";
	cin >> left_eye;
	if (left_eye<1||left_eye>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> left_eye;
	}
	if (left_eye<1||left_eye>4){
		throw;
	}
	total_input=total_input*10+ left_eye;
	cout << "\npleas enter your choice for right eye\n";
	cin >> right_eye;
	if (right_eye<1||right_eye>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> right_eye;
	}
	if (right_eye<1||right_eye>4){
		throw;
	}
	total_input=total_input*10+ right_eye;

	cout << "\npleas choos which left arm you would like the snowman will be\n";
	cout << "\noption 1: <\n";
	cout << "\noption 2: \\\n";
	cout << "\noption 3: /\n";
	cout << "\noption 4: no left arm\n";
	cout << "\npleas enter your choice\n";
	cin >> left_arm;
	if (left_arm<1||left_arm>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> left_arm;
	}
	if (left_arm<1||left_arm>4){
		throw;
	}
	total_input=total_input*10+ left_arm;

	cout << "\npleas choos which right arm you would like the snowman will be\n";
	cout << "\noption 1: >\n";
	cout << "\noption 2: /\n";
	cout << "\noption 3: \\\n";
	cout << "\noption 4: no right arm\n";
	cout << "\npleas enter your choice\n";
	cin >> right_arm;
	if (right_arm<1||right_arm>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> right_arm;
	}
	if (right_arm<1||right_arm>4){
		throw;
	}
	total_input=total_input*10+ right_arm;

	cout << "\npleas choos which toros you would like the snowman will be\n";
	cout << "\noption 1: :\n";
	cout << "\noption 2: ] [\n";
	cout << "\noption 3: > <\n";
	cout << "\noption 4: no toros\n";
	cout << "\npleas enter your choice\n";
	cin >> toros;
	if (toros<1||toros>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> toros;
	}
	if (toros<1||toros>4){
		throw;
	}
	total_input=total_input*10+ toros;

	cout << "\npleas choos which base you would like the snowman will be\n";
	cout << "\noption 1: :\n";
	cout << "\noption 2: \" \"\n";
	cout << "\noption 3: ___\n";
	cout << "\noption 4: no base\n";
	cout << "\npleas enter your choice\n";
	cin >> base;
	if (base<1||base>4){
		cout << "\noops! wrong choice.. try again..\n";
		cin >> base;
	}
	if (base<1||base>4){
		throw;
	}
	total_input=total_input*10+ base;


    cout << "\nyour snowman is\n";
	cout << ariel::snowman((long long)total_input) << endl;
    
    return 0;
}
