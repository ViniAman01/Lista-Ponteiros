#include <iostream>

using namespace std;

struct Ingredient
{
    float maca = 675/4;
    float mantg = 75/4;
    float sugar = 150/4;
    float pao = 100/4;
    float creme = 150/4;
};

void calc(Ingredient *portion, int *num);

void (*Array[1])(Ingredient *, int *) = {calc};

int main(void)
{
    Ingredient portion;
    int num;
    cout << "Número de pessoas: ";
    cin >> num;
    Array[0](&portion,&num);
    cout << "Maçã: " << portion.maca << " g" << endl;
    cout << "Manteiga: " << portion.mantg << " g" << endl;
    cout << "Açúcar: " << portion.sugar << " g" << endl;
    cout << "Migalhas de pão: " << portion.pao << " g" << endl;
    cout << "Creme de leite: " << portion.creme << " ml" << endl;
    return 0;
}

void calc(Ingredient *portion, int *num)
{
    portion->creme *= *num;
    portion->mantg *= *num;
    portion->sugar *= *num;
    portion->pao *= *num;
    portion->creme *= *num;
}