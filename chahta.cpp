﻿#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class chahta {
public:
	int score = 0;
	int dobitog = 0;
	int dobitos = 0;
	int dobitob = 0;
	void dob1(int* goldvs){
		int cut = rand() % 10;
		dobitog += cut;
		*goldvs -= cut;
	}
	void dob2(int* silvervs) {
		int cut = rand() % 10;
		dobitos += cut;
		*silvervs -= cut;
	}
	void dob3(int* bronzevs) {
		int cut = rand() % 10;
		dobitob += cut;
		*bronzevs -= cut;
	}
	void farm1(int* goldvs) {
		int cut = *goldvs;
		dobitog += cut;
		*goldvs -= cut;
	}
	void farm2(int* silvervs) {
		int cut = *silvervs;
		dobitos += cut;
		*silvervs -= cut;
	}
	void farm3(int* bronzevs) {
		int cut = *bronzevs;
		dobitob += cut;
		*bronzevs -= cut;
	}
};



int main(){
	srand(time(0));
	setlocale(LC_ALL,"rus");
	string name;
	int col = 0;
	int goldvs = 0;int silvervs = 0;int bronzevs = 0;
	int r;int schet = 0;int max = 0;int adr=0;
	cout << "Введите бренд шахт (only engish)" << endl;
	cin >> name;
	cout << "Введите кол-во шахт -B-e-t-a- " << endl;
	cin >> col;
	cout << "Введите кол-во ресурсов добычи золота, серебра и бронзы" << endl;
	cin >> goldvs >> silvervs >> bronzevs;
	chahta *supream = new chahta [col];
	system("cls");
	while ((goldvs > 0) && (silvervs > 0) && (bronzevs > 0)) {

		if (schet == 5) { schet = 0; }

		if (goldvs < 10) {
			supream[schet].farm1(&goldvs);break;
		}
		if (silvervs < 10) {
			supream[schet].farm2(&silvervs);break;
		}
		if (bronzevs < 10) {
			supream[schet].farm3(&bronzevs);break;
		}



		r = rand() % 10;
		switch (r) {
		
		case 1:supream[schet].dob1(&goldvs);

		case 2:supream[schet].dob2(&silvervs);

		case 3:supream[schet].dob3(&bronzevs);
		}

		schet += 1;
	}
	cout <<"остаток "<<endl<<"Gold "<< goldvs << endl <<"Silver "<< silvervs << endl <<"Bronze "<< bronzevs <<  endl<<"next"<<endl;
	for (int i = 0;i < col;i++) {
		cout<<"Шахта под номером "<< i+1<<endl <<"Добыла золота " <<supream[i].dobitog<<endl<<"Добыла серебра "<<supream[i].dobitos<<endl<<"Добыла бронзы "<<supream[i].dobitob<<endl ;
		supream[i].score = supream[i].score + supream[i].dobitog * 15 + supream[i].dobitos * 10 + supream[i].dobitob * 5;
	}

	for (int i = 0;i < col;i++) {
		if (max < supream[i].score) {
			max = supream[i].score;adr = i;
		}
	}
	cout <<"Победила шахта "<<name<<" под номером: "<< adr+1 <<endl<<"Набрав " << max <<" очков!!!";
	

}
