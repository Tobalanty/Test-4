#include <iostream>
#include <string>

enum class MONSTER_TYPE{
    OGRE,       //0
    GOBLIN,     //1
    SKELETON,   //2
    ORC,        //3
    TROLL,      //4
};

struct Stats {                                                                           //Структура содержащая тип монстра, имя и количество хп

    MONSTER_TYPE monster_type;
    std::string name;
    int health;
    std::string monster_type_string;

};

std::string typeChoose(MONSTER_TYPE b) {                                                //Выбираю и записываю в строковую переменную тип монстра в зависимости 
                                                                                        //от выбраного типа в переменной класса MONSTER_TYPE
    std::string type;

    switch (static_cast<int>(b)) {

    case 0: type = "ogre";
    case 1: type = "goblin";
    case 2: type = "sceleton";
    case 3: type = "orc";
    case 4: type = "troll";

    }
    return type;
}
 

Stats input(Stats a) {                                                                  //Ввод имени и количества хп

    a.monster_type_string = typeChoose(a.monster_type);
    std::cout << "Input " << a.monster_type_string << "'s name: ";
    std::cin >> a.name;
    std::cout << "Input " << a.monster_type_string << "'s health: ";
    std::cin >> a.health;

    return a;
}

void output(Stats stats) {                                                              //Вывод резальтата             

    std::cout << "This " << stats.monster_type_string << " is named " 
        << stats.name << " and has "<< stats.health << " hp." << "\n";

}

int main()
{
    
    Stats first{ MONSTER_TYPE::GOBLIN }, second{ MONSTER_TYPE::ORC };                   //Инициализирую переменную класса MONSTER_TYPE сразу с объявление структурной перменной
                                                                                        //(остальные переменные структуры пока что пустые)
    first = input(first);
    std::cout << "---------------------------------------------------\n"
              << "---------------------------------------------------\n";
    second = input(second);
    std::cout << "---------------------------------------------------\n"
              << "---------------------------------------------------\n";

    output(first);
    output(second);

    system("pause");
    return 0;
}