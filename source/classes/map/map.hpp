#ifndef MAP_HPP
#define MAP_HPP

class map
{
private:
    int current_level;
    int MP[100][100];
public:
    map();
    int* getmap(){return *MP;};
    void set_level(int l){this->current_level=l;};
    void generate();
    void load(int i);
};

#endif