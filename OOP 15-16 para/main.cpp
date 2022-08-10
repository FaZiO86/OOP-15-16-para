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
		 cout << getSpeed() << "Км/ч" << endl;
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
			 cout << "Транспортное средство едет!" << endl;
		 }
		 else{
			 cout << "Транспортное средство не едет!" << endl;
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
		 cout << getPower() << "Л/c" << endl;
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
		 cout << getSkateLength() << "См" << endl;
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
		 cout << "Характеристики Электробайка:\n";
		 cout << "Наименование: " << getName() << endl;
		 cout << "Звук: " << getSound() << endl;
		 cout << "Действие: "; printAction();
		 cout << "Скорость: " << getSpeed() << endl;
		 cout << "Тип рамы: " << getFrameType() << endl;
	 }
	
 private:
	 string Specifications;
 };
 
										//Владислав, единственный вопрос! Почему в диаграмме показываются поля и методы только у базового класса Vehicle?

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


	 elB.SetName("Мерседес");
	 elB.setSound("Бррррр");
	 elB.setSpeed(40);
	 elB.SetAction(true);
	 dvs.setPower(230.5);
	 elB.setFrameType("Двухподвес");
	 sct.setSkateLength(60);


	 elB.printSpecifications();


 }