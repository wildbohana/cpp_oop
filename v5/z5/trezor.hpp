#ifndef TREZOR_HPP_INCLUDED
#define TREZOR_HPP_INCLUDED

template<class SADRZAJ, int KAPACITET>
class Trezor {
	private:
		SADRZAJ sefovi[KAPACITET];		// niz
		bool zauzeto[KAPACITET];
	public:
		Trezor() {
			for (int i=0; i<KAPACITET; ++i) {		// prvo izvrsi {} pa povecaj i
				zauzeto[i] = false;
			}
		}

		int getBrojPopunjenihSefova() {
			int n = 0;
			for (int i=0; i<KAPACITET; ++i) {
				if (zauzeto[i]) {
					n++;
				}
			}
			return n;
		}

		int ubaciSadrzaj(const SADRZAJ& sadrzaj) {
			for (int i=0; i<KAPACITET; ++i) {
				if (!zauzeto[i]) {
					zauzeto[i] = true;
					sefovi[i] = sadrzaj;
					return i;
				}
			}
			return -1;
		}

		bool izbaciSadrzaj(int sef) {
			if (zauzeto[sef]) {
				zauzeto[sef] = false;
				return true;
			}
			return false;
		}

};

#endif // TREZOR_HPP_INCLUDED
