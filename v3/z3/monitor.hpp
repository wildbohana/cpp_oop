#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED

#include "screen.hpp"

enum MonitorStates {sON, sOFF, sOUT, sTEST, sSTANDBY};

class Monitor {

	private:
		MonitorStates state;
		Screen screen;			// uspostavljamo kompoziciju

	public:
		Monitor() : screen() {
			state = sOFF;
		} 						// sa : screen() postavljamo state na sOFF i brightness na 0

		bool turnOn() {
			if (state == sON || state == sTEST || state == sSTANDBY) {
				state = sON;
				screen.setState(ssON);
				return true;
			}
			return false;
		}

		bool turnOff() {
			if (state == sON || state == sTEST || state == sSTANDBY) {
				state = sOFF;
				screen.setState(ssOFF);
				return true;
			}
			return false;
		}

		bool turnOut() {
			if (state != sOUT) {
				state = sOUT;
				screen.setState(ssOFF);
				return true;
			}
			return false;
		}

		bool turnTest() {
			if (state == sON) {
				state = sTEST;
				screen.setState(ssON);		// nije neophodno
				return true;
			}
			return false;
		}

		bool turnStandBy() {
			if (state == sON) {
				state = sSTANDBY;
				screen.setState(ssOFF);
				return true;
			}
			return false;
		}

		bool repair() {
			if (state == sOUT) {
				state = sOFF;
				screen.setState(ssOFF);		// nije neophodno
				return true;
			}
			return false;
		}

		bool incB() {
			if (state == sON || state == sTEST) {
				return screen.incB();
			}
			return false;
		}

		bool decB() {
			if (state == sON || state == sTEST) {
				return screen.decB();
			}
			return false;
		}

		ScreenStates getScreenState() const {
			return screen.getState();
		}

		MonitorStates getMonitorState() const {
			return state;
		}

		int getBrightness() const {
			return screen.getBrightness();
		}

		Screen getScreen() const {
			return screen;
		}
};

#endif // MONITOR_HPP_INCLUDED
