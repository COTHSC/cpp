#include <iostream>

// mplémentez les fonctions suivantes :
// uintptr_t serialize(Data* ptr);
// Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.
// Data* deserialize(uintptr_t raw);
// Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
// Écrivez un programme pour tester vos fonctions et vous assurer que tout marche
// comme attendu.
// Vous devez créer une structure non-vide (cela signifie qu’elle comporte des variables
// membres) Data.
// Utilisez serialize() sur l’adresse de l’objet Data et passez la valeur de retour obtenue
// à deserialize(). Ensuite, assurez-vous que le retour de deserialize() est identique
// au pointeur d’origine.
// N’oubliez pas de rendre les fichiers de votre structure Data.

typedef struct Data {
	std::string data;
    int         testint;
    float       testfloat;
    bool        testbool;
} Data;



Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

int main( void )
{
    std::string test = "asdfghjklqwertyuiopzxcvbnm1234567890-=";
    Data  teststruct;
    Data *data = &teststruct;
    data->data = test;
    data->testint = 1234567;
    data->testfloat = 42.42f;
    data->testbool = 1;

    std::cout << "Data before    : " << data->data << std::endl;
    std::cout << "Adress before  : " << &data->data << std::endl;
  
    std::cout << "\n\n";

    uintptr_t intptr = serialize(data);
    std::cout << "Data serialized: " << intptr << std::endl;

    std::cout << "\n\n";

    Data *AfterStruct;
    AfterStruct = deserialize(intptr);
    std::cout << "Data after     : " << data->data << std::endl;
    std::cout << "Int after      : " << data->testint << std::endl;
    std::cout << "Float after    : " << data->testfloat << std::endl;
    std::cout << "Bool after     : " << data->testbool << std::endl;

    std::cout << "Adress after   : " << &data->data << std::endl;


}
