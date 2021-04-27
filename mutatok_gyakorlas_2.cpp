#include <iostream>

using namespace std;

struct koordinata
{
  int x,y,z;
};

struct haromszog
{
  int a,b,c;
};

void bekeres(haromszog* h)
{
  cout << "Haromszog elso oldala: ";
  cin >> h->a;
  cout << "Haromszog masodik oldala: ";
  cin >> h->b;
  cout << "Haromszog harmadik oldala: ";
  cin >> h->c;
}

void kiiras(haromszog* h)
{
  cout << "Elso oldal: " << h->a << endl;
  cout << "Masodik oldal: " << h->b << endl;
  cout << "Harmadik oldal: " << h->c << endl;
}

#define SIZE 2

int main() 
{
	haromszog* h = new haromszog[SIZE];
	for(int i=0; i<SIZE; i++) {
		bekeres(h+i);
	}
  for (int i=0; i<SIZE; i++)
  {
    kiiras(h+i);
  }
	delete[] h;
  return 0;
}