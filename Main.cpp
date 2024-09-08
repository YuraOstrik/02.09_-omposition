#include<iostream>
using namespace std;



class CUM {
	string Name;
	int fre;
public:
	CUM();
	CUM(const char* N, int f) {
		Name = N;
		fre = f;
	}
	CUM(CUM& obj) {
		Name = obj.Name;
		fre = obj.fre;
	}
	void Show() {
		cout << Name << " --- " << fre << endl;
	}
};

class RAM {
	int size;
public:
	RAM();
	RAM(int s) {
		size = s;
	}
	RAM(RAM& obj) {
		size = obj.size;
	}
	void Show() {
		cout << size << endl;
	}
};

class Storage {
	int size;
public:
	Storage();
	Storage(int s) {
		size = s;
	}
	Storage(Storage& obj) {
		size = obj.size;
	}
	void Show() {
		cout << size << endl;
	}
};


class GPU {
	int memory;
public:
	GPU();
	GPU(int m) {
		memory = m;
	}
	GPU(GPU& obj) {
		memory = obj.memory;
	}
	void Show() {
		cout << memory << endl;
	}
};

class Display {
	int size;
public:
	Display();
	Display(int s) {
		size = s;
	}
	Display(Display& obj) {
		size = obj.size;
	}
	void Show() {
		cout << size << endl;
	}
};

class Battery {
	int capacity;
public:
	Battery();
	Battery(int c) {
		capacity = c;
	}
	Battery(Battery& obj) {
		capacity = obj.capacity;
	}
	void Show() {
		cout << capacity << endl;
	}
};

class Keyboard {
	bool sign;
public:
	Keyboard();
	Keyboard(bool c) {
		sign = c;
	}
	Keyboard(Keyboard& obj) {
		sign = obj.sign;
	}
	void Show() {
		cout << sign << endl; // +-
	}
};


class Notebook {
public:
	CUM a;
	RAM b;
	Storage c;
	GPU d;
	Display* obj1;
	Battery* obj2;
	Keyboard* obj3;
	int year;
public:
	Notebook(CUM q, RAM w, Storage e, GPU r, Display* z, Battery* x, Keyboard* c, int y) :a(q), b(w), c(e), d(r), obj1(z), obj2(x), obj3(c)
	{
		year = y;
	}
	void SetDisplay(Display* c)
	{
		obj1 = c;
	}
	void SetBattery(Battery* c)
	{
		obj2 = c;
	}
	void SetKeyboard(Keyboard* c)
	{
		obj3 = c;
	}

	void Show()
	{
		a.Show();
		b.Show();
		c.Show();
		d.Show();
		obj1->Show();
		obj2->Show();
		obj3->Show();
		cout << year << endl;
	}
	~Notebook() {
		cout << "Destruct\n";
	}
};


int main() 
{ 
	CUM cum("Intel", 3600);
	RAM ram(16);
	Storage storage(500);
	GPU gpu(6);
	Display display(15);
	Battery battery(5000);
	Keyboard keyboard(false);

	Notebook* ptr = new Notebook(cum, ram, storage, gpu, &display, &battery, &keyboard, 2023);
	ptr->Show();

}











