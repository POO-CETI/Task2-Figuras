#include <iostream>

using namespace std;

class Cuadrado
{
private:
	int _side;

public:
	Cuadrado(int side) {
		this->_side = side;
	}

	int getSide() {
		return this->_side;
	}

	void setSide(int side) {
		this->_side = side;
	}

	void drawFull() {
		int i = 0;

		do {
			for (int x = 0; x < _side; ++x)
			{
				cout << "*";
			}
			cout << "\n";
			i++;
		} while (i < _side);
	}

	void drawHollow() {
		int i = 0, y = 0;

		do {
			if (i == 0 || i == _side) {
				for (int x = 0; x < _side; ++x) {
					cout << "*";
				}
			} else {
				for (int y = 0; y < _side; ++y) {
					if (y == 0 || y == (_side-1)) {
						cout << "*";
					} else {
						if (i == (_side-1)) {
							cout << "*";
						} else {
							cout << " ";
						}
					}
				}
			}
			cout << "\n";
			i++;
		} while (i < _side);
	}
};

