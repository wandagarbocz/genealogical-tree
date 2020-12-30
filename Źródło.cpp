
//BIBLIOTEKI FLTK DO RYSOWANIA
#include<FL/Fl.h> //DO UTWORZENIA INTERFEJSU GRAFICZNEGO
#include<FL/Fl_Box.h> //
#include<FL/Fl_Window.h> //DO UTWORZENIA OKNA
#include <FL/fl_draw.H>
#include <FL/Fl_Output.H> //DO WYPISANIA SANYCH W INTERFEJSIE
#include <FL/Fl_Widget.H>
#include <Windows.h>
#include <string>
#include <cstring>
#include<map>
#include <vector>
#include <iostream>

using namespace std;


//Dodac map lub vector, jakas wirtualna ub interfejs

//DEKLARACJE PRZESTRZENI WYŚWIETLANIA TEKSTU
Fl_Output* output1;
Fl_Output* output11;
Fl_Output* output12;
Fl_Output* output13;
Fl_Output* output14;
Fl_Output* output15;
Fl_Output* output16;
Fl_Output* output17;
Fl_Output* output18;
Fl_Output* output19;
Fl_Output* output111;
Fl_Output* output112;
Fl_Output* output113;
Fl_Output* output114;
Fl_Output* output115;
Fl_Output* output116;
Fl_Output* output117;
Fl_Output* output118;
Fl_Output* output119;
Fl_Output* output120;
Fl_Output* output121;
Fl_Output* output122;
Fl_Output* output123;
Fl_Output* output124;
Fl_Output* output125;
Fl_Output* output126;
Fl_Output* output127;
Fl_Output* output128;
Fl_Output* output129;
Fl_Output* output130;
Fl_Output* output131;
Fl_Output* output132;
Fl_Output* output133;
Fl_Output* output134;
Fl_Output* output135;
Fl_Output* output136;
Fl_Output* output137;
Fl_Output* output138;
Fl_Output* output139;
Fl_Output* output140;
Fl_Output* output141;
Fl_Output* output142;
Fl_Output* output143;
Fl_Output* output144;
Fl_Output* output145;
Fl_Output* output146;
Fl_Output* output147;
Fl_Output* output148;
Fl_Output* output149;
Fl_Output* output150;
Fl_Output* output151;
Fl_Output* output152;
Fl_Output* output153;
Fl_Output* output154;
Fl_Output* output155;
Fl_Output* output156;
Fl_Output* output157;
Fl_Output* output158;
Fl_Output* output159;
Fl_Output* output160;
Fl_Output* output161;
Fl_Output* output162;
Fl_Output* output163;
Fl_Output* output164;
Fl_Output* output165;
Fl_Output* output166;
Fl_Output* output167;
Fl_Output* output168;
Fl_Output* output169;
Fl_Output* output170;
Fl_Output* output171;
Fl_Output* output172;
Fl_Output* output173;
Fl_Output* output174;
Fl_Output* output175;
Fl_Output* output176;
Fl_Output* output177;
Fl_Output* output178;
Fl_Output* output179;
Fl_Output* output180;
Fl_Output* output181;
Fl_Output* output182;
Fl_Output* output183;
Fl_Output* output184;
Fl_Output* output185;
Fl_Output* output186;
Fl_Output* output187;
Fl_Output* output188;
Fl_Output* output189;
Fl_Output* output190;
Fl_Output* output191;
Fl_Output* output192;
Fl_Output* output193;
Fl_Output* output194;
Fl_Output* output195;
Fl_Output* output196;
Fl_Output* output197;
Fl_Output* output198;
Fl_Output* output199;
Fl_Output* output200;
Fl_Output* output211;
Fl_Output* output212;
Fl_Output* output213;
Fl_Output* output214;
Fl_Output* output215;
Fl_Output* output216;
Fl_Output* output217;
Fl_Output* output218;
Fl_Output* output219;
Fl_Output* output220;
Fl_Output* output221;
Fl_Output* output222;
Fl_Output* output223;
Fl_Output* output224;
Fl_Output* output225;
Fl_Output* output226;
Fl_Output* output227;
Fl_Output* output228;
Fl_Output* output229;
Fl_Output* output230;
Fl_Output* output231;
Fl_Output* output232;
Fl_Output* output233;
Fl_Output* output234;
Fl_Output* output235;
Fl_Output* output236;
Fl_Output* output237;
Fl_Output* output238;
Fl_Output* output239;
Fl_Output* output240;
Fl_Output* output241;
Fl_Output* output242;
Fl_Output* output243;
Fl_Output* output244;
Fl_Output* output245;
Fl_Output* output246;
Fl_Output* output247;
Fl_Output* output248;
Fl_Output* output249;
Fl_Output* output250;
Fl_Output* output251;
Fl_Output* output252;
Fl_Output* output253;
Fl_Output* output254;
Fl_Output* output255;
Fl_Output* output256;
Fl_Output* output257;
Fl_Output* output258;
Fl_Output* output259;
Fl_Output* output260;
Fl_Output* output261;
Fl_Output* output262;
Fl_Output* output263;
Fl_Output* output264;
Fl_Output* output265;
Fl_Output* output266;
Fl_Output* output267;
Fl_Output* output268;
Fl_Output* output269;
Fl_Output* output270;
Fl_Output* output271;
Fl_Output* output272;
Fl_Output* output273;
Fl_Output* output274;
Fl_Output* output275;
Fl_Output* output276;
Fl_Output* output277;
Fl_Output* output278;
Fl_Output* output279;
Fl_Output* output280;
Fl_Output* output281;
Fl_Output* output282;
Fl_Output* output283;
Fl_Output* output284;
Fl_Output* output285;
Fl_Output* output286;
Fl_Output* output287;
Fl_Output* output288;
Fl_Output* output289;
Fl_Output* output290;
Fl_Output* output291;
Fl_Output* output292;
Fl_Output* output293;
Fl_Output* output294;
Fl_Output* output295;
Fl_Output* output296;
Fl_Output* output297;
Fl_Output* output298;
Fl_Output* output299;
Fl_Output* output500;
Fl_Output* output511;
Fl_Output* output512;
Fl_Output* output513;
Fl_Output* output514;
Fl_Output* output515;
Fl_Output* output516;
Fl_Output* output517;
Fl_Output* output518;
Fl_Output* output519;
Fl_Output* output520;
Fl_Output* output521;
Fl_Output* output522;
Fl_Output* output523;
Fl_Output* output524;
Fl_Output* output525;
Fl_Output* output526;
Fl_Output* output527;
Fl_Output* output528;
Fl_Output* output529;
Fl_Output* output530;
Fl_Output* output531;
Fl_Output* output532;
Fl_Output* output533;
Fl_Output* output534;
Fl_Output* output535;
Fl_Output* output536;
Fl_Output* output537;
Fl_Output* output538;
Fl_Output* output539;
Fl_Output* output540;
Fl_Output* output541;
Fl_Output* output542;
Fl_Output* output543;
Fl_Output* output544;
Fl_Output* output545;
Fl_Output* output546;
Fl_Output* output547;
Fl_Output* output548;
Fl_Output* output549;
Fl_Output* output550;
Fl_Output* output551;
Fl_Output* output552;
Fl_Output* output553;
Fl_Output* output554;
Fl_Output* output555;
Fl_Output* output556;
Fl_Output* output557;
Fl_Output* output558;
Fl_Output* output559;
Fl_Output* output560;
Fl_Output* output561;
Fl_Output* output562;
Fl_Output* output563;
Fl_Output* output564;
Fl_Output* output565;
Fl_Output* output566;
Fl_Output* output567;
Fl_Output* output568;
Fl_Output* output569;
Fl_Output* output570;
Fl_Output* output571;
Fl_Output* output572;
Fl_Output* output573;
Fl_Output* output574;
Fl_Output* output575;
Fl_Output* output576;
Fl_Output* output577;
Fl_Output* output578;
Fl_Output* output579;
Fl_Output* output580;
Fl_Output* output581;
Fl_Output* output582;
Fl_Output* output583;
Fl_Output* output584;
Fl_Output* output585;
Fl_Output* output586;
Fl_Output* output587;
Fl_Output* output588;
Fl_Output* output589;
Fl_Output* output590;
Fl_Output* output591;
Fl_Output* output592;
Fl_Output* output593;
Fl_Output* output594;
Fl_Output* output595;
Fl_Output* output596;
Fl_Output* output597;
Fl_Output* output598;
Fl_Output* output599;

class Bazowa { //abstrakcyjna klasa bazowa 
public:
	//FUNKKCJE WIRTUALNE, KTÓRE BĘDĄ ZWRACAĆ POPRAWNOŚĆ WPISANYCH Z KLAWIATURY DANYCH
	//ZWRACAJA 0 GDY DANE SA NIEPOPRAWNE A 1 GDY POPRAWNE 
	virtual int get_poprawnosc() = 0;
	virtual int get_poprawnosc1() = 0;
	virtual int get_poprawnosc2() = 0;
	virtual int get_poprawnosc3() = 0;
};

class Osoba:public Bazowa { //KLASA OSOBA, KTÓRA DZIEDZICZY PO KLASIE BAZOWEJ 
public:
	string dzien_urodzenia; //DZIEŃ URODZENIA OSOBY
	string miesiac_urodzenia; //MIESIAC URODZENIA OSOBY
	string rok_urodzenia; //ROK URODZENIA OSOBY
	string imie; //IMIE OSOBY
	int czy_umarla; //ZMIENNA ŚWIADCZĄCA O TYM CZY OSOBA UMARŁA, 0 JEŚLI ŻYJE, 1 JEŚLI UMARŁA
	string kto; //JAKIE POKREWIENSTWO WIĄŻE CIĘ Z TĄ OSOBĄ 
	//ZMIENNE ŚWIADCZĄCE O POPRAWNOŚCI WPROWADZONYCH DANYCH
	int poprawnosc; 
	int poprawnosc1;
	int poprawnosc2;
	int poprawnosc3;

	//KONSTRUKTOR PARAMETRYCZNY KLASY OSOBA
	Osoba(string du = "0", string mu = "0", string ru = "0", string im = "cos", int cu = 0, string k = "cos", int pop=1, int pop1=1, int pop2=1, int pop3=1) {
		dzien_urodzenia = du;
		miesiac_urodzenia = mu;
		rok_urodzenia = ru;
		imie = im;
		czy_umarla = cu;
		kto = k;
		poprawnosc = pop;
		poprawnosc1 = pop1;
		poprawnosc2 = pop2;
		poprawnosc3 = pop3;
	}
	 //KONSTRUKTOR KOPIUJĄCY KLASY OSOBA
	Osoba(const Osoba& osoba1) {
		dzien_urodzenia = osoba1.dzien_urodzenia;
		miesiac_urodzenia = osoba1.miesiac_urodzenia;
		rok_urodzenia = osoba1.rok_urodzenia;
		imie = osoba1.imie;
		czy_umarla = osoba1.czy_umarla;
		kto = osoba1.kto;
		poprawnosc = osoba1.poprawnosc;
		poprawnosc1 = osoba1.poprawnosc1;
		poprawnosc2 = osoba1.poprawnosc2;
		poprawnosc3 = osoba1.poprawnosc3;
	}

	void wpisz_osobe() { //FUNKCJA USTAWIAJĄCA IMIĘ, DATĘ URODZENIA I CZY DANA OSOBA UMARŁA
		string zmienna; 
		cout << "DODAWANIE NOWEJ OSOBY" << endl;
		cout << "Podaj imie osoby: " << endl;
		cin >> imie;
		cout << "Podaj dzien urodzenia tej osoby: " << endl;
		cin >> dzien_urodzenia;
		cout << "Podaj miesiac urodzenia tej osoby: " << endl;
		cin >> miesiac_urodzenia;
		cout << "Podaj rok urodzenia tej osoby: " << endl;
		cin >> rok_urodzenia;
		cout << "Czy ta osoba umarla? " << endl;
		cin >> zmienna;

		if (zmienna == "TAK" || zmienna == "tak" || zmienna == "Tak") { //JEŻELI Z KLAWIATURY WPISANO TAK W RÓŻNYCH KONFIGURACJACH
			czy_umarla = 1; //ZMIENNA CZY_UMARLA=1 BO OSOBA UMARŁA
			poprawnosc = 1; //DANE CO DO FAKTU ŚMIERCI SĄ POPRAWNE
		}
		else if (zmienna=="NIE" || zmienna=="nie" || zmienna=="Nie") { //JEŻELI Z KLAWIATURY WPISANO NIE W RÓŻNYCH KONFIGURACJACJ
			czy_umarla = 0; //ZMIENNA CZY_UMARLA=0 BO OSOBA ŻYJE
			poprawnosc = 1; //DANE CO DO FAKTU ŚMIERCI SĄ POPRAWNE
		}
		else { //JEŻELI WPISANO COKOLWIEK INNEGO NIŻ TAK I NIE W RÓŻNYCH KONFIGURACJACH
			poprawnosc = 0; //DANE CO DO FAKTU ŚMIERCI SĄ NIEPOPRAWNE 
		}
	}


	void kim_jest() { //FUNKCJA DO WYBRANIA I USTAWIENIA KIM JEST DLA CIEBIE TA OSOBA
		cout << "Kim dla ciebie jest ta osoba?" << endl;
		cout << "1. Matka" << endl;
		cout << "2. Ojciec" << endl;
		cout << "3. Siostra" << endl;
		cout << "4. Brat" << endl;
		cout << "5. Corka" << endl;
		cout << "6. Syn" << endl;
		cout << "7. Babcia" << endl;
		cout << "8. Dziadek" << endl;
		cout << "9. Ciocia" << endl;
		cout << "10. Wujek" << endl;
		cout << "11. Maz" << endl;
		cout << "12. Zona" << endl;
		cin >> kto;
		

		if (kto != "7" || kto != "7." || kto != "8" || kto != "9" || kto != "9." || kto != "8." || kto != "10." || kto != "10" || kto != "11" || kto != "11." || kto != "12" || kto != "12." || kto != "1" || kto != "1." || kto != "2." || kto != "2" || kto != "3" || kto != "3." || kto != "4" || kto != "4." || kto != "5." || kto != "5" || kto != "6." || kto != "6") {
			poprawnosc1 = 0; //JEŻELI WPISANO COŚ INNEGO NIŻ LICZBA OD 1 DO 12 LUB LICZBA OD 1 DO 12 Z KROPKĄ 
							//DANE UWAŻAMY ZA NIEPOPRAWNE
		}
		else {
			poprawnosc1 = 1; //DANE SĄ POPRAWNE
		}
	}

	string get_dzien_urodzenia() {
		return dzien_urodzenia;
	}
	string get_miesiac_urodzenia() {
		return miesiac_urodzenia;
	}
	string get_rok_urodzenia() {
		return rok_urodzenia;
	}
	int get_czy_umarla() {
		return czy_umarla;
	}
	string get_imie() {
		return imie;
	}
	string get_kto() {
		return kto;
	}
	virtual int get_poprawnosc() {
		return poprawnosc;
	}
	virtual int get_poprawnosc1() {
		return poprawnosc1;
	}
	virtual int get_poprawnosc2() {
		return poprawnosc2;
	}
	virtual int get_poprawnosc3() {
		return poprawnosc3;
	}

};

class Strona :public Osoba {
public:
	string strona;

	Strona(string du = "0", string mu = "0", string ru = "0", string im = "cos", int cu = 0, string k = "cos", int pop=1, int pop1=1, int pop2=1, int pop3=1, string s = "cos") :Osoba(du, mu, ru, im, cu, k, pop, pop1, pop2, pop3) {
		strona = s;
	}
	Strona(const Strona& strona1) {
		strona = strona1.strona;
	}

	void wpisanie_strony() {
		if (kto == "7" || kto == "7." || kto == "8" || kto == "9" || kto == "9." || kto == "8." || kto == "10." || kto == "10" ) {
			cout << "Ta osoba jest od strony ojca czy matki?" << endl;
			cout << "1. Ojca" << endl;
			cout << "2. Matki" << endl;
			cin >> strona;
			if (strona != "1" || strona != "1." || strona != "2" || strona != "2.") {
				poprawnosc = 0;
			}
			else {
				poprawnosc = 1;
			}
		}
	}
	string get_strona() {
		return strona;
	}

	virtual int get_poprawnosc() {
		return poprawnosc;
	}
	virtual int get_poprawnosc1() {
		return poprawnosc1;
	}
	virtual int get_poprawnosc2() {
		return poprawnosc2;
	}
	virtual int get_poprawnosc3() {
		return poprawnosc3;
	}

};
class Kuzyn :public Strona {
public:
	string imie_kuzyna;
	string dzien_urodzenia_kuzyna;
	string miesiac_urodzenia_kuzyna;
	string rok_urodzenia_kuzyna;
	int ile_kuzynow;
	int czy_umarl_kuzyn;



	void dodaj_kuzyna() {
		string il_kuzyn;
		if (kto == "9." || kto == "9" || kto == "10" || kto == "10.")
		{
			cout << "Czy chcesz dodac dziecko tej osoby? Jezeli chcesz, wpisz ilosc dzieci, jezeli nie wpisz 0" << endl;
			cin >> il_kuzyn;
			ile_kuzynow= atoi(il_kuzyn.c_str());
		
		}
	}

	void dane_kuzyna() {
		string zmienna;
		cout << "Wprowadz imie dziecka" << endl;
		cin >> imie_kuzyna;
		cout << "Podaj dzien urodzenia dziecka: " << endl;
		cin >> dzien_urodzenia_kuzyna;
		cout << "Podaj miesiac urodzenia dziecka: " << endl;
		cin >> miesiac_urodzenia_kuzyna;
		cout << "Podaj rok urodzenia dziecka: " << endl;
		cin >> rok_urodzenia_kuzyna;
		cout << "Czy ta osoba umarla? " << endl;
		cin >> zmienna;
		if (zmienna == "TAK" || zmienna == "tak" || zmienna == "Tak") { //JEŻELI Z KLAWIATURY WPISANO TAK W RÓŻNYCH KONFIGURACJACH
			czy_umarl_kuzyn = 1; //ZMIENNA CZY_UMARLA=1 BO OSOBA UMARŁA
			poprawnosc = 1; //DANE CO DO FAKTU ŚMIERCI SĄ POPRAWNE
		}
		else if (zmienna == "NIE" || zmienna == "nie" || zmienna == "Nie") { //JEŻELI Z KLAWIATURY WPISANO NIE W RÓŻNYCH KONFIGURACJACJ
			czy_umarl_kuzyn = 0; //ZMIENNA CZY_UMARLA=0 BO OSOBA ŻYJE
			poprawnosc = 1; //DANE CO DO FAKTU ŚMIERCI SĄ POPRAWNE
		}
		else { //JEŻELI WPISANO COKOLWIEK INNEGO NIŻ TAK I NIE W RÓŻNYCH KONFIGURACJACH
			poprawnosc = 0; //DANE CO DO FAKTU ŚMIERCI SĄ NIEPOPRAWNE 
		}
	}

	Kuzyn(string du = "0", string mu = "0", string ru = "0", string im = "cos", int cu = 0, string k = "cos", int pop = 1, int pop1 = 1, int pop2 = 1, int pop3 = 1, string s = "cos", string duk="0", string muk="0", string ruk="0", string imie_kuz="brak", int ile_kuz=0, int czy_umarl=0) :Strona(du, mu, ru, im, cu, k, pop, pop1, pop2, pop3, s) {
		dzien_urodzenia_kuzyna = duk;
		miesiac_urodzenia_kuzyna = muk;
		rok_urodzenia_kuzyna = ruk;
		czy_umarl_kuzyn = czy_umarl;
		imie_kuzyna = imie_kuz;
		ile_kuzynow = ile_kuz;
	}
	Kuzyn(const Kuzyn& kuzyn1) {
		dzien_urodzenia_kuzyna = kuzyn1.dzien_urodzenia_kuzyna;
		miesiac_urodzenia_kuzyna = kuzyn1.miesiac_urodzenia_kuzyna;
		rok_urodzenia_kuzyna = kuzyn1.rok_urodzenia_kuzyna;
		czy_umarl_kuzyn = kuzyn1.czy_umarl_kuzyn;
		imie_kuzyna = kuzyn1.imie_kuzyna;
		ile_kuzynow = kuzyn1.ile_kuzynow;
	}
	string get_dzien_urodzenia_kuzyna() {
		return dzien_urodzenia_kuzyna;
	}
	string get_miesiac_urodzenia_kuzyna() {
		return miesiac_urodzenia_kuzyna;
	}
	string get_rok_urodzenia_kuzyna() {
		return rok_urodzenia_kuzyna;
	}
	int get_czy_umarl_kuzyn() {
		return czy_umarl_kuzyn;
	}
	string get_imie_kuzyna() {
		return imie_kuzyna;
	}
	int get_liczba_kuzynow() {
		return ile_kuzynow;
	}
	virtual int get_poprawnosc() {
		return poprawnosc;
	}
	virtual int get_poprawnosc1() {
		return poprawnosc1;
	}
	virtual int get_poprawnosc2() {
		return poprawnosc2;
	}
	virtual int get_poprawnosc3() {
		return poprawnosc3;
	}


};

class Smierc :public Osoba {
public:
	string dzien_zgonu;
	string miesiac_zgonu;
	string rok_zgonu;
	int lata;
	Smierc(string du = "1", string mu = "1", string ru = "1", string im = "brak", int cu = 0, string k = "brak", int pop=1, int pop1=1, int pop2=1, int pop3=1, string rz = "1", string dz = "1", string mz = "1", int la = 0) :Osoba(du, mu, ru, im, cu, k, pop, pop1, pop2, pop3) {
		dzien_zgonu = dz;
		miesiac_zgonu = mz;
		rok_zgonu = rz;
		lata = la;
	}
	Smierc(const Smierc& smierc1) {
		dzien_zgonu = smierc1.dzien_zgonu;
		miesiac_zgonu = smierc1.miesiac_zgonu;
		rok_zgonu = smierc1.rok_zgonu;
		lata = smierc1.lata;

	}


	void kiedy_umarla() {

		if (czy_umarla == 1) {
		
			cout << "Podaj dzien zgonu tej osoby: " << endl;
			cin >> dzien_zgonu;
			
			
			
			cout << "Podaj miesiac zgonu tej osoby: " << endl;
			cin >> miesiac_zgonu;
			
			cout << "Podaj rok zgonu: " << endl;
			cin >> rok_zgonu;
			

		}
	}

	void ile_lat() {
		if (czy_umarla == 1) {
			int miesiac_zgonu1;
			int rok_zgonu1;
			int dzien_zgonu1;
			miesiac_zgonu1 = atoi(miesiac_zgonu.c_str());
			dzien_zgonu1 = atoi(dzien_zgonu.c_str());
			rok_zgonu1 = atoi(rok_zgonu.c_str());
			int miesiac_urodzenia2;
			int rok_urodzenia2;
			int dzien_urodzenia2;
			miesiac_urodzenia2 = atoi(miesiac_urodzenia.c_str());
			dzien_urodzenia2 = atoi(dzien_urodzenia.c_str());
			rok_urodzenia2 = atoi(rok_urodzenia.c_str());

			if (miesiac_zgonu1 > miesiac_urodzenia2) {
				lata = rok_zgonu1 - rok_urodzenia2;
			}
			else if (miesiac_zgonu1 < miesiac_urodzenia2) {
				lata = rok_zgonu1 - rok_urodzenia2 - 1;
			}
			else if (miesiac_urodzenia2 == miesiac_zgonu1) {
				if (dzien_urodzenia2 < dzien_zgonu1) {
					lata = rok_zgonu1 - rok_urodzenia2;
				}
				else {
					lata = rok_zgonu1 - rok_urodzenia2 - 1;
				}
			}
			cout << "Ta osoba zyla " << lata << " lat" << endl;
		}
	}

	string get_rok_zgonu() {
		return rok_zgonu;
	}
	string get_miesiac_zgonu() {
		return miesiac_zgonu;
	}
	string get_dzien_zgonu() {
		return dzien_zgonu;
	}
	int get_lata() {
		return lata;
	}
	virtual int get_poprawnosc() {
		return poprawnosc;
	}
	virtual int get_poprawnosc1() {
		return poprawnosc1;
	}
	virtual int get_poprawnosc2() {
		return poprawnosc2;
	}
	virtual int get_poprawnosc3() {
		return poprawnosc3;
	}

};


class Malzenstwo :public Kuzyn {
public:
	string imie_mal;
	string kto2;
	string dzien_mal;
	string miesiac_mal;
	string rok_mal;
	int czy_umarl_mal;
	int czy_malzonek;

	Malzenstwo(string du = "0", string mu = "0", string ru = "0", string im = "cos", int cu = 0, string k = "cos", int pop=1, int pop1=1, int pop2=1, int pop3=1, string s = "cos", string duk = "0", string muk = "0", string ruk = "0", string imie_kuz = "brak", int ile_kuz = 0, int czy_umarl = 0, string imm = "cos", string dm = "1", string mm = "1", string rm = "1", int cmm = 1, string k2 = "brak", int cm=0) :Kuzyn(du, mu, ru, im, cu, k, pop, pop1, pop2, pop3, s, duk, muk, ruk, imie_kuz, ile_kuz, czy_umarl) {
		imie_mal = imm;
		dzien_mal = dm;
		rok_mal = rm;
		czy_umarl_mal = cmm;
		kto2 = k2;
		czy_malzonek = cm;
	}
	Malzenstwo(const Malzenstwo& mal1) {
		imie_mal = mal1.imie_mal;
		dzien_mal = mal1.dzien_mal;
		rok_mal = mal1.rok_mal;
		czy_umarl_mal = mal1.czy_umarl_mal;
		kto2 = mal1.kto2;
	}

	string wpisanie_malzonka() {

		string odpowiedz;
		string odpowiedz1;

		if (kto == "3" || kto == "3." || kto == "4" || kto == "4." || kto == "5." || kto == "5" || kto == "6." || kto == "6" || kto == "9" || kto == "9." || kto == "10" || kto == "10.")
		{
			cout << "Czy chcesz dodac malzonka tej osoby?" << endl;
			cin >> odpowiedz;
			return odpowiedz;
		}
	}

	void dane_malzonka(string odpowiedz){
		string odpowiedz1;
		if (odpowiedz == "tak" || odpowiedz == "TAK" || odpowiedz == "Tak") {
			kto2 = "malzonek" + kto;
			czy_malzonek = 1;
			cout << "Wpisz imie malzonka: " << endl;
			cin >> imie_mal;
			cout << "Podaj date urodzenia malzonka:" << endl;
			cout << "Dzien: ";
			cin >> dzien_mal;
			cout << "Miesiac: ";
			cin >> miesiac_mal;
			cout << "Rok: ";
			cin >> rok_mal;
			cout << "Czy malzonek umarl?" << endl;
			cin >> odpowiedz1;
			if (odpowiedz1 == "TAK" || odpowiedz1 == "Tak" || odpowiedz1 == "tak") {
				czy_umarl_mal = 1;
			}
			else {
				czy_umarl_mal = 0;
			}
		}
			else {
				czy_malzonek = 0;
			}
			
		
	}
	

	int get_czy_umarl_mal() {
		return czy_umarl_mal;
	}
	string get_dzien_mal() {
		return dzien_mal;
	}
	int get_czy_malzonek() {
		return czy_malzonek;
	}

	string get_miesiac_mal() {
		return miesiac_mal;
	}
	string get_rok_mal() {
		return rok_mal;
	}
	string get_imie_mal() {
		return imie_mal;
	}
	string get_kto_mal() {
		return kto2;
	}
	virtual int get_poprawnosc1() {
		return poprawnosc1;
	}
	virtual int get_poprawnosc2() {
		return poprawnosc2;
	}
	virtual int get_poprawnosc3() {
		return poprawnosc3;
	}
	virtual int get_poprawnosc() {
		return poprawnosc;
	}
};






int main() {
	Osoba osoba[40];
	Strona strona1[40];
	Smierc smierc[40];

	Malzenstwo malzenstwo[40];
	Smierc smierc_malzonka[40];
	Kuzyn kuzyn[36];
	Kuzyn kuzyn5[36];
	Malzenstwo malzenstwokuzyn[36];
	Smierc smierc_kuzyn[36];
	Smierc smierc_kuzynmal[36];
	Malzenstwo malzenstwokuzyn5[36];
	Smierc smierc_kuzyn5[36];
	Smierc smierc_kuzynmal5[366];

	//Drzewo drzewo[21];

	int suma_kuzynow = 0;
	int suma_kuzynow2 = 0;
	int odpowiedz = 1;
	string mojeimie;
	string mojdzien;
	string mojmiesiac;
	string mojrok;


	cout << "wpisz swoje imie" << endl;
	cin >> mojeimie;
	cout << "wpisz swoj dzien urodzenia" << endl;
	cin >> mojdzien;
	cout << "wpisz swoj miesiac urodzienia" << endl;
	cin >> mojmiesiac;
	cout << "wpisz swoj rok urodzenia" << endl;
	cin >> mojrok;

	int i = 0;
	while (odpowiedz == 1) {
		
		Osoba os1;
		

		osoba[i] = os1;
		osoba[i].wpisz_osobe();
		osoba[i].kim_jest();

		string du;
		string mu;
		string ru;
		int cu;
		string im;
		string k;
		int pop;
		int pop1; 
		int pop2;
		int pop3;
		string str;
		string dum;
		string mum;
		string rum;
		int czy_umarl_mal;
		int czymal;
		string dzmal;
		string mzmal;
		string rzmal;
		string imiemal;
		string kto_mal;
		

		du = osoba[i].get_dzien_urodzenia();
		mu = osoba[i].get_miesiac_urodzenia();
		ru = osoba[i].get_rok_urodzenia();
		cu = osoba[i].get_czy_umarla();
		im = osoba[i].get_imie();
		k = osoba[i].get_kto();

		if (k == "7" || k == "7." || k == "8" || k == "9" || k == "9." || k == "8." || k == "10." || k == "10") {
			Strona s1(du, mu, ru, im, cu, k);
			strona1[i] = s1;
			strona1[i].wpisanie_strony();

		
			str = strona1[i].get_strona();
		}

		if (cu == 1) {
			Smierc s2(du, mu, ru, im, cu, k);
			smierc[i] = s2;
			smierc[i].kiedy_umarla();
			smierc[i].ile_lat();

			string dz;
			string mz;
			string rz;
			dz = smierc[i].get_dzien_zgonu();
			mz = smierc[i].get_miesiac_zgonu();
			rz = smierc[i].get_rok_zgonu();
		}
	
		if (k == "3" || k == "3." || k == "4" || k == "4." || k == "5." || k == "5" || k == "6." || k == "6" || k == "9" || k == "9." || k == "10" || k == "10.") {
			Malzenstwo m1(du, mu, ru, im, cu, k, 1, 1, 1, 1, str);
			malzenstwo[i] = m1;
			string odpowiedz2;
			odpowiedz2 = malzenstwo[i].wpisanie_malzonka();
			malzenstwo[i].dane_malzonka(odpowiedz2);
			dum = malzenstwo[i].get_dzien_mal();
			mum = malzenstwo[i].get_miesiac_mal();
			rum = malzenstwo[i].get_rok_mal();
			czy_umarl_mal = malzenstwo[i].get_czy_umarl_mal();
			imiemal = malzenstwo[i].get_imie_mal();
			kto_mal = malzenstwo[i].get_kto_mal();
			czymal = malzenstwo[i].get_czy_malzonek();
			int op1 = 0;
			if (odpowiedz2 == "tak" || odpowiedz2 == "TAK" || odpowiedz2 == "Tak") {
				op1 = 1;
			}
			if (czy_umarl_mal == 1 && op1==1 ) {
				Smierc s3(dum, mum, rum, imiemal, czy_umarl_mal, kto_mal);
				smierc_malzonka[i] = s3;
				smierc_malzonka[i].kiedy_umarla();
				smierc_malzonka[i].ile_lat();
				dzmal = smierc_malzonka[i].get_dzien_zgonu();
				mzmal = smierc_malzonka[i].get_miesiac_zgonu();
				rzmal = smierc_malzonka[i].get_rok_zgonu();
			}

		}
		if (k == "10" || k == "10." || k == "9" || k == "9.") {
			Kuzyn kuzyn1(du, mu, ru, im, cu, k, 1, 1, 1, 1, str);
			string imie_kuzyna1;
			string dzien_ur_kuzyna;
			string miesiac_ur_kuzyna;
			string rok_ur_kuzyna;
			int czy_umarl_kuzyn;
			int ile_kuzynow;

			kuzyn1.dodaj_kuzyna();
			ile_kuzynow = kuzyn1.get_liczba_kuzynow();

			string odpowiedz7;
			int czy_mal_kuzyna_umarl;
			string dzien_mal_kuzyna;
			string miesiac_mal_kuzyna;
			string rok_mal_kuzyna;
			string imie_mal_kuzyna;

			if (ile_kuzynow > 0) {
				for (int p = suma_kuzynow; p < ile_kuzynow + suma_kuzynow; p++) {
					int o3 = 0;
					Kuzyn kuzyn2(du, mu, ru, im, cu, k, 1, 1, 1, 1, str);
					kuzyn[p] = kuzyn2;
					kuzyn[p].dane_kuzyna();
					dzien_ur_kuzyna = kuzyn[p].get_dzien_urodzenia_kuzyna();
					miesiac_ur_kuzyna = kuzyn[p].get_miesiac_urodzenia_kuzyna();
					rok_ur_kuzyna = kuzyn[p].get_rok_urodzenia_kuzyna();
					czy_umarl_kuzyn = kuzyn[p].get_czy_umarl_kuzyn();
					imie_kuzyna1 = kuzyn[p].get_imie_kuzyna();


					if (czy_umarl_kuzyn == 1) {
						Smierc smierck1(dzien_ur_kuzyna, miesiac_ur_kuzyna, rok_ur_kuzyna, imie_kuzyna1, czy_umarl_kuzyn, k, 1, 1, 1, 1);
						smierc_kuzyn[p] = smierck1;
						smierc_kuzyn[p].kiedy_umarla();
						smierc_kuzyn[p].ile_lat();
					}

					cout << "czy chcesz dodac malzonka tej osoby?" << endl;
					cin >> odpowiedz7;
					Malzenstwo malzenstwo_kuz(du, mu, ru, im, cu, k, 1, 1, 1, 1, str, dzien_ur_kuzyna, miesiac_ur_kuzyna, rok_ur_kuzyna, imie_kuzyna1, czy_umarl_kuzyn);
					malzenstwokuzyn[p] = malzenstwo_kuz;
					
					if (odpowiedz7 == "tak" || odpowiedz7 == "TAK" || odpowiedz7 == "Tak") {
						o3 = 1;
					}
					if (o3 == 1) {
						malzenstwokuzyn[p].dane_malzonka(odpowiedz7);

						czy_mal_kuzyna_umarl = malzenstwokuzyn[p].get_czy_umarl_mal();
						imie_mal_kuzyna = malzenstwokuzyn[p].get_imie_mal();
						dzien_mal_kuzyna = malzenstwokuzyn[p].get_dzien_mal();
						miesiac_mal_kuzyna = malzenstwokuzyn[p].get_miesiac_mal();
						rok_mal_kuzyna = malzenstwokuzyn[p].get_rok_mal();
						if (czy_mal_kuzyna_umarl == 1) {
							Smierc smierc_mal_kuz(dzien_mal_kuzyna, miesiac_mal_kuzyna, rok_mal_kuzyna, imie_mal_kuzyna, czy_mal_kuzyna_umarl, k, 1, 1, 1, 1);
							smierc_kuzynmal[p] = smierc_mal_kuz;
							smierc_kuzynmal[p].kiedy_umarla();
							smierc_kuzynmal[p].ile_lat();
						}
					}

				}
				suma_kuzynow = suma_kuzynow + ile_kuzynow;
			}
		}

		if (k == "3" || k == "3." || k == "4" || k == "4.") {
			Kuzyn kuzyn3(du, mu, ru, im, cu, k, 1, 1, 1, 1, str);
			string imie_kuzyna2;
			string dzien_ur_kuzyna2;
			string miesiac_ur_kuzyn2;
			string rok_ur_kuzyna2;
			int czy_umarl_kuzyn2;
			int ile_kuzynow2;
			

			kuzyn3.dodaj_kuzyna();
			ile_kuzynow2 = kuzyn3.get_liczba_kuzynow();

			string odpowiedz8;
			int czy_mal_kuzyna_umarl2;
			string dzien_mal_kuzyna2;
			string miesiac_mal_kuzyna2;
			string rok_mal_kuzyna2;
			string imie_mal_kuzyna2;

			if (ile_kuzynow2 > 0) {
				for (int p2 = suma_kuzynow2; p2 < ile_kuzynow2 + suma_kuzynow2; p2++) {
					int o4 = 0;
					Kuzyn kuzyn4(du, mu, ru, im, cu, k, 1, 1, 1, 1, str);
					kuzyn5[p2] = kuzyn4;
					kuzyn5[p2].dane_kuzyna();
					dzien_ur_kuzyna2 = kuzyn5[p2].get_dzien_urodzenia_kuzyna();
					miesiac_ur_kuzyn2 = kuzyn5[p2].get_miesiac_urodzenia_kuzyna();
					rok_ur_kuzyna2 = kuzyn5[p2].get_rok_urodzenia_kuzyna();
					czy_umarl_kuzyn2 = kuzyn5[p2].get_czy_umarl_kuzyn();
					imie_kuzyna2 = kuzyn5[2].get_imie_kuzyna();


					if (czy_umarl_kuzyn2 == 1) {
						Smierc smierck4(dzien_ur_kuzyna2, miesiac_ur_kuzyn2, rok_ur_kuzyna2, imie_kuzyna2, czy_umarl_kuzyn2, k, 1, 1, 1, 1);
						smierc_kuzyn5[p2] = smierck4;
						smierc_kuzyn5[p2].kiedy_umarla();
						smierc_kuzyn5[p2].ile_lat();
					}

					cout << "czy chcesz dodac malzonka tej osoby?" << endl;
					cin >> odpowiedz8;
					Malzenstwo malzenstwo_kuz4(du, mu, ru, im, cu, k, 1, 1, 1, 1, str, dzien_ur_kuzyna2, miesiac_ur_kuzyn2, rok_ur_kuzyna2, imie_kuzyna2, czy_umarl_kuzyn2);
					malzenstwokuzyn5[p2] = malzenstwo_kuz4;

					if (odpowiedz8 == "tak" || odpowiedz8 == "TAK" || odpowiedz8 == "Tak") {
						o4 = 1;
					}
					if (o4 == 1) {
						malzenstwokuzyn5[p2].dane_malzonka(odpowiedz8);

						czy_mal_kuzyna_umarl2 = malzenstwokuzyn5[p2].get_czy_umarl_mal();
						imie_mal_kuzyna2 = malzenstwokuzyn5[p2].get_imie_mal();
						dzien_mal_kuzyna2 = malzenstwokuzyn5[p2].get_dzien_mal();
						miesiac_mal_kuzyna2 = malzenstwokuzyn5[p2].get_miesiac_mal();
						rok_mal_kuzyna2 = malzenstwokuzyn5[p2].get_rok_mal();
						if (czy_mal_kuzyna_umarl2 == 1) {
							Smierc smierc_mal_kuz4(dzien_mal_kuzyna2, miesiac_mal_kuzyna2, rok_mal_kuzyna2, imie_mal_kuzyna2, czy_mal_kuzyna_umarl2, k, 1, 1, 1, 1);
							smierc_kuzynmal5[p2] = smierc_mal_kuz4;
							smierc_kuzynmal5[p2].kiedy_umarla();
							smierc_kuzynmal5[p2].ile_lat();
						}
					}

				}
				suma_kuzynow2 = suma_kuzynow2 + ile_kuzynow2;
			}
		}


		cout << "czy chcesz wpisac kolejna osobe?" << endl;
		cout << "1. Tak" << endl;
		cout << "2. Nie" << endl;
		cin >> odpowiedz;
		i = i + 1;
	}

	string zmiennaty;
	zmiennaty = mojeimie + " ur." + mojdzien + "." + mojmiesiac + "." + mojrok;
	char char_arrayty[20];
	strcpy_s(char_arrayty, zmiennaty.c_str());

	string zmiennababciamama;
	char char_arraybabciamama[20];
	string zmiennababciatata;
	char char_arraybabciatata[20];
	string babciamamasmierc;
	string babciatatasmierc;
	char babciats[21];
	char babciams[21];
	
	string dzmamasmierc;
	string dztatasmierc;
	char dziadekts[21];
	char dziadekms[21];
	string dzmama;
	string dztata;
	char dziadekt[21];
	char dziadekm[21];

	string tatadane;
	string mamadane;
	char tatadane_ch[21];
	char mamadane_ch[21];
	string mamasmierc;
	string tatasmierc;
	char mamasmierc_ch[21];
	char tatasmierc_ch[21];

	int liczba_rodzenstwa_mama = 0;
	int liczba_rodzenstwa_tata = 0;
	string ciocia1dane;
	string ciocia2dane;
	char ciocia1danech[21];
	char ciocia2danech[21];
	string ciocia1smierc;
	string ciocia2smierc;
	char ciocia1sch[21];
	char ciocia2sch[21];

	string kuzyn1dane;
	string kuzyn2dane;
	char kuzyn1ch[21];
	char kuzyn2ch[21];
	string kuzyn1danemal;
	string kuzyn2danemal;
	char kuzyn1malch[21];
	char kuzyn2malch[21];
	string kuzyn1danes;
	string kuzyn2danes;
	char kuzyn1sch[21];
	char kuzyn2sch[21];
	string kuzyn1danemals;
	string kuzyn2danemals;
	char kuzyn1malsch[21];
	char kuzyn2malsch[21];
	string kuzyn3dane;
	string kuzyn4dane;
	char kuzyn3ch[21];
	char kuzyn4ch[21];
	string kuzyn3danemal;
	string kuzyn4danemal;
	char kuzyn3malch[21];
	char kuzyn4malch[21];
	string kuzyn3danes;
	string kuzyn4danes;
	char kuzyn3sch[21];
	char kuzyn4sch[21];
	string kuzyn3danemals;
	string kuzyn4danemals;
	char kuzyn3malsch[21];
	char kuzyn4malsch[21];

	string kuzyn5dane;
	string kuzyn6dane;
	char kuzyn5ch[21];
	char kuzyn6ch[21];
	string kuzyn5danemal;
	string kuzyn6danemal;
	char kuzyn5malch[21];
	char kuzyn6malch[21];
	string kuzyn5danes;
	string kuzyn6danes;
	char kuzyn5sch[21];
	char kuzyn6sch[21];
	string kuzyn5danemals;
	string kuzyn6danemals;
	char kuzyn5malsch[21];
	char kuzyn6malsch[21];
	string kuzyn7dane;
	string kuzyn8dane;
	char kuzyn7ch[21];
	char kuzyn8ch[21];
	string kuzyn7danemal;
	string kuzyn8danemal;
	char kuzyn7malch[21];
	char kuzyn8malch[21];
	string kuzyn7danes;
	string kuzyn8danes;
	char kuzyn7sch[21];
	char kuzyn8sch[21];
	string kuzyn7danemals;
	string kuzyn8danemals;
	char kuzyn7malsch[21];
	char kuzyn8malsch[21];

	string kuzyn9dane;
	string kuzyn10dane;
	char kuzyn9ch[21];
	char kuzyn10ch[21];
	string kuzyn9danemal;
	string kuzyn10danemal;
	char kuzyn9malch[21];
	char kuzyn10malch[21];
	string kuzyn9danes;
	string kuzyn10danes;
	char kuzyn9sch[21];
	char kuzyn10sch[21];
	string kuzyn9danemals;
	string kuzyn10danemals;
	char kuzyn9malsch[21];
	char kuzyn10malsch[21];
	string kuzyn11dane;
	string kuzyn12dane;
	char kuzyn11ch[21];
	char kuzyn12ch[21];
	string kuzyn11danemal;
	string kuzyn12danemal;
	char kuzyn11malch[21];
	char kuzyn12malch[21];
	string kuzyn11danes;
	string kuzyn12danes;
	char kuzyn11sch[21];
	char kuzyn12sch[21];
	string kuzyn11danemals;
	string kuzyn12danemals;
	char kuzyn11malsch[21];
	char kuzyn12malsch[21];

	string kuzyn1dane1;
	string kuzyn2dane1;
	char kuzyn1ch1[21];
	char kuzyn2ch1[21];
	string kuzyn1danemal1;
	string kuzyn2danemal1;
	char kuzyn1malch1[21];
	char kuzyn2malch1[21];
	string kuzyn1danes1;
	string kuzyn2danes1;
	char kuzyn1sch1[21];
	char kuzyn2sch1[21];
	string kuzyn1danemals1;
	string kuzyn2danemals1;
	char kuzyn1malsch1[21];
	char kuzyn2malsch1[21];
	string kuzyn3dane1;
	string kuzyn4dane1;
	char kuzyn3ch1[21];
	char kuzyn4ch1[21];
	string kuzyn3danemal1;
	string kuzyn4danemal1;
	char kuzyn3malch1[21];
	char kuzyn4malch1[21];
	string kuzyn3danes1;
	string kuzyn4danes1;
	char kuzyn3sch1[21];
	char kuzyn4sch1[21];
	string kuzyn3danemals1;
	string kuzyn4danemals1;
	char kuzyn3malsch1[21];
	char kuzyn4malsch1[21];

	string kuzyn5dane1;
	string kuzyn6dane1;
	char kuzyn5ch1[21];
	char kuzyn6ch1[21];
	string kuzyn5danemal1;
	string kuzyn6danemal1;
	char kuzyn5malch1[21];
	char kuzyn6malch1[21];
	string kuzyn5danes1;
	string kuzyn6danes1;
	char kuzyn5sch1[21];
	char kuzyn6sch1[21];
	string kuzyn5danemals1;
	string kuzyn6danemals1;
	char kuzyn5malsch1[21];
	char kuzyn6malsch1[21];
	string kuzyn7dane1;
	string kuzyn8dane1;
	char kuzyn7ch1[21];
	char kuzyn8ch1[21];
	string kuzyn7danemal1;
	string kuzyn8danemal1;
	char kuzyn7malch1[21];
	char kuzyn8malch1[21];
	string kuzyn7danes1;
	string kuzyn8danes1;
	char kuzyn7sch1[21];
	char kuzyn8sch1[21];
	string kuzyn7danemals1;
	string kuzyn8danemals1;
	char kuzyn7malsch1[21];
	char kuzyn8malsch1[21];

	string kuzyn9dane1;
	string kuzyn10dane1;
	char kuzyn9ch1[21];
	char kuzyn10ch1[21];
	string kuzyn9danemal1;
	string kuzyn10danemal1;
	char kuzyn9malch1[21];
	char kuzyn10malch1[21];
	string kuzyn9danes1;
	string kuzyn10danes1;
	char kuzyn9sch1[21];
	char kuzyn10sch1[21];
	string kuzyn9danemals1;
	string kuzyn10danemals1;
	char kuzyn9malsch1[21];
	char kuzyn10malsch1[21];
	string kuzyn11dane1;
	string kuzyn12dane1;
	char kuzyn11ch1[21];
	char kuzyn12ch1[21];
	string kuzyn11danemal1;
	string kuzyn12danemal1;
	char kuzyn11malch1[21];
	char kuzyn12malch1[21];
	string kuzyn11danes1;
	string kuzyn12danes1;
	char kuzyn11sch1[21];
	char kuzyn12sch1[21];
	string kuzyn11danemals1;
	string kuzyn12danemals1;
	char kuzyn11malsch1[21];
	char kuzyn12malsch1[21];



	string ciocia1mal;
	string ciocia1malsmierc;
	char ciocia1malch[21];
	char ciocia1malsmiercch[21];
	string ciocia2mal;
	string ciocia2malsmierc;
	char ciocia2malch[21];
	char ciocia2malsmiercch[21];

	string mal;
	char malch[21];
	string mals;
	char malsch[21];

	string dziecko1;
	string dziecko2;
	string dziecko3;
	int liczba_dzieci=0;
	string dziecko1s;
	string dziecko2s;
	string dziecko3s;
	string dziecko1mal;
	string dziecko2mal;
	string dziecko3mal;
	string dziecko1mals;
	string dziecko2mals;
	string dziecko3mals;
	char dziecko1ch[21];
	char dziecko2ch[21];
	char dziecko3ch[21];
	char dziecko1malch[21];
	char dziecko2malch[21];
	char dziecko3malch[21];
	char dziecko1sch[21];
	char dziecko2sch[21];
	char dziecko3sch[21];
	char dziecko1malsch[21];
	char dziecko2malsch[21];
	char dziecko3malsch[21];
	int moje_rodzenstwo = 0;
	string brat1;
	string brat1s;
	string brat1mal;
	string brat1mals;
	string brat1dziecko1;
	string brat1dziecko1mal;
	string brat1dziecko1s;
	string brat1dziecko1mals;
	string brat1dziecko2;
	string brat1dziecko2mal;
	string brat1dziecko2s;
	string brat1dziecko2mals;
	string brat1dziecko3;
	string brat1dziecko3mal;
	string brat1dziecko3s;
	string brat1dziecko3mals;
	char brat1ch[21];
	char brat1sch[21];
	char brat1malch[21];
	char brat1malsch[21];
	char brat1dziecko1ch[21];
	char brat1dziecko1sch[21];
	char brat1dziecko1malch[21];
	char brat1dziecko1malsch[21];
	char brat1dziecko2ch[21];
	char brat1dziecko2sch[21];
	char brat1dziecko2malch[21];
	char brat1dziecko2malsch[21];
	char brat1dziecko3ch[21];
	char brat1dziecko3sch[21];
	char brat1dziecko3malch[21];
	char brat1dziecko3malsch[21];

	string brat2;
	string brat2s;
	string brat2mal;
	string brat2mals;
	string brat2dziecko1;
	string brat2dziecko1mal;
	string brat2dziecko1s;
	string brat2dziecko1mals;
	string brat2dziecko2;
	string brat2dziecko2mal;
	string brat2dziecko2s;
	string brat2dziecko2mals;
	string brat2dziecko3;
	string brat2dziecko3mal;
	string brat2dziecko3s;
	string brat2dziecko3mals;
	char brat2ch[21];
	char brat2sch[21];
	char brat2malch[21];
	char brat2malsch[21];
	char brat2dziecko1ch[21];
	char brat2dziecko1sch[21];
	char brat2dziecko1malch[21];
	char brat2dziecko1malsch[21];
	char brat2dziecko2ch[21];
	char brat2dziecko2sch[21];
	char brat2dziecko2malch[21];
	char brat2dziecko2malsch[21];
	char brat2dziecko3ch[21];
	char brat2dziecko3sch[21];
	char brat2dziecko3malch[21];
	char brat2dziecko3malsch[21];

	string brat3;
	string brat3s;
	string brat3mal;
	string brat3mals;
	string brat3dziecko1;
	string brat3dziecko1mal;
	string brat3dziecko1s;
	string brat3dziecko1mals;
	string brat3dziecko2;
	string brat3dziecko2mal;
	string brat3dziecko2s;
	string brat3dziecko2mals;
	string brat3dziecko3;
	string brat3dziecko3mal;
	string brat3dziecko3s;
	string brat3dziecko3mals;
	char brat3ch[21];
	char brat3sch[21];
	char brat3malch[21];
	char brat3malsch[21];
	char brat3dziecko1ch[21];
	char brat3dziecko1sch[21];
	char brat3dziecko1malch[21];
	char brat3dziecko1malsch[21];
	char brat3dziecko2ch[21];
	char brat3dziecko2sch[21];
	char brat3dziecko2malch[21];
	char brat3dziecko2malsch[21];
	char brat3dziecko3ch[21];
	char brat3dziecko3sch[21];
	char brat3dziecko3malch[21];
	char brat3dziecko3malsch[21];

	string brat4;
	string brat4s;
	string brat4mal;
	string brat4mals;
	string brat4dziecko1;
	string brat4dziecko1mal;
	string brat4dziecko1s;
	string brat4dziecko1mals;
	string brat4dziecko2;
	string brat4dziecko2mal;
	string brat4dziecko2s;
	string brat4dziecko2mals;
	string brat4dziecko3;
	string brat4dziecko3mal;
	string brat4dziecko3s;
	string brat4dziecko3mals;
	char brat4ch[21];
	char brat4sch[21];
	char brat4malch[21];
	char brat4malsch[21];
	char brat4dziecko1ch[21];
	char brat4dziecko1sch[21];
	char brat4dziecko1malch[21];
	char brat4dziecko1malsch[21];
	char brat4dziecko2ch[21];
	char brat4dziecko2sch[21];
	char brat4dziecko2malch[21];
	char brat4dziecko2malsch[21];
	char brat4dziecko3ch[21];
	char brat4dziecko3sch[21];
	char brat4dziecko3malch[21];
	char brat4dziecko3malsch[21];





	Fl_Window* window = new Fl_Window(4200, 930, "Drzewo");
	window->color(FL_GRAY);
	
	Fl_Output output2(1820, 400, 100, 40); //ja
	output2.color(FL_RED);
	output2.textsize(Fl_Font(10));
	::output1 = &output2;
	output1->value(char_arrayty);

	Fl_Output output601(1700, 350, 100, 40); //brat1
	output601.textsize(Fl_Font(10));
	output601.color(FL_GRAY);
	Fl_Output output608(1700, 390, 100, 40); //brat1
	output608.textsize(Fl_Font(10));
	output608.color(FL_GRAY);


	Fl_Output output603(1580, 350, 100, 40); //brat3
	output603.textsize(Fl_Font(10));
	output603.color(FL_GRAY);
	Fl_Output output607(1580, 390, 100, 40); 
	output607.textsize(Fl_Font(10));
	output607.color(FL_GRAY);

	Fl_Output output602(1950, 350, 100, 40); //brat2
	output602.textsize(Fl_Font(10));
	output602.color(FL_GRAY);
	Fl_Output output606(1950, 390, 100, 40); 
	output606.textsize(Fl_Font(10));
	output606.color(FL_GRAY);

	Fl_Output output604(2070, 350, 100, 40); //brat4
	output604.textsize(Fl_Font(10));
	output604.color(FL_GRAY);
	Fl_Output output605(2070, 390, 100, 40); 
	output605.textsize(Fl_Font(10));
	output605.color(FL_GRAY);

	Fl_Output output54(1830, 450, 100, 40); //moj malzonek
	output54.textsize(Fl_Font(10));
	output54.color(FL_GRAY);
	Fl_Output output55(1830, 490, 100, 40); 
	output55.textsize(Fl_Font(10));
	output55.color(FL_GRAY);

	Fl_Output output98(1820, 550, 100, 40); //moje dziecko 1
	output98.color(FL_GRAY);
	output98.textsize(Fl_Font(10));
	Fl_Output output99(1820, 590, 100, 40); 
	output99.color(FL_GRAY);
	output99.textsize(Fl_Font(10));
	Fl_Output output304(1830, 650, 100, 40);
	output304.color(FL_GRAY);
	output304.textsize(Fl_Font(10));
	Fl_Output output305(1830, 690, 100, 40);
	output305.color(FL_GRAY);
	output305.textsize(Fl_Font(10));

	Fl_Output output300(1930, 550, 100, 40); //moje dziecko 2
	output300.color(FL_GRAY);
	output300.textsize(Fl_Font(10));
	Fl_Output output301(1930, 590, 100, 40);
	output301.color(FL_GRAY);
	output301.textsize(Fl_Font(10));
	Fl_Output output308(1940, 650, 100, 40);
	output308.color(FL_GRAY);
	output308.textsize(Fl_Font(10));
	Fl_Output output309(1940, 690, 100, 40);
	output309.color(FL_GRAY);
	output309.textsize(Fl_Font(10));

	Fl_Output output302(2040, 550, 100, 40); //moje dziecko 3
	output302.color(FL_GRAY);
	output302.textsize(Fl_Font(10));
	Fl_Output output303(2040, 590, 100, 40);
	output303.color(FL_GRAY);
	output303.textsize(Fl_Font(10));
	Fl_Output output306(2050, 650, 100, 40);
	output306.color(FL_GRAY);
	output306.textsize(Fl_Font(10));
	Fl_Output output307(2050, 690, 100, 40);
	output307.color(FL_GRAY);
	output307.textsize(Fl_Font(10));

	Fl_Output output3(1, 20, 200, 40); //babcia mama
	output3.color(FL_YELLOW);
	output3.textsize(Fl_Font(14));
	Fl_Output output6(1, 60, 200, 40);
	output6.color(FL_YELLOW);
	output6.textsize(Fl_Font(14));
	
	Fl_Output output4(3240, 20, 200, 40); //babcia tata
	output4.color(FL_YELLOW);
	output4.textsize(Fl_Font(14));
	Fl_Output output5(3240, 60, 200, 40);
	output5.color(FL_YELLOW);
	output5.textsize(Fl_Font(14));

	Fl_Output output7(3640, 20, 200, 40); //dziadek tata
	output7.color(FL_YELLOW);
	output7.textsize(Fl_Font(14));
	Fl_Output output8(3640, 60, 200, 40);
	output8.color(FL_YELLOW);
	output8.textsize(Fl_Font(14));

	Fl_Output output9(400, 20, 200, 40); //dziadek mama
	output9.color(FL_YELLOW);
	output9.textsize(Fl_Font(14));
	Fl_Output output10(400, 60, 200, 40);
	output10.color(FL_YELLOW);
	output10.textsize(Fl_Font(14));

	Fl_Output output20(1650, 100, 200, 40); //mama
	output20.color(FL_GREEN);
	output20.textsize(Fl_Font(14));

	Fl_Output output21(1650, 140, 200, 40);
	output21.color(FL_GREEN);
	output21.textsize(Fl_Font(14));

	Fl_Output output22(2000, 100, 200, 40); //tata
	output22.color(FL_GREEN);
	output22.textsize(Fl_Font(14));

	Fl_Output output23(2000, 140, 200, 40);
	output23.color(FL_GREEN);
	output23.textsize(Fl_Font(14));

	Fl_Output output24(1, 140, 200, 40); //ciocia4 mama
	output24.color(FL_GRAY);
	output24.textsize(Fl_Font(14));
	Fl_Output output25(1, 100, 200, 40);
	output25.color(FL_GRAY);
	output25.textsize(Fl_Font(14));
	Fl_Output output40(50, 240, 200, 40); //malzonek
	output40.color(FL_GRAY);
	output40.textsize(Fl_Font(14));
	Fl_Output output41(50, 200, 200, 40);
	output41.color(FL_GRAY);
	output41.textsize(Fl_Font(10));
	Fl_Output output42(1, 340, 100, 40); //dziecko1
	output42.color(FL_GRAY);
	output42.textsize(Fl_Font(10));
	Fl_Output output43(1, 300, 100, 40);
	output43.color(FL_GRAY);
	output43.textsize(Fl_Font(10));
	Fl_Output output44(10, 440, 100, 40); //malzonek dziecka1
	output44.color(FL_GRAY);
	output44.textsize(Fl_Font(10));
	Fl_Output output45(10, 400, 100, 40);
	output45.color(FL_GRAY);
	output45.textsize(Fl_Font(10));
	Fl_Output output46(120, 340, 100, 40); //dziecko2
	output46.color(FL_GRAY);
	output46.textsize(Fl_Font(10));
	Fl_Output output47(120, 300, 100, 40);
	output47.color(FL_GRAY);
	output47.textsize(Fl_Font(10));
	Fl_Output output48(130, 440, 100, 40); //malzonek dziecka2
	output48.color(FL_GRAY);
	output48.textsize(Fl_Font(10));
	Fl_Output output49(130, 400, 100, 40);
	output49.color(FL_GRAY);
	output49.textsize(Fl_Font(10));
	Fl_Output output50(240, 340, 100, 40); //dziecko3
	output50.color(FL_GRAY);
	output50.textsize(Fl_Font(10));
	Fl_Output output51(240, 300, 100, 40);
	output51.color(FL_GRAY);
	output51.textsize(Fl_Font(10));
	Fl_Output output52(250, 440, 100, 40); //malzonek dziecka3
	output52.color(FL_GRAY);
	output52.textsize(Fl_Font(10));
	Fl_Output output53(250, 400, 100, 40);
	output53.color(FL_GRAY);
	output53.textsize(Fl_Font(10));


	Fl_Output output26(420, 140, 200, 40); //ciocia3 mama
	output26.color(FL_GRAY);
	output26.textsize(Fl_Font(14));
	Fl_Output output27(420, 100, 200, 40);
	output27.color(FL_GRAY);
	output27.textsize(Fl_Font(14));
	Fl_Output output56(470, 240, 200, 40); //malzonek
	output56.color(FL_GRAY);
	output56.textsize(Fl_Font(14));
	Fl_Output output57(470, 200, 200, 40);
	output57.color(FL_GRAY);
	output57.textsize(Fl_Font(10));
	Fl_Output output58(430, 340, 100, 40); //dziecko1
	output58.color(FL_GRAY);
	output58.textsize(Fl_Font(10));
	Fl_Output output59(430, 300, 100, 40);
	output59.color(FL_GRAY);
	output59.textsize(Fl_Font(10));
	Fl_Output output60(440, 440, 100, 40); //malzonek dziecka1
	output60.color(FL_GRAY);
	output60.textsize(Fl_Font(10));
	Fl_Output output61(440, 400, 100, 40);
	output61.color(FL_GRAY);
	output61.textsize(Fl_Font(10));
	Fl_Output output62(540, 340, 100, 40); //dziecko2
	output62.color(FL_GRAY);
	output62.textsize(Fl_Font(10));
	Fl_Output output63(540, 300, 100, 40);
	output63.color(FL_GRAY);
	output63.textsize(Fl_Font(10));
	Fl_Output output64(550, 440, 100, 40); //malzonek dziecka2
	output64.color(FL_GRAY);
	output64.textsize(Fl_Font(10));
	Fl_Output output65(550, 400, 100, 40);
	output65.color(FL_GRAY);
	output65.textsize(Fl_Font(10));
	Fl_Output output66(660, 340, 100, 40); //dziecko3
	output66.color(FL_GRAY);
	output66.textsize(Fl_Font(10));
	Fl_Output output67(660, 300, 100, 40);
	output67.color(FL_GRAY);
	output67.textsize(Fl_Font(10));
	Fl_Output output68(670, 440, 100, 40); //malzonek dziecka3
	output68.color(FL_GRAY);
	output68.textsize(Fl_Font(10));
	Fl_Output output69(670, 400, 100, 40);
	output69.color(FL_GRAY);
	output69.textsize(Fl_Font(10));

	Fl_Output output28(830, 140, 200, 40); //ciocia 2 mama
	output28.color(FL_GRAY);
	output28.textsize(Fl_Font(14));
	Fl_Output output29(830, 100, 200, 40);
	output29.color(FL_GRAY);
	output29.textsize(Fl_Font(14));
	Fl_Output output70(880, 200, 200, 40); //malzonek
	output70.color(FL_GRAY);
	output70.textsize(Fl_Font(14));
	Fl_Output output71(880, 240, 200, 40); 
	output71.color(FL_GRAY);
	output71.textsize(Fl_Font(14));
	Fl_Output output72(840, 300, 100, 40); //dziecko1
	output72.color(FL_GRAY);
	output72.textsize(Fl_Font(10));
	Fl_Output output73(840, 340, 100, 40); 
	output73.color(FL_GRAY);
	output73.textsize(Fl_Font(10));
	Fl_Output output74(850, 400, 100, 40); //malzonek dziecka1
	output74.color(FL_GRAY);
	output74.textsize(Fl_Font(10));
	Fl_Output output75(850, 440, 100, 40);
	output75.color(FL_GRAY);
	output75.textsize(Fl_Font(10));
	Fl_Output output76(950, 300, 100, 40); //dziecko2
	output76.color(FL_GRAY);
	output76.textsize(Fl_Font(10)); 
	Fl_Output output77(950, 340, 100, 40);
	output77.color(FL_GRAY);
	output77.textsize(Fl_Font(10));
	Fl_Output output78(960, 400, 100, 40); //malzonek dziecka2
	output78.color(FL_GRAY);
	output78.textsize(Fl_Font(10));
	Fl_Output output79(960, 440, 100, 40);
	output79.color(FL_GRAY);
	output79.textsize(Fl_Font(10));
	Fl_Output output80(1060, 300, 100, 40); //dziecko3
	output80.color(FL_GRAY);
	output80.textsize(Fl_Font(10));
	Fl_Output output81(1060, 340, 100, 40);
	output81.color(FL_GRAY);
	output81.textsize(Fl_Font(10));
	Fl_Output output82(1070, 400, 100, 40); //malzonek dziecko3
	output82.color(FL_GRAY);
	output82.textsize(Fl_Font(10));
	Fl_Output output83(1060, 440, 100, 40);
	output83.color(FL_GRAY);
	output83.textsize(Fl_Font(10));


	Fl_Output output30(1240, 140, 200, 40); //ciocia1 mama
	output30.color(FL_GRAY);
	output30.textsize(Fl_Font(14));
	Fl_Output output31(1240, 100, 200, 40);
	output31.color(FL_GRAY);
	output31.textsize(Fl_Font(14));
	Fl_Output output84(1290, 200, 200, 40); //malzonek
	output84.color(FL_GRAY);
	output84.textsize(Fl_Font(14));
	Fl_Output output85(1290, 240, 200, 40); 
	output85.color(FL_GRAY);
	output85.textsize(Fl_Font(14));
	Fl_Output output86(1250, 300, 100, 40); //dziecko1
	output86.color(FL_GRAY);
	output86.textsize(Fl_Font(10));
	Fl_Output output87(1250, 340, 100, 40); 
	output87.color(FL_GRAY);
	output87.textsize(Fl_Font(10));
	Fl_Output output88(1260, 400, 100, 40); //malzonek dziecko1
	output88.color(FL_GRAY);
	output88.textsize(Fl_Font(10));
	Fl_Output output89(1260, 440, 100, 40); 
	output89.color(FL_GRAY);
	output89.textsize(Fl_Font(10));
	Fl_Output output90(1360, 300, 100, 40); //dziecko2
	output90.color(FL_GRAY);
	output90.textsize(Fl_Font(10));
	Fl_Output output91(1360, 340, 100, 40); 
	output91.color(FL_GRAY);
	output91.textsize(Fl_Font(10));
	Fl_Output output92(1370, 400, 100, 40); //malzonek dziecko2
	output92.color(FL_GRAY);
	output92.textsize(Fl_Font(10));
	Fl_Output output93(1370, 440, 100, 40); 
	output93.color(FL_GRAY);
	output93.textsize(Fl_Font(10));
	Fl_Output output94(1470, 300, 100, 40); //dziecko3
	output94.color(FL_GRAY);
	output94.textsize(Fl_Font(10));
	Fl_Output output95(1470, 340, 100, 40); 
	output95.color(FL_GRAY);
	output95.textsize(Fl_Font(10));
	Fl_Output output96(1480, 400, 100, 40); //malzonek dziecko3
	output96.color(FL_GRAY);
	output96.textsize(Fl_Font(10));
	Fl_Output output97(1480, 440, 100, 40); 
	output97.color(FL_GRAY);
	output97.textsize(Fl_Font(10));



	Fl_Output output32(2410, 140, 200, 40); //ciocia1 tata
	output32.color(FL_GRAY);
	output32.textsize(Fl_Font(14));
	Fl_Output output33(2410, 100, 200, 40);
	output33.color(FL_GRAY);
	output33.textsize(Fl_Font(14));
	Fl_Output output328(2460, 200, 200, 40); //malzonek
	output328.color(FL_GRAY);
	output328.textsize(Fl_Font(14));
	Fl_Output output329(2460, 240, 200, 40);
	output329.color(FL_GRAY);
	output329.textsize(Fl_Font(14));
	Fl_Output output330(2420, 300, 100, 40);
	output330.color(FL_GRAY);
	output330.textsize(Fl_Font(10));
	Fl_Output output331(2420, 340, 100, 40);
	output331.color(FL_GRAY);
	output331.textsize(Fl_Font(10));
	Fl_Output output332(2430, 400, 100, 40); //malzonek dziecka1
	output332.color(FL_GRAY);
	output332.textsize(Fl_Font(10));
	Fl_Output output333(2430, 440, 100, 40);
	output333.color(FL_GRAY);
	output333.textsize(Fl_Font(10));
	Fl_Output output342(2530, 300, 100, 40); //dziecko2
	output342.color(FL_GRAY);
	output342.textsize(Fl_Font(10));
	Fl_Output output343(2530, 340, 100, 40);
	output343.color(FL_GRAY);
	output343.textsize(Fl_Font(10));
	Fl_Output output345(2540, 400, 100, 40); //malzonek dziecka2
	output345.color(FL_GRAY);
	output345.textsize(Fl_Font(10));
	Fl_Output output344(2540, 440, 100, 40);
	output344.color(FL_GRAY);
	output344.textsize(Fl_Font(10));
	Fl_Output output346(2640, 300, 100, 40); //dziecko3
	output346.color(FL_GRAY);
	output346.textsize(Fl_Font(10));
	Fl_Output output347(2640, 340, 100, 40);
	output347.color(FL_GRAY);
	output347.textsize(Fl_Font(10));
	Fl_Output output348(2650, 400, 100, 40); //malzonek dziecka3
	output348.color(FL_GRAY);
	output348.textsize(Fl_Font(10));
	Fl_Output output349(2650, 440, 100, 40);
	output349.color(FL_GRAY);
	output349.textsize(Fl_Font(10));

	
	Fl_Output output34(2820, 140, 200, 40); //ciocia2 tata
	output34.color(FL_GRAY);
	output34.textsize(Fl_Font(14));
	Fl_Output output35(2820, 100, 200, 40);
	output35.color(FL_GRAY);
	output35.textsize(Fl_Font(14));
	Fl_Output output322(2870, 200, 200, 40); //malzonek
	output322.color(FL_GRAY);
	output322.textsize(Fl_Font(14));
	Fl_Output output323(2870, 240, 200, 40);
	output323.color(FL_GRAY);
	output323.textsize(Fl_Font(14));
	Fl_Output output324(2830, 300, 100, 40);
	output324.color(FL_GRAY);
	output324.textsize(Fl_Font(10));
	Fl_Output output325(2830, 340, 100, 40);
	output325.color(FL_GRAY);
	output325.textsize(Fl_Font(10));
	Fl_Output output326(2840, 400, 100, 40); //malzonek dziecka1
	output326.color(FL_GRAY);
	output326.textsize(Fl_Font(10));
	Fl_Output output327(2840, 440, 100, 40);
	output327.color(FL_GRAY);
	output327.textsize(Fl_Font(10));
	Fl_Output output334(2940, 300, 100, 40); //dziecko2
	output334.color(FL_GRAY);
	output334.textsize(Fl_Font(10));
	Fl_Output output335(2940, 340, 100, 40); 
	output335.color(FL_GRAY);
	output335.textsize(Fl_Font(10));
	Fl_Output output336(2950, 400, 100, 40); //malzonek dziecka2
	output336.color(FL_GRAY);
	output336.textsize(Fl_Font(10));
	Fl_Output output337(2950, 440, 100, 40);
	output337.color(FL_GRAY);
	output337.textsize(Fl_Font(10));
	Fl_Output output338(3050, 300, 100, 40); //dziecko3
	output338.color(FL_GRAY);
	output338.textsize(Fl_Font(10));
	Fl_Output output339(3050, 340, 100, 40);
	output339.color(FL_GRAY);
	output339.textsize(Fl_Font(10));
	Fl_Output output340(3060, 400, 100, 40); //malzonek dziecka3
	output340.color(FL_GRAY);
	output340.textsize(Fl_Font(10));
	Fl_Output output341(3060, 440, 100, 40);
	output341.color(FL_GRAY);
	output341.textsize(Fl_Font(10));
	
	Fl_Output output36(3230, 140, 200, 40); //ciocia 3 tata
	output36.color(FL_GRAY);
	output36.textsize(Fl_Font(14));
	Fl_Output output37(3230, 100, 200, 40);
	output37.color(FL_GRAY);
	output37.textsize(Fl_Font(14));
	Fl_Output output316(3270, 200, 200, 40); //malzonek
	output316.color(FL_GRAY);
	output316.textsize(Fl_Font(14));
	Fl_Output output317(3270, 240, 200, 40);
	output317.color(FL_GRAY);
	output317.textsize(Fl_Font(14));
	Fl_Output output318(3240, 300, 100, 40);
	output318.color(FL_GRAY);
	output318.textsize(Fl_Font(10));
	Fl_Output output319(3240, 340, 100, 40);
	output319.color(FL_GRAY);
	output319.textsize(Fl_Font(10));
	Fl_Output output320(3250, 400, 100, 40); //malzonek dziecka1
	output320.color(FL_GRAY);
	output320.textsize(Fl_Font(10));
	Fl_Output output321(3250, 440, 100, 40);
	output321.color(FL_GRAY);
	output321.textsize(Fl_Font(10));
	Fl_Output output442(3350, 300, 100, 40); //dziecko2
	output442.color(FL_GRAY);
	output442.textsize(Fl_Font(10));
	Fl_Output output443(3350, 340, 100, 40);
	output443.color(FL_GRAY);
	output443.textsize(Fl_Font(10));
	Fl_Output output444(3360, 400, 100, 40); //malzonek dziecka2
	output444.color(FL_GRAY);
	output444.textsize(Fl_Font(10));
	Fl_Output output445(3360, 440, 100, 40);
	output445.color(FL_GRAY);
	output445.textsize(Fl_Font(10));
	Fl_Output output446(3460, 300, 100, 40); //dziecko3
	output446.color(FL_GRAY);
	output446.textsize(Fl_Font(10));
	Fl_Output output447(3460, 340, 100, 40);
	output447.color(FL_GRAY);
	output447.textsize(Fl_Font(10));
	Fl_Output output448(3470, 400, 100, 40); //malzonek dziecka3
	output448.color(FL_GRAY);
	output448.textsize(Fl_Font(10));
	Fl_Output output449(3470, 440, 100, 40);
	output449.color(FL_GRAY);
	output449.textsize(Fl_Font(10));

	Fl_Output output38(3640, 140, 200, 40); //ciocia4 tata
	output38.color(FL_GRAY);
	output38.textsize(Fl_Font(14));
	Fl_Output output39(3640, 100, 200, 40);
	output39.color(FL_GRAY);
	output39.textsize(Fl_Font(14));
	Fl_Output output310(3690, 200, 200, 40);
	output310.color(FL_GRAY);
	output310.textsize(Fl_Font(14));
	Fl_Output output311(3690, 240, 200, 40);
	output311.color(FL_GRAY);
	output311.textsize(Fl_Font(14));
	Fl_Output output312(3650, 300, 100, 40);
	output312.color(FL_GRAY);
	output312.textsize(Fl_Font(10));
	Fl_Output output313(3650, 340, 100, 40);
	output313.color(FL_GRAY);
	output313.textsize(Fl_Font(10));
	Fl_Output output314(3660, 400, 100, 40); //malzonek dziecka1
	output314.color(FL_GRAY);
	output314.textsize(Fl_Font(10));
	Fl_Output output315(3660, 440, 100, 40);
	output315.color(FL_GRAY);
	output315.textsize(Fl_Font(10));
	Fl_Output output350(3760, 300, 100, 40); //dziecko2
	output350.color(FL_GRAY);
	output350.textsize(Fl_Font(10));
	Fl_Output output351(3760, 340, 100, 40);
	output351.color(FL_GRAY);
	output351.textsize(Fl_Font(10));
	Fl_Output output352(3770, 400, 100, 40); //malzonek dziecka2
	output352.color(FL_GRAY);
	output352.textsize(Fl_Font(10));
	Fl_Output output353(3770, 440, 100, 40);
	output353.color(FL_GRAY);
	output353.textsize(Fl_Font(10));
	Fl_Output output354(3870, 300, 100, 40); //dziecko3
	output354.color(FL_GRAY);
	output354.textsize(Fl_Font(10));
	Fl_Output output355(3870, 340, 100, 40);
	output355.color(FL_GRAY);
	output355.textsize(Fl_Font(10));
	Fl_Output output356(3880, 400, 100, 40); //malzonek dziecka3
	output356.color(FL_GRAY);
	output356.textsize(Fl_Font(10));
	Fl_Output output357(3880, 440, 100, 40);
	output357.color(FL_GRAY);
	output357.textsize(Fl_Font(10));

	


	for (int k = 0; k <= 40; k++)
	{
		if (osoba[k].kto == "7" || osoba[k].kto == "7.") {
			if (strona1[k].strona == "2" || strona1[k].strona == "2.") {
				zmiennababciamama = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(char_arraybabciamama, zmiennababciamama.c_str());
				::output11 = &output3;
				output11->value(char_arraybabciamama);
				if (osoba[k].czy_umarla == 1) {
					babciamamasmierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(babciams, babciamamasmierc.c_str());
					::output13 = &output6;
					output13->value(babciams);
				}
			}
		}
		if (osoba[k].kto == "7" || osoba[k].kto == "7.") {
			if (strona1[k].strona == "1" || strona1[k].strona == "1.") {
				zmiennababciatata = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(char_arraybabciatata, zmiennababciatata.c_str());
				::output12 = &output4;
				output12->value(char_arraybabciatata);
				if (osoba[k].czy_umarla == 1) {
					babciatatasmierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(babciats, babciatatasmierc.c_str());
					::output14 = &output5;
					output14->value(babciams);
				}
			}
		}
		if (osoba[k].kto == "8" || osoba[k].kto == "8.") {
			if (strona1[k].strona == "2" || strona1[k].strona == "2.") {
				dzmama = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(dziadekm, dzmama.c_str());
				::output15 = &output9;
				output15->value(dziadekm);
				if (osoba[k].czy_umarla == 1) {
					dzmamasmierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(dziadekms, dzmamasmierc.c_str());
					::output16 = &output10;
					output16->value(dziadekms);
				}
			}
		}
		if (osoba[k].kto == "8" || osoba[k].kto == "8.") {
			if (strona1[k].strona == "1" || strona1[k].strona == "1.") {
				dztata = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(dziadekt, dztata.c_str());
				::output17 = &output7;
				output17->value(dziadekt);
				if (osoba[k].czy_umarla == 1) {
					dztatasmierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(dziadekts, dztatasmierc.c_str());
					::output18 = &output8;
					output18->value(dziadekts);
				}
			}
		}
		if (osoba[k].kto == "1" || osoba[k].kto == "1.") {
			mamadane = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
			strcpy_s(mamadane_ch, mamadane.c_str());
			::output19 = &output20;
			output19->value(mamadane_ch);
			if (osoba[k].czy_umarla == 1) {
				mamasmierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
				strcpy_s(mamasmierc_ch, mamasmierc.c_str());
				::output111 = &output21;
				output111->value(mamasmierc_ch);
			}
		}
		if (osoba[k].kto == "2" || osoba[k].kto == "2.") {
			tatadane = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
			strcpy_s(tatadane_ch, tatadane.c_str());
			::output112 = &output22;
			output112->value(tatadane_ch);
			if (osoba[k].czy_umarla == 1) {
				tatasmierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
				strcpy_s(tatasmierc_ch, tatasmierc.c_str());
				::output113 = &output23;
				output113->value(tatasmierc_ch);
			}
		}
		if (osoba[k].kto == "9" || osoba[k].kto == "9." || osoba[k].kto == "10" || osoba[k].kto == "10.") {
			if (strona1[k].strona == "2" || strona1[k].strona == "2.") {
				liczba_rodzenstwa_mama = liczba_rodzenstwa_mama + 1;
				ciocia1dane = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(ciocia1danech, ciocia1dane.c_str());
				::output114 = &output31;//ciocia1
				::output192 = &output29; //ciocia2
				::output117 = &output27; //ciocia3
				::output118 = &output25; //ciocia4
				::output124 = &output84; //malzonek ciocia1
				::output125 = &output85; //smierc malzonek ciocia1
				::output126 = &output70; //malzonek ciocia2
				::output127 = &output71; //smierc mmalzonek ciocia2
				::output128 = &output57; //malzonek ciocia3
				::output129 = &output56; //smierc malzonek ciocia3
				::output130 = &output41; //malzonek ciocia4
				::output131 = &output40; //smierc malzonek ciocia4

				if (liczba_rodzenstwa_mama == 1) {
					output114->value(ciocia1danech);
					int liczbakuzynow1 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia1malch, ciocia1mal.c_str());
						output124->value(ciocia1malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia1malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia1malsmiercch, ciocia1malsmierc.c_str());
							output125->value(ciocia1malsmiercch);
						}
						for (int b = 0; b <= 36; b++) {
							if (malzenstwo[k].imie == kuzyn[b].imie && strona1[k].strona == kuzyn[b].strona) {
								liczbakuzynow1 = liczbakuzynow1 + 1;
								if (liczbakuzynow1 == 1) {
									kuzyn1dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn1ch, kuzyn1dane.c_str());
									::output193 = &output86;
									output193->value(kuzyn1ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn1danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn1sch, kuzyn1danes.c_str());
										::output195 = &output87;
										output195->value(kuzyn1sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn1danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "."+malzenstwokuzyn[b].rok_mal;
										::output194 = &output88;
										strcpy_s(kuzyn1malch, kuzyn1danemal.c_str());
										output194->value(kuzyn1malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn1danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn1malsch, kuzyn1danemals.c_str());
											::output196 = &output89;
											output196->value(kuzyn1malsch);
										}
									}
								}
								if (liczbakuzynow1 == 2) {
									kuzyn2dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn2ch, kuzyn2dane.c_str());
									::output197 = &output90;
									output197->value(kuzyn2ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn2danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn2sch, kuzyn2danes.c_str());
										::output198 = &output91;
										output198->value(kuzyn2sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn2danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output199 = &output92;
										strcpy_s(kuzyn2malch, kuzyn2danemal.c_str());
										output199->value(kuzyn2malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn2danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn2malsch, kuzyn2danemals.c_str());
											::output200 = &output93;
											output200->value(kuzyn2malsch);
										}
									}
								}
								if (liczbakuzynow1 == 3) {
									kuzyn3dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn3ch, kuzyn3dane.c_str());
									::output211 = &output94;
									output211->value(kuzyn3ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn3danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn3sch, kuzyn3danes.c_str());
										::output212 = &output95;
										output212->value(kuzyn3sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn3danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output213 = &output96;
										strcpy_s(kuzyn3malch, kuzyn3danemal.c_str());
										output213->value(kuzyn3malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn3danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn3malsch, kuzyn3danemals.c_str());
											::output214 = &output97;
											output214->value(kuzyn3malsch);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow1 << endl;
				}
				
		
				if (liczba_rodzenstwa_mama == 2) {
					output192->value(ciocia1danech);
					int liczbakuzynow2 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia1malch, ciocia1mal.c_str());
						output126->value(ciocia1malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia1malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia1malsmiercch, ciocia1malsmierc.c_str());
							output127->value(ciocia1malsmiercch);
						}
						for (int b = 0; b <= 36; b++) {
							if (malzenstwo[k].imie == kuzyn[k].imie && strona1[b].strona == kuzyn[b].strona) {
								liczbakuzynow2 = liczbakuzynow2 + 1;
								if (liczbakuzynow2 == 1) {
									kuzyn4dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn4ch, kuzyn4dane.c_str());
									::output215 = &output72;
									output215->value(kuzyn4ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn4danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn4sch, kuzyn4danes.c_str());
										::output216 = &output73;
										output216->value(kuzyn4sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn4danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output217 = &output74;
										strcpy_s(kuzyn4malch, kuzyn4danemal.c_str());
										output217->value(kuzyn4malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn4danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn4malsch, kuzyn4danemals.c_str());
											::output218 = &output75;
											output218->value(kuzyn4malsch);
										}
									}
								}
								if (liczbakuzynow2 == 2) {
									kuzyn5dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn5ch, kuzyn5dane.c_str());
									::output219 = &output76;
									output219->value(kuzyn5ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn5danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn5sch, kuzyn5danes.c_str());
										::output220 = &output77;
										output220->value(kuzyn5sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn5danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output221 = &output78;
										strcpy_s(kuzyn5malch, kuzyn5danemal.c_str());
										output221->value(kuzyn5malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn5danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn5malsch, kuzyn5danemals.c_str());
											::output222 = &output79;
											output222->value(kuzyn5malsch);
										}
									}
								}
								if (liczbakuzynow2 == 3) {
									kuzyn6dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn6ch, kuzyn6dane.c_str());
									::output223 = &output80;
									output223->value(kuzyn6ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn6danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn6sch, kuzyn6danes.c_str());
										::output224 = &output81;
										output224->value(kuzyn6sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn6danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output225 = &output82;
										strcpy_s(kuzyn6malch, kuzyn6danemal.c_str());
										output225->value(kuzyn6malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn6danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn6malsch, kuzyn6danemals.c_str());
											::output226 = &output83;
											output226->value(kuzyn6malsch);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow2 << endl;
				}
						
				if (liczba_rodzenstwa_mama == 3) {
					output117->value(ciocia1danech);
					int liczbakuzynow3 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia1malch, ciocia1mal.c_str());
						output128->value(ciocia1malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia1malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia1malsmiercch, ciocia1malsmierc.c_str());
							output129->value(ciocia1malsmiercch);
						}
						for (int b = 0; b <= 36; b++) {
							if (malzenstwo[k].imie == kuzyn[b].imie && strona1[k].strona == kuzyn[b].strona) {
								liczbakuzynow3 = liczbakuzynow3 + 1;
								if (liczbakuzynow3 == 1) {
									kuzyn7dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn7ch, kuzyn7dane.c_str());
									::output227 = &output59;
									output227->value(kuzyn7ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn7danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn7sch, kuzyn7danes.c_str());
										::output228 = &output58;
										output228->value(kuzyn7sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn7danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output229 = &output61;
										strcpy_s(kuzyn7malch, kuzyn7danemal.c_str());
										output229->value(kuzyn7malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn7danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn7malsch, kuzyn7danemals.c_str());
											::output230 = &output60;
											output230->value(kuzyn7malsch);
										}
									}
								}
								if (liczbakuzynow3 == 2) {
									kuzyn8dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn8ch, kuzyn8dane.c_str());
									::output231 = &output63;
									output231->value(kuzyn8ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn8danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn8sch, kuzyn8danes.c_str());
										::output232 = &output62;
										output232->value(kuzyn8sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn8danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output233 = &output65;
										strcpy_s(kuzyn8malch, kuzyn8danemal.c_str());
										output233->value(kuzyn8malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn8danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn8malsch, kuzyn8danemals.c_str());
											::output234 = &output64;
											output234->value(kuzyn8malsch);
										}
									}
								}
								if (liczbakuzynow3 == 3) {
									kuzyn9dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn9ch, kuzyn9dane.c_str());
									::output235 = &output67;
									output235->value(kuzyn9ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn9danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn9sch, kuzyn9danes.c_str());
										::output236 = &output66;
										output236->value(kuzyn9sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn9danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output237 = &output69;
										strcpy_s(kuzyn9malch, kuzyn9danemal.c_str());
										output237->value(kuzyn9malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn9danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn9malsch, kuzyn9danemals.c_str());
											::output238 = &output68;
											output238->value(kuzyn9malsch);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow3 << endl;
				}
				
				if (liczba_rodzenstwa_mama == 4) {
					output118->value(ciocia1danech);
					int liczbakuzynow4 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia1malch, ciocia1mal.c_str());
						output130->value(ciocia1malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia1malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia1malsmiercch, ciocia1malsmierc.c_str());
							output131->value(ciocia1malsmiercch);
						}
						for (int b = 0; b <= 23; b++) {
							if (malzenstwo[k].imie == kuzyn[b].imie && strona1[k].strona == kuzyn[b].strona) {
								liczbakuzynow4 = liczbakuzynow4 + 1;
								if (liczbakuzynow4 == 1) {
									kuzyn10dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn10ch, kuzyn10dane.c_str());
									::output239 = &output43;
									output239->value(kuzyn10ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn10danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn10sch, kuzyn10danes.c_str());
										::output240 = &output42;
										output240->value(kuzyn10sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn10danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output241 = &output45;
										strcpy_s(kuzyn10malch, kuzyn10danemal.c_str());
										output241->value(kuzyn10malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn10danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn10malsch, kuzyn10danemals.c_str());
											::output242 = &output44;
											output242->value(kuzyn10malsch);
										}
									}
								}
								if (liczbakuzynow4 == 2) {
									kuzyn11dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn11ch, kuzyn11dane.c_str());
									::output243 = &output47;
									output243->value(kuzyn11ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn11danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn11sch, kuzyn11danes.c_str());
										::output244 = &output46;
										output244->value(kuzyn11sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn11danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output245 = &output49;
										strcpy_s(kuzyn11malch, kuzyn11danemal.c_str());
										output245->value(kuzyn11malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn11danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn11malsch, kuzyn11danemals.c_str());
											::output246 = &output48;
											output246->value(kuzyn11malsch);
										}
									}
								}
								if (liczbakuzynow4 == 3) {
									kuzyn12dane = kuzyn[b].imie_kuzyna + " ur." + kuzyn[b].dzien_urodzenia_kuzyna + "." + kuzyn[b].miesiac_urodzenia_kuzyna + "." + kuzyn[b].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn12ch, kuzyn12dane.c_str());
									::output247 = &output51;
									output247->value(kuzyn12ch);
									if (kuzyn[b].czy_umarl_kuzyn == 1) {
										kuzyn12danes = "zm." + smierc_kuzyn[b].dzien_zgonu + "." + smierc_kuzyn[b].miesiac_zgonu + "." + smierc_kuzyn[b].rok_zgonu;
										strcpy_s(kuzyn12sch, kuzyn12danes.c_str());
										::output248 = &output50;
										output248->value(kuzyn12sch);
									}
									if (malzenstwokuzyn[b].czy_malzonek == 1) {
										kuzyn12danemal = malzenstwokuzyn[b].imie_mal + " ur." + malzenstwokuzyn[b].dzien_mal + "." + malzenstwokuzyn[b].miesiac_mal + "." + malzenstwokuzyn[b].rok_mal;
										::output249 = &output53;
										strcpy_s(kuzyn12malch, kuzyn12danemal.c_str());
										output249->value(kuzyn12malch);
										if (malzenstwokuzyn[b].czy_umarl_mal == 1) {
											kuzyn12danemals = "zm." + smierc_kuzynmal[b].dzien_zgonu + "." + smierc_kuzynmal[b].miesiac_zgonu + "." + smierc_kuzynmal[b].rok_zgonu;
											strcpy_s(kuzyn12malsch, kuzyn12danemals.c_str());
											::output250 = &output52;
											output250->value(kuzyn12malsch);
										}
									}
								}

							}
						}
					}
						cout << liczbakuzynow4 << endl;
				}
			
				if (osoba[k].czy_umarla == 1) {
					ciocia1smierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(ciocia1sch, ciocia1smierc.c_str());
					::output115 = &output30; //ciocia1
					::output119 = &output28; //ciocia2
					::output120 = &output26; //ciocia3
					::output121 = &output24; //ciocia4
					if (liczba_rodzenstwa_mama == 1) {
						output115->value(ciocia1sch);
					}
					if (liczba_rodzenstwa_mama == 2) {
						output119->value(ciocia1sch);
					}
					if (liczba_rodzenstwa_mama == 3) {
						output120->value(ciocia1sch);
					}
					if (liczba_rodzenstwa_mama == 4) {
						output121->value(ciocia1sch);
					}

				}

			}
		}

		if (osoba[k].kto == "9" || osoba[k].kto == "9." || osoba[k].kto == "10" || osoba[k].kto == "10.") {
			if (strona1[k].strona == "1" || strona1[k].strona == "1.") {
				liczba_rodzenstwa_tata = liczba_rodzenstwa_tata + 1;
				ciocia2dane = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(ciocia2danech, ciocia2dane.c_str());
				::output251 = &output33;//ciocia1
				::output252 = &output35; //ciocia2
				::output253 = &output37; //ciocia3
				::output254 = &output39; //ciocia4
				::output255 = &output328; //malzonek ciocia1
				::output256 = &output329; //smierc malzonek ciocia1
				::output257 = &output322; //malzonek ciocia2
				::output258 = &output323; //smierc mmalzonek ciocia2
				::output259 = &output316; //malzonek ciocia3
				::output260 = &output317; //smierc malzonek ciocia3
				::output261 = &output310; //malzonek ciocia4
				::output262 = &output311; //smierc malzonek ciocia4

				if (liczba_rodzenstwa_tata == 1) {
					output251->value(ciocia2danech);
					int liczbakuzynow11 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia2mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia2malch, ciocia2mal.c_str());
						output255->value(ciocia2malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia2malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia2malsmiercch, ciocia2malsmierc.c_str());
							output256->value(ciocia2malsmiercch);
						}
						for (int c = 0; c <= 36; c++) {
							if (malzenstwo[k].imie == kuzyn[c].imie && strona1[k].strona == kuzyn[c].strona) {
								liczbakuzynow11 = liczbakuzynow11 + 1;
								if (liczbakuzynow11 == 1) {
									kuzyn1dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn1ch1, kuzyn1dane1.c_str());
									::output263 = &output330;
									output263->value(kuzyn1ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn1danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn1sch1, kuzyn1danes1.c_str());
										::output264 = &output331;
										output264->value(kuzyn1sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn1danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output265 = &output332;
										strcpy_s(kuzyn1malch1, kuzyn1danemal1.c_str());
										output265->value(kuzyn1malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn1danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn1malsch1, kuzyn1danemals1.c_str());
											::output266 = &output333;
											output266->value(kuzyn1malsch1);
										}
									}
								}
								if (liczbakuzynow11 == 2) {
									kuzyn2dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn2ch1, kuzyn2dane1.c_str());
									::output267 = &output342;
									output267->value(kuzyn2ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn2danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn2sch1, kuzyn2danes1.c_str());
										::output268 = &output343;
										output268->value(kuzyn2sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn2danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output267 = &output345;
										strcpy_s(kuzyn2malch1, kuzyn2danemal1.c_str());
										output267->value(kuzyn2malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn2danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn2malsch1, kuzyn2danemals1.c_str());
											::output268 = &output344;
											output268->value(kuzyn2malsch1);
										}
									}
								}
								if (liczbakuzynow11 == 3) {
									kuzyn3dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn3ch1, kuzyn3dane1.c_str());
									::output269 = &output346;
									output269->value(kuzyn3ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn3danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn3sch1, kuzyn3danes1.c_str());
										::output270 = &output347;
										output270->value(kuzyn3sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn3danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output271 = &output348;
										strcpy_s(kuzyn3malch1, kuzyn3danemal1.c_str());
										output271->value(kuzyn3malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn3danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn3malsch1, kuzyn3danemals1.c_str());
											::output271 = &output349;
											output271->value(kuzyn3malsch1);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow11 << endl;
				}


				if (liczba_rodzenstwa_tata == 2) {
					output252->value(ciocia2danech);
					int liczbakuzynow21 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia2mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia2malch, ciocia2mal.c_str());
						output257->value(ciocia2malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia2malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia2malsmiercch, ciocia2malsmierc.c_str());
							output258->value(ciocia2malsmiercch);
						}
						for (int c = 0; c <= 36; c++) {
							if (malzenstwo[k].imie == kuzyn[k].imie && strona1[c].strona == kuzyn[c].strona) {
								liczbakuzynow21 = liczbakuzynow21 + 1;
								if (liczbakuzynow21 == 1) {
									kuzyn4dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn4ch1, kuzyn4dane1.c_str());
									::output272 = &output324;
									output272->value(kuzyn4ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn4danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn4sch1, kuzyn4danes1.c_str());
										::output273 = &output325;
										output273->value(kuzyn4sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn4danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output273 = &output326;
										strcpy_s(kuzyn4malch1, kuzyn4danemal1.c_str());
										output273->value(kuzyn4malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn4danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn4malsch1, kuzyn4danemals1.c_str());
											::output274 = &output327;
											output274->value(kuzyn4malsch1);
										}
									}
								}
								if (liczbakuzynow21 == 2) {
									kuzyn5dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn5ch1, kuzyn5dane1.c_str());
									::output275 = &output334;
									output275->value(kuzyn5ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn5danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn5sch1, kuzyn5danes1.c_str());
										::output276 = &output335;
										output276->value(kuzyn5sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn5danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output277 = &output336;
										strcpy_s(kuzyn5malch1, kuzyn5danemal1.c_str());
										output277->value(kuzyn5malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn5danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn5malsch1, kuzyn5danemals1.c_str());
											::output278 = &output337;
											output278->value(kuzyn5malsch1);
										}
									}
								}
								if (liczbakuzynow21 == 3) {
									kuzyn6dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn6ch1, kuzyn6dane1.c_str());
									::output279 = &output338;
									output279->value(kuzyn6ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn6danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn6sch1, kuzyn6danes1.c_str());
										::output280 = &output339;
										output280->value(kuzyn6sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn6danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output281 = &output340;
										strcpy_s(kuzyn6malch1, kuzyn6danemal1.c_str());
										output281->value(kuzyn6malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn6danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn6malsch1, kuzyn6danemals1.c_str());
											::output282 = &output341;
											output282->value(kuzyn6malsch1);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow21 << endl;
				}

				if (liczba_rodzenstwa_tata == 3) {
					output253->value(ciocia2danech);
					int liczbakuzynow31 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia2mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia2malch, ciocia2mal.c_str());
						output259->value(ciocia2malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia2malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia2malsmiercch, ciocia2malsmierc.c_str());
							output260->value(ciocia2malsmiercch);
						}
						for (int c = 0; c <= 36; c++) {
							if (malzenstwo[k].imie == kuzyn[c].imie && strona1[k].strona == kuzyn[c].strona) {
								liczbakuzynow31 = liczbakuzynow31 + 1;
								if (liczbakuzynow31 == 1) {
									kuzyn7dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn7ch1, kuzyn7dane1.c_str());
									::output287 = &output318;
									output287->value(kuzyn7ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn7danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn7sch1, kuzyn7danes1.c_str());
										::output288 = &output319;
										output288->value(kuzyn7sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn7danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output289 = &output320;
										strcpy_s(kuzyn7malch1, kuzyn7danemal1.c_str());
										output289->value(kuzyn7malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn7danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn7malsch1, kuzyn7danemals1.c_str());
											::output290 = &output321;
											output290->value(kuzyn7malsch1);
										}
									}
								}
								if (liczbakuzynow31 == 2) {
									kuzyn8dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn8ch1, kuzyn8dane1.c_str());
									::output291 = &output442;
									output291->value(kuzyn8ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn8danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn8sch1, kuzyn8danes1.c_str());
										::output292 = &output443;
										output292->value(kuzyn8sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn8danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output293 = &output444;
										strcpy_s(kuzyn8malch1, kuzyn8danemal1.c_str());
										output293->value(kuzyn8malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn8danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn8malsch1, kuzyn8danemals1.c_str());
											::output294 = &output445;
											output294->value(kuzyn8malsch1);
										}
									}
								}
								if (liczbakuzynow31 == 3) {
									kuzyn9dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn9ch1, kuzyn9dane1.c_str());
									::output295 = &output446;
									output295->value(kuzyn9ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn9danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn9sch1, kuzyn9danes1.c_str());
										::output296 = &output447;
										output296->value(kuzyn9sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn9danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output297 = &output448;
										strcpy_s(kuzyn9malch1, kuzyn9danemal1.c_str());
										output297->value(kuzyn9malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn9danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn9malsch1, kuzyn9danemals1.c_str());
											::output298 = &output449;
											output298->value(kuzyn9malsch1);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow31 << endl;
				}

				if (liczba_rodzenstwa_tata == 4) {
					output254->value(ciocia2danech);
					int liczbakuzynow41 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia2mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia2malch, ciocia2mal.c_str());
						output261->value(ciocia2malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia2malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia2malsmiercch, ciocia2malsmierc.c_str());
							output262->value(ciocia2malsmiercch);
						}
						for (int c = 0; c <= 23; c++) {
							if (malzenstwo[k].imie == kuzyn[c].imie && strona1[k].strona == kuzyn[c].strona) {
								liczbakuzynow41 = liczbakuzynow41 + 1;
								if (liczbakuzynow41 == 1) {
									kuzyn10dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn10ch1, kuzyn10dane1.c_str());
									::output299 = &output312;
									output299->value(kuzyn10ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn10danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn10sch1, kuzyn10danes1.c_str());
										::output500 = &output313;
										output500->value(kuzyn10sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn10danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output511 = &output314;
										strcpy_s(kuzyn10malch1, kuzyn10danemal1.c_str());
										output511->value(kuzyn10malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn10danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn10malsch1, kuzyn10danemals1.c_str());
											::output512 = &output315;
											output512->value(kuzyn10malsch1);
										}
									}
								}
								if (liczbakuzynow41== 2) {
									kuzyn11dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn11ch1, kuzyn11dane1.c_str());
									::output513 = &output350;
									output513->value(kuzyn11ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn11danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn11sch1, kuzyn11danes1.c_str());
										::output514 = &output351;
										output514->value(kuzyn11sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn11danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output515 = &output352;
										strcpy_s(kuzyn11malch1, kuzyn11danemal1.c_str());
										output515->value(kuzyn11malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn11danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn11malsch1, kuzyn11danemals1.c_str());
											::output516 = &output353;
											output516->value(kuzyn11malsch1);
										}
									}
								}
								if (liczbakuzynow41 == 3) {
									kuzyn12dane1 = kuzyn[c].imie_kuzyna + " ur." + kuzyn[c].dzien_urodzenia_kuzyna + "." + kuzyn[c].miesiac_urodzenia_kuzyna + "." + kuzyn[c].rok_urodzenia_kuzyna;
									strcpy_s(kuzyn12ch1, kuzyn12dane1.c_str());
									::output517 = &output354;
									output517->value(kuzyn12ch1);
									if (kuzyn[c].czy_umarl_kuzyn == 1) {
										kuzyn12danes1 = "zm." + smierc_kuzyn[c].dzien_zgonu + "." + smierc_kuzyn[c].miesiac_zgonu + "." + smierc_kuzyn[c].rok_zgonu;
										strcpy_s(kuzyn12sch1, kuzyn12danes1.c_str());
										::output518 = &output355;
										output518->value(kuzyn12sch1);
									}
									if (malzenstwokuzyn[c].czy_malzonek == 1) {
										kuzyn12danemal1 = malzenstwokuzyn[c].imie_mal + " ur." + malzenstwokuzyn[c].dzien_mal + "." + malzenstwokuzyn[c].miesiac_mal + "." + malzenstwokuzyn[c].rok_mal;
										::output519 = &output356;
										strcpy_s(kuzyn12malch1, kuzyn12danemal1.c_str());
										output519->value(kuzyn12malch1);
										if (malzenstwokuzyn[c].czy_umarl_mal == 1) {
											kuzyn12danemals1 = "zm." + smierc_kuzynmal[c].dzien_zgonu + "." + smierc_kuzynmal[c].miesiac_zgonu + "." + smierc_kuzynmal[c].rok_zgonu;
											strcpy_s(kuzyn12malsch1, kuzyn12danemals1.c_str());
											::output520 = &output357;
											output520->value(kuzyn12malsch1);
										}
									}
								}

							}
						}
					}
					cout << liczbakuzynow41 << endl;
				}

				if (osoba[k].czy_umarla == 1) {
					ciocia2smierc = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(ciocia2sch, ciocia2smierc.c_str());
					::output283 = &output32; //ciocia1
					::output284 = &output34; //ciocia2
					::output285 = &output36; //ciocia3
					::output286 = &output38; //ciocia4
					if (liczba_rodzenstwa_tata == 1) {
						output283->value(ciocia2sch);
					}
					if (liczba_rodzenstwa_tata == 2) {
						output284->value(ciocia2sch);
					}
					if (liczba_rodzenstwa_tata == 3) {
						output285->value(ciocia2sch);
					}
					if (liczba_rodzenstwa_tata == 4) {
						output286->value(ciocia2sch);
					}

				}

			}
		}

		if (osoba[k].kto == "11." || osoba[k].kto == "11" || osoba[k].kto == "12" || osoba[k].kto == "12.") {
			mal = osoba[k].imie + " ur. " + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
			::output122 = &output54;
			::output123 = &output55;
			if (osoba[k].czy_umarla == 1) {
				mals = "zm. " + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
				strcpy_s(malsch, mals.c_str());
				output123->value(malsch);
			}
			strcpy_s(malch, mal.c_str());
			output122->value(malch);
		}

		if (osoba[k].kto == "5." || osoba[k].kto == "5" || osoba[k].kto == "6." || osoba[k].kto == "6") {
			liczba_dzieci = liczba_dzieci + 1;
			if (liczba_dzieci == 1) {
				dziecko1 = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(dziecko1ch, dziecko1.c_str());
				::output180 = &output98;
				::output181 = &output99;
				::output182 = &output304;
				::output183 = &output305;
				output180->value(dziecko1ch);
				if (osoba[k].czy_umarla == 1) {
					dziecko1s = "zm." + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_urodzenia;
					strcpy_s(dziecko1sch, dziecko1s.c_str());
					output181->value(dziecko1sch);
				}
				if (malzenstwo[k].czy_malzonek == 1) {
					dziecko1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
					strcpy_s(dziecko1malch, dziecko1mal.c_str());
					output182->value(dziecko1malch);
					if (malzenstwo[k].czy_umarl_mal == 1) {
						dziecko1mals = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
						strcpy_s(dziecko1malsch, dziecko1mals.c_str());
						output183->value(dziecko1malsch);
					}
				}

			}
			if (liczba_dzieci == 2) {
				dziecko2 = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(dziecko2ch, dziecko2.c_str());
				::output184 = &output300;
				::output185 = &output301;
				::output186 = &output308;
				::output187 = &output309;
				output184->value(dziecko2ch);
				if (osoba[k].czy_umarla == 1) {
					dziecko2s = "zm." + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_urodzenia;
					strcpy_s(dziecko2sch, dziecko2s.c_str());
					output185->value(dziecko2sch);
				}
				if (malzenstwo[k].czy_malzonek == 1) {
					dziecko2mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
					strcpy_s(dziecko2malch, dziecko2mal.c_str());
					output186->value(dziecko2malch);
					if (malzenstwo[k].czy_umarl_mal == 1) {
						dziecko2mals = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
						strcpy_s(dziecko2malsch, dziecko2mals.c_str());
						output187->value(dziecko2malsch);
					}
				}
			}
			if (liczba_dzieci == 3) {
				dziecko3 = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(dziecko3ch, dziecko3.c_str());
				::output188 = &output302;
				::output189 = &output303;
				::output190 = &output306;
				::output191 = &output307;
				output188->value(dziecko3ch);
				if (osoba[k].czy_umarla == 1) {
					dziecko3s = "zm." + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_urodzenia;
					strcpy_s(dziecko3sch, dziecko3s.c_str());
					output189->value(dziecko3sch);
				}
				if (malzenstwo[k].czy_malzonek == 1) {
					dziecko3mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
					strcpy_s(dziecko3malch, dziecko3mal.c_str());
					output190->value(dziecko3malch);
					if (malzenstwo[k].czy_umarl_mal == 1) {
						dziecko3mals = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
						strcpy_s(dziecko3malsch, dziecko3mals.c_str());
						output191->value(dziecko3malsch);
					}
				}
			}

		}
		if (osoba[k].kto == "3" || osoba[k].kto == "4" || osoba[k].kto == "3." || osoba[k].kto == "4.") {
			moje_rodzenstwo = moje_rodzenstwo + 1;
			if (moje_rodzenstwo == 1) {
				brat1 = osoba[k].imie + " ur." + osoba[k].dzien_urodzenia + "." + osoba[k].miesiac_urodzenia + "." + osoba[k].rok_urodzenia;
				strcpy_s(brat1ch, brat1.c_str());
				if (osoba[k].czy_umarla == 1) {
					brat1s = "zm." + smierc[k].dzien_zgonu + "." + smierc[k].miesiac_zgonu + "." + smierc[k].rok_zgonu;
					strcpy_s(brat1sch, brat1s.c_str());
				}
				if (malzenstwo[k].czy_malzonek == 1) {
					brat1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal +"." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
					strcpy_s(brat1malch, brat1mal.c_str());
					if (malzenstwo[k].czy_umarl_mal == 1) {
						brat1mals = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
						strcpy_s(brat1malsch, brat1mals.c_str());
					}
					
				}
			}
		}
	}
	window->show();
	return Fl::run();
}

