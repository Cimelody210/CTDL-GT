#include <iostream>
#include <math.h>

class MovingObject
{
    friend class TestStudyInPink;
    protected:
        int index;
        Position pos;
        Map * map;
        string name;
    public:
        MovingObject(int index, const Position pos, Map *map, const string& name="");
        virtual ~MovingObject();
        virtual Position getNextPosition() =0;
        Position getcurrent() const;
        virtual void Move() = 0;
        string getTimeType() const {return "MovingObject";}
};

class Character: public MovingObject
{
    public:
        Character(int index, countSort Position& pos, Map*map, const string& name=""): MovingObject(index, pos, map, name){}
        virtual ~Character();
        string getitemType() const {return "Character"};
        virtual bool canUse(Character *obj, Robot* robot) = 0;
        virtual bool use(Character = obj, Robot* robot) = 0;
};

class Sherlock: public Character
{
    friend class TestStudyInPink;
    private:
        std::string moving_role;
        int hp;
        int exp;
    public:
        Sherlock(int index, const std::string& moving_role, const Position& init_pos, Map*map, int init_hp, int init_exp);
        Position getNextPosition override;
        void move() override;
        std::string str() override;
        bool canUse(Character*obj, Robot*robot) override{ return true;}
        void  use(Character*obj, Robot*robot) override {}
};
int main()
{

}