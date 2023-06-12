#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/
public:

	void input() {
		cout << "Masukan jejari : ";
	}
	float Luas(int x) {
		return 3.14 * x * x;
	}

	float keliling(int x) {
		return 2 * 3.14 * x;
	}
};
	class Bujursangkar :public bidangDatar { /*lengkapi disini*/
	public:
		void input() {
			int sisi;
			cout << "Masukkan sisi :";
			cin >> sisi;
			setX(sisi);
		}
		float Luas(int sisi) {
			return sisi * sisi;
		}
		float keliling(int sisi) {
			return 4 * sisi;
		}
};
	int main() { /*lengkapi disini*/
		Lingkaran lingkaran;
		Bujursangkar bujursangkar;

		cout << "lingkaran dibuat" << endl;
		lingkaran.input();
		cout << "luas lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
		cout << "keliling lingkaran =" << lingkaran.keliling(lingkaran.getX()) << endl;

		cout << endl;

		cout << "bujursangkar dibuat" << endl;
		bujursangkar.input();
		cout << "luas bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
		cout << "keliling bujursangkar = " << bujursangkar.keliling(bujursangkar.getX()) << endl;
		return 0;
	}