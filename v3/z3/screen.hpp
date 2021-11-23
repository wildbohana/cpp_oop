#ifndef SCREEN_HPP_INCLUDED
#define SCREEN_HPP_INCLUDED

enum ScreenStates {ssON, ssOFF};

const int brightnessMin = 0;
const int brightnessMax = 20;
const int korak = 2;

class Screen {

	private:
		ScreenStates state;
		int brightness;

	public:
		Screen() {
			state = ssOFF;
			brightness = brightnessMin;
		}

		void setState(ScreenStates ss) {
			state = ss;
		}

		ScreenStates getState() const {
			return state;
		}

		int getBrightness() const {
			return brightness;
		}

		bool incB() {
			if (state == ssON && (brightness + korak <= brightnessMax)) {
				brightness += korak;
				return true;
			}
			return false;
		}

		bool decB() {
			if (state == ssON && (brightness - korak >= brightnessMax)) {
				brightness -= korak;
				return true;
			}
			return false;
		}
};

#endif // SCREEN_HPP_INCLUDED
