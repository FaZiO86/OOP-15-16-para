#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <string>

 using namespace std;

 class Vehicle {
 public:
	 Vehicle() {}
	 void SetName(string name) {
		 Name = name;
	 }
	 const string getName() {
		 return Name;
	 }
	 void printName() {
		 cout << getName() << endl;
	 }

 private:
	 string Name;
 };

 class Motorized : virtual public Vehicle {
 public:
	 Motorized(){}
	 
	 void setSound(string sound) {
		 Sound = sound;
	 }
	 const string getSound() {
		 return Sound;
	 }
	 void printSound() {
		 cout << getSound() << endl;
	 }
	 
 private:
	 string Sound;
 };

 class Muscular : virtual public Vehicle {
 public:
	 Muscular(){}
	 void setSpeed(int speed) {
		 Speed = speed;
}
	 const int getSpeed() {
		 return Speed;
	 }
	 void printSpeed() {
		 cout << getSpeed() << "��/�" << endl;
	 }
 private:
	 int Speed;
 };

 class Electric : public Motorized {
 public:
	 Electric(){}
	 void SetAction(bool action) {
		 Action = action;
	 }
	 const bool getAction() {
		 return Action;
	 }
	 void printAction() {
		 if (Action) {
			 cout << "������������ �������� ����!" << endl;
		 }
		 else{
			 cout << "������������ �������� �� ����!" << endl;
		 }
	 }

 private:
	 bool Action;

 };

 class Dvs : public Motorized {
 public:
	 Dvs(){}
	 void setPower(double power) {
		 Power = power;
	 }
	 const double getPower() {
		 return Power;
	 }
	 void printPower() {
		 cout << getPower() << "�/c" << endl;
	 }
 private:
	 double Power;
 };

 class Bike : public Muscular {
 public:
	 Bike(){}
	 void setFrameType(string frameType) {
		 FrameType = frameType;
	 }
	 const string getFrameType() {
		 return FrameType;
	 }
	 void printFrameType() {
		 cout << getFrameType() << endl;
	 }
 private:
	 string FrameType;
 };

 class Scate : public Muscular {
 public:
	 Scate(){}
	 void setSkateLength(int skateLength) {
		 SkateLength = skateLength;
	 }
	 const int getSkateLength() {
		 return SkateLength;
	 }
	 void printSkateLength() {
		 cout << getSkateLength() << "��" << endl;
	 }
 private:
	 int SkateLength;
 };

 class Electrobike : public Electric, public Bike {
 public:
	 Electrobike(){}
	 void setSpecifications(string specifications) {
		 Specifications = specifications;
	 }
	 const string getSpecifications() {
		 return Specifications;
	 }
	 void printSpecifications() {
		 cout << "�������������� ������������:\n";
		 cout << "������������: " << getName() << endl;
		 cout << "����: " << getSound() << endl;
		 cout << "��������: "; printAction();
		 cout << "��������: " << getSpeed() << endl;
		 cout << "��� ����: " << getFrameType() << endl;
	 }
	
 private:
	 string Specifications;
 };
 
										//���������, ������������ ������! ������ � ��������� ������������ ���� � ������ ������ � �������� ������ Vehicle?

 int main() {
	 setlocale(LC_ALL, "ru");

	 Vehicle veh;
	 Motorized moto;
	 Muscular mus;
	 Electric el;
	 Dvs dvs;
	 Bike bik;
	 Scate sct;
	 Electrobike elB;


	 elB.SetName("��������");
	 elB.setSound("������");
	 elB.setSpeed(40);
	 elB.SetAction(true);
	 dvs.setPower(230.5);
	 elB.setFrameType("����������");
	 sct.setSkateLength(60);


	 elB.printSpecifications();


 }