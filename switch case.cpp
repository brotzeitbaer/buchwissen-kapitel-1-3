#include <iostream>

using namespace std;

int main()
{
	
	char auswahl;
	
	cout << "(s)piel\n(o)ptionen\n(m)itwirkende\n(b)eenden\n\n";
	cin  >> auswahl;
	
	switch (auswahl)
	{
	case ('s'): //die runden klammern und die gschweiften klammern sind hier nicht n�tig aber es dient der �bersicht.
	case ('S'):
	{
	cout << "\nspiel\n";
	}
	break;
	
	 /* break bewirkt, dass wenn in diesem fall case s/S erf�llt ist, nicht alle darunter stehenden cases
	ausgef�hrt werden sondern bis zum ende von switch gesprungen wird.*/
	
	case ('o'):
	case ('O'):
	{
	cout << "\noptionen\n";
	}
	break;
	
	case ('m'):
	case ('M'):
	{
	cout << "\nmitwirkende\n";	
	}
	break;
	
	case ('b'):
	case ('B'):
	{
	cout << "\nbeenden\n";
	}
	break;
	
	default:
	{
	cout << "\nungueltige eingabe\n";
	}
	break;
	
	}
	return 0;
}
