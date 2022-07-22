#include <iostream>
#include <windows.h>
using namespace std;


int main() {
	char sonido []="E:\canon.wav";
	cout<<PlaySound((LPCSTR) sonido, NULL, SND_FILENAME | SND_ASYNC );
	system ("pause");
	return 0;
}
