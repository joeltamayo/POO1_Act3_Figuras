#include <iostream>
using namespace std;

class Cuadrado
{
private:
    int tipo;
    int medida;

public:
    Cuadrado(int type)
    {
        tipo = type;
    }
    void setMedida(int dimension)
    {
        medida = dimension;
    }
    int getMedida()
    {
        if (medida >= 2)
        {
            return medida;
            cout << "Medida (24): " << medida << endl;
            int flag = getc(stdin);
        }
        else
        {
            cout << "ERROR! La medida ingresada debe ser mayor a 2" << endl;
            return 2;
        }
    }
    void generarCuadrado();
};

void Cuadrado::generarCuadrado()
{
    int alto = medida;
    int largo = medida;

    // c = Filas
    // i = Columnas

    for (int c = 0; c < alto; c++) // Filas
    {
        for (int i = 0; i < largo; i++)
        {
            if (tipo == 1) // Relleno
            {
                cout << "* ";
            }
            else
            { // Sin relleno
                if ((c == 0 || i == 0) || (c == (alto - 1)) || (i == (largo - 1)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

class Triangulo
{
private:
    int tipo;
    int altura;

public:
    Triangulo(int type)
    {
        tipo = type;
    }
    void setAltura(int dimension)
    {
        altura = dimension;
    }
    int getAltura()
    {
        if (altura >= 2)
        {
            return altura;
        }
        else
        {
            cout << "ERROR! La medida ingresada debe ser mayor a 2" << endl;
            return 2;
        }
    }
    void generarTriangulo();
};

void Triangulo::generarTriangulo()
{
    int alto = altura;

    for (int i = 0; i < alto; i++) // Filas
    {
        for (int c = 0; c < i; c++) // Columnas
        {
            cout << "* ";
        }
        cout << "*" << endl;
    }
    cout << endl;
}

class Circulo
{
private:
    int tipo;
    int diametro;

public:
    Circulo(int type)
    {
        tipo = type;
    }
    void setDiametro(int dimension)
    {
        diametro = dimension;
    }
    int getDiametro()
    {
        if (diametro > 4)
        {
            return diametro;
        }
        else
        {
            cout << "" << endl;
            return 2;
        }
    }
    void generarCirculo();
};

void Circulo::generarCirculo()
{
    int aux = diametro;

    for (int c = 1; c < diametro; c += 2) // Filas
    {
        for (int n = 1; n < aux; n++) // Espacios
        {
            cout << " ";
        }
        aux -= 2;
        for (int i = 0; i <= (c + 1); i++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    aux = 2;

    for (int c = 1; c < diametro; c += 2)
    {
        for (int n = 0; n < aux; n++)
        {
            cout << " ";
        }
        aux += 2;
        for (int i = diametro; i > (c - 1); i--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Limpiamos la consola
void Clear()
{
    cout << "\x1B[2J\x1B[H";
}

int main()
{
    int opc = 1;
    do
    {
        cout << "Selecciona una figura" << endl;
        cout << "1- Cuadrado " << endl;
        cout << "2- Triangulo " << endl;
        cout << "3- Circulo " << endl;
        cin >> opc;
        Clear();

        if (opc == 1)
        {
            Cuadrado c = Cuadrado(2);
            c.setMedida(10);
            c.generarCuadrado();
        }
        else if (opc == 2)
        {
            Triangulo t = Triangulo(1);
            t.setAltura(6);
            t.generarTriangulo();
        }
        else if (opc == 3)
        { // (Circulo que es un rombo)
            Circulo ci = Circulo(2);
            ci.setDiametro(9);
            ci.generarCirculo();
        }
        else
        {
            cout << "La opcion ingresada es incorrecta" << endl;
        }

        cout << "Generar otra figura?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> opc;

        Clear();

    } while (opc == 1);

    return 0;
}

/*
/ Pausar programa
    int flag;
    cout << "Preciona enter para continuar" << endl;
    flag = getchar();
*/

/*
circulo
Diametro / 4 = extremos superior e inferior
Diametro y = Diametro x / 2
*/
