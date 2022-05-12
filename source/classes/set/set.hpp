#ifndef SET_HPP
#define SET_HPP

class set
{
private:
    int height,length,aal,fps;
public:
    set();
    ~set();
    int getHeight(){return this->height;}
    int getLength(){return this->length;}
    int getAal(){return this->aal;}
    int getFps(){return this->fps;}
};


#endif