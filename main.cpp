#include <iostream>
#include <string>

using namespace std;

class Prostokat
{
private:
    int a;
    int b;
    string kolor_a;
    string kolor_b;
    float pole;

public:
    // Konstruktor pusty:
    Prostokat() : a(0), b(0), kolor_a("czarny"), kolor_b("czarny"), pole(0) {}

    // Konstruktor przeciazony z parametrami a i b:
    Prostokat(int a, int b) : a(a), b(b), kolor_a("czarny"), kolor_b("czarny"), pole(a * b) {}

    // Konstruktor przeciazony z parametrami a, b, kolor_a i kolor_b:
    Prostokat(int a, int b, string kolor_a, string kolor_b)
        : a(a), b(b), kolor_a(kolor_a), kolor_b(kolor_b), pole(a * b) {}

    // Bezparametrowa metoda show:
    void show()
    {
        cout << "Bok a: " << a << endl;
        cout << "Bok b: " << b << endl;
        cout << "Kolor boku a: " << kolor_a << endl;
        cout << "Kolor boku b: " << kolor_b << endl;
        cout << "Pole: " << pole << endl;
    }
};

int main()
{
    // Tworzenie tablicy prostokatow:
    Prostokat prostokaty[4];

    // Inicjalizacja obiektow
    prostokaty[0] = Prostokat();
    prostokaty[1] = Prostokat(3, 4);
    prostokaty[2] = Prostokat(5, 6, "czerwony", "zielony");
    prostokaty[3] = Prostokat(2, 8, "niebieski", "zolty");

    // Wywolanie metody show dla kazdego prostokata:
    for (int i = 0; i < 4; i++)
        {
        cout << "Prostokat #" << i + 1 << endl;
        prostokaty[i].show();
        cout << endl;
    }

    return 0;
}
