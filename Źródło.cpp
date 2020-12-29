
//BIBLIOTEKI FLTK DO RYSOWANIA
#include<FL/Fl.h> //DO UTWORZENIA INTERFEJSU GRAFICZNEGO
#include<FL/Fl_Box.h> //
#include<FL/Fl_Window.h> //DO UTWORZENIA OKNA
#include <FL/fl_draw.H>
#include <FL/Fl_Output.H> //DO WYPISANIA SANYCH W INTERFEJSIE
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
	Kuzyn kuzyn[40];

	Malzenstwo malzenstwokuzyn[23];
	Smierc smierc_kuzyn[23];
	Smierc smierc_kuzynmal[23];

	//Drzewo drzewo[21];

	int suma_kuzynow = 0;
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


	Fl_Window* window = new Fl_Window(3840, 930, "Drzewo");
	window->color(FL_GRAY);
	
	Fl_Output output2(1820, 400, 200, 40); //ja
	output2.color(FL_RED);
	output2.textsize(Fl_Font(14));
	::output1 = &output2;
	output1->value(char_arrayty);

	Fl_Output output54(1830, 450, 200, 40); //moj malzonek
	output54.textsize(Fl_Font(14));
	output54.color(FL_GRAY);
	Fl_Output output55(1830, 490, 200, 40); 
	output55.textsize(Fl_Font(14));
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
	output300.textsize(Fl_Font(12));
	Fl_Output output301(1930, 590, 100, 40);
	output301.color(FL_GRAY);
	output301.textsize(Fl_Font(12));
	Fl_Output output308(1940, 650, 100, 40);
	output308.color(FL_GRAY);
	output308.textsize(Fl_Font(12));
	Fl_Output output309(1940, 690, 100, 40);
	output309.color(FL_GRAY);
	output309.textsize(Fl_Font(12));

	Fl_Output output302(2040, 550, 100, 40); //moje dziecko 3
	output302.color(FL_GRAY);
	output302.textsize(Fl_Font(12));
	Fl_Output output303(2040, 590, 100, 40);
	output303.color(FL_GRAY);
	output303.textsize(Fl_Font(12));
	Fl_Output output306(2050, 650, 100, 40);
	output306.color(FL_GRAY);
	output306.textsize(Fl_Font(12));
	Fl_Output output307(2050, 690, 100, 40);
	output307.color(FL_GRAY);
	output307.textsize(Fl_Font(12));

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
	output41.textsize(Fl_Font(12));
	Fl_Output output42(1, 340, 100, 40); //dziecko1
	output42.color(FL_GRAY);
	output42.textsize(Fl_Font(12));
	Fl_Output output43(1, 300, 100, 40);
	output43.color(FL_GRAY);
	output43.textsize(Fl_Font(12));
	Fl_Output output44(10, 440, 100, 40); //malzonek dziecka1
	output44.color(FL_GRAY);
	output44.textsize(Fl_Font(12));
	Fl_Output output45(10, 400, 100, 40);
	output45.color(FL_GRAY);
	output45.textsize(Fl_Font(12));
	Fl_Output output46(120, 340, 100, 40); //dziecko2
	output46.color(FL_GRAY);
	output46.textsize(Fl_Font(12));
	Fl_Output output47(120, 300, 100, 40);
	output47.color(FL_GRAY);
	output47.textsize(Fl_Font(12));
	Fl_Output output48(130, 440, 100, 40); //malzonek dziecka2
	output48.color(FL_GRAY);
	output48.textsize(Fl_Font(12));
	Fl_Output output49(130, 400, 100, 40);
	output49.color(FL_GRAY);
	output49.textsize(Fl_Font(12));
	Fl_Output output50(240, 340, 100, 40); //dziecko3
	output50.color(FL_GRAY);
	output50.textsize(Fl_Font(12));
	Fl_Output output51(240, 300, 100, 40);
	output51.color(FL_GRAY);
	output51.textsize(Fl_Font(12));
	Fl_Output output52(250, 440, 100, 40); //malzonek dziecka3
	output52.color(FL_GRAY);
	output52.textsize(Fl_Font(12));
	Fl_Output output53(250, 400, 100, 40);
	output53.color(FL_GRAY);
	output53.textsize(Fl_Font(12));


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
	output57.textsize(Fl_Font(12));
	Fl_Output output58(430, 340, 100, 40); //dziecko1
	output58.color(FL_GRAY);
	output58.textsize(Fl_Font(12));
	Fl_Output output59(430, 300, 100, 40);
	output59.color(FL_GRAY);
	output59.textsize(Fl_Font(12));
	Fl_Output output60(440, 440, 100, 40); //malzonek dziecka1
	output60.color(FL_GRAY);
	output60.textsize(Fl_Font(12));
	Fl_Output output61(440, 400, 100, 40);
	output61.color(FL_GRAY);
	output61.textsize(Fl_Font(12));
	Fl_Output output62(540, 340, 100, 40); //dziecko2
	output62.color(FL_GRAY);
	output62.textsize(Fl_Font(12));
	Fl_Output output63(540, 300, 100, 40);
	output63.color(FL_GRAY);
	output63.textsize(Fl_Font(12));
	Fl_Output output64(550, 440, 100, 40); //malzonek dziecka2
	output64.color(FL_GRAY);
	output64.textsize(Fl_Font(12));
	Fl_Output output65(550, 400, 100, 40);
	output65.color(FL_GRAY);
	output65.textsize(Fl_Font(12));
	Fl_Output output66(660, 340, 100, 40); //dziecko3
	output66.color(FL_GRAY);
	output66.textsize(Fl_Font(12));
	Fl_Output output67(660, 300, 100, 40);
	output67.color(FL_GRAY);
	output67.textsize(Fl_Font(12));
	Fl_Output output68(670, 440, 100, 40); //malzonek dziecka3
	output68.color(FL_GRAY);
	output68.textsize(Fl_Font(12));
	Fl_Output output69(670, 400, 100, 40);
	output69.color(FL_GRAY);
	output69.textsize(Fl_Font(12));

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
	output72.textsize(Fl_Font(12));
	Fl_Output output73(840, 340, 100, 40); 
	output73.color(FL_GRAY);
	output73.textsize(Fl_Font(12));
	Fl_Output output74(850, 400, 100, 40); //malzonek dziecka1
	output74.color(FL_GRAY);
	output74.textsize(Fl_Font(12));
	Fl_Output output75(850, 440, 100, 40);
	output75.color(FL_GRAY);
	output75.textsize(Fl_Font(12));
	Fl_Output output76(950, 300, 100, 40); //dziecko2
	output76.color(FL_GRAY);
	output76.textsize(Fl_Font(12)); 
	Fl_Output output77(950, 340, 100, 40);
	output77.color(FL_GRAY);
	output77.textsize(Fl_Font(12));
	Fl_Output output78(960, 400, 100, 40); //malzonek dziecka2
	output78.color(FL_GRAY);
	output78.textsize(Fl_Font(12));
	Fl_Output output79(960, 440, 100, 40);
	output79.color(FL_GRAY);
	output79.textsize(Fl_Font(12));
	Fl_Output output80(1060, 300, 100, 40); //dziecko3
	output80.color(FL_GRAY);
	output80.textsize(Fl_Font(12));
	Fl_Output output81(1060, 340, 100, 40);
	output81.color(FL_GRAY);
	output81.textsize(Fl_Font(12));
	Fl_Output output82(1070, 400, 100, 40); //malzonek dziecko3
	output82.color(FL_GRAY);
	output82.textsize(Fl_Font(12));
	Fl_Output output83(1060, 440, 100, 40);
	output83.color(FL_GRAY);
	output83.textsize(Fl_Font(12));


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
	output86.textsize(Fl_Font(12));
	Fl_Output output87(1250, 340, 100, 40); 
	output87.color(FL_GRAY);
	output87.textsize(Fl_Font(12));
	Fl_Output output88(1260, 400, 100, 40); //malzonek dziecko1
	output88.color(FL_GRAY);
	output88.textsize(Fl_Font(12));
	Fl_Output output89(1260, 440, 100, 40); 
	output89.color(FL_GRAY);
	output89.textsize(Fl_Font(12));
	Fl_Output output90(1360, 300, 100, 40); //dziecko2
	output90.color(FL_GRAY);
	output90.textsize(Fl_Font(12));
	Fl_Output output91(1360, 340, 100, 40); 
	output91.color(FL_GRAY);
	output91.textsize(Fl_Font(12));
	Fl_Output output92(1370, 400, 100, 40); //malzonek dziecko2
	output92.color(FL_GRAY);
	output92.textsize(Fl_Font(12));
	Fl_Output output93(1370, 440, 100, 40); 
	output93.color(FL_GRAY);
	output93.textsize(Fl_Font(12));
	Fl_Output output94(1470, 300, 100, 40); //dziecko3
	output94.color(FL_GRAY);
	output94.textsize(Fl_Font(12));
	Fl_Output output95(1470, 340, 100, 40); 
	output95.color(FL_GRAY);
	output95.textsize(Fl_Font(12));
	Fl_Output output96(1480, 400, 100, 40); //malzonek dziecko3
	output96.color(FL_GRAY);
	output96.textsize(Fl_Font(12));
	Fl_Output output97(1480, 440, 100, 40); 
	output97.color(FL_GRAY);
	output97.textsize(Fl_Font(12));

	Fl_Output output32(2410, 140, 200, 40); //ciocia1 tata
	output32.color(FL_GRAY);
	output32.textsize(Fl_Font(14));
	Fl_Output output33(2410, 100, 200, 40);
	output33.color(FL_GRAY);
	output33.textsize(Fl_Font(14));
	
	Fl_Output output34(2820, 140, 200, 40); //ciocia2 tata
	output34.color(FL_GRAY);
	output34.textsize(Fl_Font(14));
	Fl_Output output35(2820, 100, 200, 40);
	output35.color(FL_GRAY);
	output35.textsize(Fl_Font(14));
	
	Fl_Output output36(3230, 140, 200, 40); //ciocia 3 tata
	output36.color(FL_GRAY);
	output36.textsize(Fl_Font(14));
	Fl_Output output37(3230, 100, 200, 40);
	output37.color(FL_GRAY);
	output37.textsize(Fl_Font(14));

	Fl_Output output38(3640, 140, 200, 40); //ciocia4 tata
	output38.color(FL_GRAY);
	output38.textsize(Fl_Font(14));
	Fl_Output output39(3640, 100, 200, 40);
	output39.color(FL_GRAY);
	output39.textsize(Fl_Font(14));

	


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
						for (int b = 0; b <= 23; b++) {
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
					int liczbakuzynow1 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia1malch, ciocia1mal.c_str());
						output126->value(ciocia1malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia1malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia1malsmiercch, ciocia1malsmierc.c_str());
							output127->value(ciocia1malsmiercch);
						}
						for (int b = 0; b <= 23; b++) {
							if (malzenstwo[k].imie == kuzyn[k].imie && strona1[b].strona == kuzyn[b].strona) {
								liczbakuzynow1 = liczbakuzynow1 + 1;
							}
						}
						cout << liczbakuzynow1 << endl;
					}
				}
				if (liczba_rodzenstwa_mama == 3) {
					output117->value(ciocia1danech);
					int liczbakuzynow1 = 0;
					if (malzenstwo[k].czy_malzonek == 1) {
						ciocia1mal = malzenstwo[k].imie_mal + " ur." + malzenstwo[k].dzien_mal + "." + malzenstwo[k].miesiac_mal + "." + malzenstwo[k].rok_mal;
						strcpy_s(ciocia1malch, ciocia1mal.c_str());
						output128->value(ciocia1malch);
						if (malzenstwo[k].czy_umarl_mal == 1) {
							ciocia1malsmierc = "zm." + smierc_malzonka[k].dzien_zgonu + "." + smierc_malzonka[k].miesiac_zgonu + "." + smierc_malzonka[k].rok_zgonu;
							strcpy_s(ciocia1malsmiercch, ciocia1malsmierc.c_str());
							output129->value(ciocia1malsmiercch);
						}
						for (int b = 0; b <= 23; b++) {
							if (malzenstwo[k].imie == kuzyn[b].imie && strona1[k].strona == kuzyn[b].strona) {
								liczbakuzynow1 = liczbakuzynow1 + 1;
							}
						}
						cout << liczbakuzynow1 << endl;
					}
				}
			
				if (liczba_rodzenstwa_mama == 4) {
					output118->value(ciocia1danech);
					int liczbakuzynow1 = 0;
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
								liczbakuzynow1 = liczbakuzynow1 + 1;
							}
						}
						cout << liczbakuzynow1 << endl;
					}
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
	}
	window->show();
	return Fl::run();
}




//zostali: rodzenstwo moje i taty