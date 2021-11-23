#include <iostream>

using namespace std;

#include "monitor.hpp"
#include "screen.hpp"		// ne mora ali sto da ne

#define kraj 13

void printScreen(Screen s){
	cout << "-- Screen --" << endl;
	cout << "Brightness: " << s.getBrightness() << endl;
	cout << "Screen state: " << (s.getState() == ssOFF ? "OFF" : "ON") << endl;
}

void printMonitor(const Monitor &m) {
	cout << "Monitor: " << endl;
	cout << "\tMonitor state: ";

	switch(m.getMonitorState()) {
		case sOUT:
			cout << "sOUT";
			break;
		case sON:
			cout << "sON";
			break;
		case sOFF:
			cout << "sOFF";
			break;
		case sSTANDBY:
			cout << "sSTANDBY";
			break;
		case sTEST:
			cout << "sTEST";
			break;
		default:
			cout << "nepoznato";
			break;
	}
	cout << endl;

	cout << "\tBrightness: " << m.getBrightness() << endl;
	cout << "\tScreen state: " << (m.getScreenState() == ssON ? "ON" : "OFF");		// mora u zagradi uslov
	cout << endl;
}

int meni(){

    cout << endl;
    cout << "1. Screen - Ukljuci" << endl;
    cout << "2. Screen - Iskljuci" << endl;
    cout << "3. Screen - Povecaj brightness" << endl;
    cout << "4. Screen - Smanji brightness" << endl;
    cout << "5. Monitor - Ukljuci" << endl;
    cout << "6. Monitor - Iskljuci" << endl;
    cout << "7. Monitor - Pokvari" << endl;
    cout << "8. Monitor - Popravi" << endl;
    cout << "9. Monitor - Prebaci u test" << endl;
    cout << "10. Monitor - Prebaci u standby" << endl;
    cout << "11. Monitor - Povecaj brightness" << endl;
    cout << "12. Monitor - Smanji brightness" << endl;
    cout << "13. Kraj" << endl;
    cout << "Izaberite operaciju:";
    int n;
    cin >> n;
    cout << endl << endl;
    return n;
}

// ......................................................................... //

int main()
{
	Screen s;
	Monitor m;

	int n;
	do {
		n = meni();

		switch(n) {
			case 1: s.setState(ssON); break;
            case 2: s.setState(ssOFF); break;
            case 3: s.incB(); break;
            case 4: s.decB(); break;
            case 5: m.turnOn(); break;
            case 6: m.turnOff(); break;
            case 7: m.turnOut(); break;
            case 8: m.repair(); break;
            case 9: m.turnTest(); break;
            case 10: m.turnStandBy(); break;
            case 11: m.incB(); break;
            case 12: m.decB(); break;
            case 13: cout << "Kraj"; break;
            default: cout << "Nepostojeca operacija" << endl;
		}
		printScreen(s);
		printMonitor(m);

	} while (n != kraj);

    return 0;
}
