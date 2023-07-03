#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
	void setY(int b) {
		this->y = b;
		
	}
	int getY() {
		return y;
	}
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/
public :
	void input() {
		cout << "Masukkan jari jari : ";
		int r;
		cin >> r;
		setX(r);
	}

	float Luas() {
		return 3.14 * getX() * getX();
	}

	float Keliling() {
		return 2 * 3.14 * getX();
	}

	void cekUkuran() {
		if (Keliling() > 40)
			cout << "Ukuran lingkaran adalah besar" << endl;
		else if ((Keliling() > 10) && (Keliling() < 40))
			cout << "Ukuran lingkaran adalah sedang" << endl;
		else
			cout << "Ukuran lingkaran adalah kecil" << endl;
		return;
	} 
};
class Persegipanjang :public bidangDatar { /*lengkapi disini*/
public :

	void input() {
		int p;
		int l;
		cout << "Masukkan Panjang : ";
		cin >> p;
		setX(p);
		cout << "Masukkan Lebar : ";
		cin >> l;
		setY(l);
	}

	float Luas() {
		return getX() * getY() ;
	}

	float Keliling() {
		return 2 * getX() * getY();
	}

	void cekUkuran() {
		if (Keliling() > 40)
			cout << "Ukuran persegi panjang adalah besar" << endl;
		else if ((Keliling() > 10) && (Keliling() < 41))
			cout << "Ukuran persegi panjang adalah sedang" << endl;
		else
			cout << "Ukuran persegi panjang adalah kecil" << endl;
	} 
};
int main() { /*lengkapi disini*/ 

	char kembali;
	do {
		Lingkaran a;
		Persegipanjang b;

		cout << "Lingkaran dibuat\n";
		a.input();
		cout << "Luas Lingkaran = " << a.Luas() << endl;
		cout << "Keliling Lingkaran = " << a.Keliling() << endl;
		a.cekUkuran();

		cout << "\nPersegi Panjang dibuat\n";
		b.input();
		cout << "Luas Persegi Panjang = " << b.Luas() << endl;
		cout << "Keliling Persegi Panjang = " << b.Keliling() << endl;
		b.cekUkuran();

		cout << "Apakah Anda ingin mengulang program? (Y/N) : ";
		cin >> kembali;
	} while (kembali == 'Y' || kembali == 'y');

	return 0;

}