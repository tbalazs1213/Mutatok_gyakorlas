#include <iostream>
#include <ctime>
#define MIN 0
#define MAX 10

using namespace std;

struct koordinata 
{
  int x,y,z;
};

int main() 
{
  srand(time(NULL));
  koordinata tomb[10];
  for(int i=0; i<10; i++) 
  {
	(tomb + i)->x = MIN + rand()%(MAX-MIN+1);
	(tomb + i)->y = MIN + rand()%(MAX-MIN+1);
	(tomb + i)->z = MIN + rand()%(MAX-MIN+1);
	cout << (tomb + i)->x << '\t' << (tomb + i)->y << '\t' << (tomb + i)->z << '\n';
  }
} 
