#include <iostream>
#include <string>

enum class MONSTER_TYPE{
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

struct Stats {

    MONSTER_TYPE monster_type;
    std::string name;
    int health;
    std::string monster_type_string;

};

std::string typeChoose(MONSTER_TYPE b) {

    std::string type;

    if (static_cast<int>(b) == 0) {

        type = "ogre";

    }else 
        if (static_cast<int>(b) == 1) {

        type = "goblin";

    }else 
         if (static_cast<int>(b) == 2) {

        type = "sceleton";

    }else 
         if (static_cast<int>(b) == 3) {

        type = "orc";

    }else 
         if (static_cast<int>(b) == 4) {

        type = "troll";

         }

    return type;
}

Stats input(Stats a) {

    a.monster_type_string = typeChoose(a.monster_type);
    std::cout << "Input " << a.monster_type_string << "'s name: ";
    std::cin >> a.name;
    std::cout << "Input " << a.monster_type_string << "'s health: ";
    std::cin >> a.health;

    return a;
}

void output(Stats stats) {

    std::cout << "This " << stats.monster_type_string << " is named " << stats.name << " and has "
        << stats.health << " hp." << "\n";

}

int main()
{
    
    Stats first{ MONSTER_TYPE::GOBLIN }, second{ MONSTER_TYPE::ORC };

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