#include <iostream>

namespace monster 
{
    enum MonsterType 
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{
    monster::MonsterType shrek {monster::troll};
    return 0;
}


