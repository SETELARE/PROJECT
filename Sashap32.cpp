//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;

//void main() {
//	setlocale(LC_ALL, "");
//	//string line;
//	//cin >> line;
//	//cout << line;
//	char line[100] = "hello";
//	gets_s(line); //получение строки из консоли
//	cout << strchr(line, 'e'); //определение длины строки
//	if(strchr(line, 'e')) cout << "Нашел"; //поиску элемента, srtstr - поиск подстроки.
//	else cout << "Не нашел";
//}

//void main() {
//	int const n = 15;
//	char line1[n];
//	gets_s(line1);
//	cout << "Занято: " << strlen(line1) << "Свободно: " << n - strlen(line1);

//---------------------------------------------
	//int** arr = new int* [5];
	//for (int i = 0; i < 5; i++) {
	//	arr[i] = new int[5];
	//}

	//for (int i = 0; i < 5; i++) {
	//	delete[] arr[i];
	//}
	//delete[]arr;
//---------------------------------------------
	//srand(time(NULL));
	//int n = 5, m = 5;
	//int** arr = new int* [n];
	//for (int i = 0; i < n; i++) {
	//	arr[i] = new int[m];
	//}
	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < m; j++) {
	//		arr[i][j] = rand() % 10;
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < n; i++) {
	//	bool flag = false;
	//	for (int j = 0; j < m; j++) {
	//		if (arr[i][j] == 0) {
	//			flag = true;
	//		}
	//	}
	//	if (flag) {
	//		for (int h = i; h < n - 1; h++) {
	//			for (int j = 0; j < m; j++) {
	//				int temp = arr[h + 1][j];
	//				arr[h][j] = temp;
	//			}
	//		}
	//		delete[] arr[n - 1];
	//		n--;
	//		i--;
	//	}
	//}
	//cout << endl;
	//for (int i = 0; i < n; i++) {
	//	delete[] arr[i];
	//}
	//delete[]arr;
	//---------------------------------------------}

//enum Season {summer,automn,winter,spring};
//
//void func(int a) {
//	cout << a;
//}
//     //хвостовой возращаемый тип даных указвает, какой тип возвращаемого значения будет у функции.
//auto func1(double a)->int {
//	return a;
//}
//int main() {
//	cout << func1(10.5);
//	void(*ptr)(int);
//	ptr = func;
//	ptr(15);
//
//	//тип данных auto - тип данных, который автоматически определяет тип данных в зависимости от литерала(значение переменной).
//	//decltype - берет тип данных с одной переменной и на его основе создает новую переменную.
//	auto num = 15.15;
//	decltype (num) num1;
//
//	typedef decltype (num1) doublek;
//	doublek num2;
//	//typedef - команда, которая создает псевдоним для типа данных.
//}

//---------------------------------------------
//struct date {
//	int day;
//	int mounth;
//	int year;
//};
//
//void main() {
//	srand(time(NULL));
//	date myBirtday = { 11,8,2007 };
//	cout << myBirtday.day << '.';
//	cout << myBirtday.mounth << '.';
//	cout << myBirtday.year ;
//}


//struct animal {
//	string nickname;
//	string breed;
//	string clas;
//};
//int num_animal = 0;
//void add_animal(animal* arr) {
//	string nickname;
//	cin >> nickname;
//	string breed;
//	cin >> breed;
//	string clas;
//	cin >> clas;
//	arr[num_animal] = { nickname,breed,clas };
//	num_animal++;
//}
//
//void main() {
//	animal zoo[100];
//	switch () {
//		
//	}
//}

//-------------------------------------------------------------------------------01.10.2024----------------------------------------------------------------------------
//Битовые операции 
//побитовые операторы:
//побитовый сдвиг влево << (x<<y) все биты х смещаются влево на y бит.
//побитовый сдвиг вправо >> (x>>y) все биты х смещаются вправо на y бит.
//побитовое НЕ ~ (~х) Все биты х меняются на противоположные.(инверсия битов)
//побитовое И & (x&y) Над каждым битом х и соответсвующим битом в y выполняется операция логического И (умножение)
//побитовое ИЛИ | (x|y) Над каждым битом в х и соответсвующим битом в y выполняется операция логического ИЛИ (логическое сложение)
//исключающшее ИЛИ (XOR) ^ (x^y) над каждым битом в х и соответсвующим битом в y выполняется операция логического исключающего ИЛИ 

//#include <iostream>
//using namespace std;

//int main() {
//	unsigned int x = 5; //(unsigned - число без знака)
//	unsigned int y = 10;
//	/*x = x >> 1;*/ // 0100 << 1000 >> 0010
//	/*x = ~x;*/
//	/*x = x & y;*/
//	/*x = x | y;*/
//	x = x ^ y;
//	cout << x;
//}

//void Fch(unsigned int x, unsigned int y) {
//	cin >> x;
//	cin >> y;
//}
//void Fsdvig(unsigned int x, unsigned int y) {
//	x = x << y;
//}
//
//int main() {
//
//	cout << Fsdvig(x, y);
//}
//ОБЪЕДИНЕНИЯ UNION
//union - технология экономии памяти, использование объединения переменных позволит создавать оптимальную по использованию памяти программу. (уменьшение объема данных)
//void main() {
//	union {
//		short a1;
//		int a2;
//		long a3;
//	} myUnion;
//	myUnion.a1 = 10;
//	cout << myUnion.a1 << endl;
//	myUnion.a3 = 20;
//	cout << myUnion.a3 << endl; //& ссылка    !!!(писать в функции, чтобы потом вызывать в мейне)!!!
//	cout << myUnion.a1 << endl;
//}
//void Fch(unsigned int& x, unsigned int& y, unsigned int& z) {
//	cin >> x;
//	cin >> y;
//	cin >> z;
//}
//void Fsdvig(unsigned int x, unsigned int y, unsigned int z) {
//	if (z == 0) {
//		z = x << y;
//	}
//	else {
//		z = x >> y;
//	}
//	cout << z;
//}
//
//int main() {
//	unsigned int x, y, z;
//	Fch(x, y, z);
//	Fsdvig(x, y, z);
//}
//----------------БИТОВЫЕ ПОЛЯ--------------
//struct statusField {
//	unsigned int JS : 1;
//	unsigned int PHP : 1;
//	unsigned int Python : 1; //:1 - 1 бит информации.
//} state ; //занимает 32 бита - 4 байта
//
//int main() {
//	state.JS = 3;
//	cout << state.JS; //кол-во битов = степени 2. число 50 степень 6
//}
//
//int main() {
//	struct DateTime {
//		unsigned int day : 5;
//		unsigned int month : 4;
//		unsigned int year : 11;
//		unsigned int hour : 5;
//		unsigned int minute : 6;
//		unsigned int second : 6;
//	};
//	DateTime d;
//	int i;
//	cout << "Enter month: ";
//	cin >> i;
//	d.month = i;
//	cout << "Enter day: ";
//	cin >> i;
//	d.day = i;
//	cout << "Enter year: ";
//	cin >> i;
//	d.year = i;
//	cout << "Enter hour: ";
//	cin >> i;
//	d.hour = i;
//	cout << "Enter minute: ";
//	cin >> i;
//	d.minute = i;
//	cout << "Enter second: ";
//	cin >> i;
//	d.second = i;
//	cout << d.day << "." << d.month << "." << d.year << " " << d.hour << ":" << d.minute << ":" << d.second;
//}
/*
//-------------------------------------------------------------------------------03.10.2024----------------------------------------------------------------------------
//--------РАБОТА С ФАЙЛАМИ--------
// ФАЙЛ - именованная область, расположенная во внешней памяти и обладает следующими атрибутами:
//-имя(позволяет программам назодить файл, при необходимости может работать с несколькими файлами).
//-длина файла может быть ограничена объемом диска.
// ПОТОК - последовательность байов, независящая от конкретного устройства, с которым осущетсвляется взаимодействие.
// тексовый поток - последовательность символов, которая может состоять из одной или нескольких строк текста.
// бинарный(двоичный поток) - последовательность байтов произвольных данных, которые всегда однозначно соответсвует тем байтам информации, которое хранится на внешнем устройстве.

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#pragma warning(disable : 4996)

//абсолютный путь - путь, который начинается с корневого каталога.(полный путь от диска до файла)
//относительный путь - путь, который указывается относительно вашего рабочего файла.(только название фалйа)
/*int main() {
	FILE* file1;
	fopen_s(&file1, "test.txt", "w");

	/*if ((file1 = fopen("test.txt", "r")) == NULL)
		cout << "File not found";
	else cout << file1;
	cout << file1;*/
//}/
//создание указателя на структуру файл для взаимодействия с будующими файлами.
//FILE* myfile;
//myfile = fopen("filename", "режим открытия");

//------------------------------------------
/*r Открытие текстового файла только для
чтения. Если такого файла не существует, то
будет выведена ошибка

w Открытие текстового файла только для
записи. Если такой файл не существует, то он
будет создан. Иначе его содержимое будет
удалено и файл будет перезаписан.

a Открытие текстового файла для добавления.
Если такой файл не существует, то он будет
создан. Иначе данные из него будут удалены

r+ Открытие текстового файла для чтения и
записи без возможности изменения размера
файла. Если такого файла не существует, то
будет выведена ошибка.

w+ Открытие текстового файла для чтения и
записи. Если такой файл не существует, то он
будет создан. Иначе его содержимое будет
удалено и файл будет перезаписан.


a+ Открытие текстового файла для чтения и записи. Если такой файл не существует, то он будет
создан. Иначе данные из него будут удалены

rb Открытие двоичного файла для чтения. Если
такого файла не существует, то будет выведена ошибка.

wb Открытие двоичного файла для записи. Если
такой файл не существует, то он будет создан. Иначе его содержимое будет удалено и
файл будет перезаписан.

b Открытие двоичного файла для добавления.
Если такой файл не существует, то он будет
создан. Иначе данные из него будут удалены

r+b
или
b+
Открытие двоичного файла для чтения и
записи без возможности изменения размера
файла. Если такого файла не существует, то
будет выведена ошибка.

w+b
или
wb+
Открытие двоичного файла для чтения и
записи. Если такой файл не существует, то он
будет создан. Иначе его содержимое будет
удалено и файл будет перезаписан.

a+b
или
ab+
Открытие двоичного файла для чтения и
записи. Если такой файл не существует, то он
будет создан. Иначе его содержимое будет
удалено*/
//------------------------------------------

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#pragma warning(disable : 4996)
//
//*int main() {
//	FILE* out;
//	const int n = 5;
//	int arr[n];
//	const char* path = "test.txt";
//	for (int i = 0; i < 5; i++) {
//		arr[i] = i + 5; 
//	}
//	if (fopen_s(&out, path, "w") != NULL)
//		cout << "File not found";
//	else {
//		for (int i = 0; i < n; i++) {
//			fprintf(out, "%d", arr[i]);
//			fprintf(out, "\n");
//		}
//		if (fclose(out) == EOF)
//			cout << "File not closed";
//		else cout << "File closed";
//	}
//}*/
//
//fprintf() - запись в файл
//fscanf() - чтение из файла
//%d - запись чисел   
// \0 - символ уонца строки
//feof() - указатель на последний элемент строки

//int main() {
//	int a;
//	FILE* in;
//	const char* path = "test.txt";
//	if (fopen_s(&in, path, "r") != NULL)
//		cout << "File not found";
//	else {
//		while (!feof(in)) {
//			fscanf(in, "%d", &a);
//			cout << a << " ";
//		}
//	}
//}
/////*struct Item {
//	char title[20];
//	unsigned int id;
//	float price;
//};
//
//int main() {
//	int i = 0;
//	FILE* in;
//	Item myShop[10];
//	const char* path = "test.txt";
//	if (fopen_s(&in, path, "r") != NULL)
//		cout << "File not found";
//	else
//	{
//		while (!feof(in)) {
//			fflush(in);
//			fscanf_s(in, "%s", myShop[i].title, sizeof(myShop[i].title));
//			fscanf_s(in, "%u", &myShop[i].id, sizeof(myShop[i].id));
//			fscanf_s(in, "%f", &myShop[i].price, sizeof(myShop[i].price));
//			cout << myShop[i].title << endl
//				<< myShop[i].id << endl
//				<< myShop[i].price << endl;
//			i++;
//		}
//	}
//}*/
// //flush() - очистка буфера обмена
//
////int fgetc(in) - получение даных из файла 
////int fputc(c, in) - отправка в файл
//
//int main() {
//	int c;
//	int len = 0, cnt = 0;
//	FILE* in;
//	if (fopen_s(&in, "test.txt", "r") != NULL)
//		cout << "File not found";
//	else {
//		while (!feof(in)) {
//			c = fgetc(in);
//			if (c == '\n') {
//				cnt++;
//				cout << "Stroke " << cnt << " Dlina " << len << endl;
//				len = 0;
//			}
//			else len++;
//		}
//		if (len) {
//			cnt++;
//			cout << "Stroke " << cnt << " Dlina " << len << endl;
//		}
//	}
//}*/

//-------------------------------------10.10.2024---------------------------
