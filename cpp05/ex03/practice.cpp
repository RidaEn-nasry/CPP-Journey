
#include <iostream>



class   ParentType {
    protected:
        int _parent;
    public:
    ParentType(int parent) : _parent(parent) {};
    virtual ~ParentType() {};
    ParentType(const ParentType& other) : _parent(other._parent) {};
    ParentType& operator=(const ParentType& rhs) {
        this->_parent = rhs._parent;
        return *this;
    };
    int getParent() const {
        return this->_parent;
    };
};

class Type1 : public ParentType {
    private:    
        std::string typeName;
    public:
        Type1(std::string typeName) : typeName(typeName) {};
        const std::string & getTypeName() { return typeName; };    
        Type1* newType1 ( std::string typeName ) {
            return new Type1 ( typeName );
        }
};


class   Type2 : public ParentType {
    private:
        std::string typeName;
    public:
        Type2(std::string typeName) : typeName(typeName) {};
        const std::string & getTypeName() { return typeName; };
        Type2* newType2( std::string typeName ) {
            return new Type2(typeName);
        }
};

class   TypeMaker {
    private:
        typedef struct {
            std::string typeName;
            ParentType* (ParentType::* f)(std::string);
        } t_typeMaker;
        t_typeMaker _typeMaker[2];
    public:
        TypeMaker() {
            _typeMaker[0].typeName = "Type1";
            _typeMaker[0].f = &Type1::newType1;
            _typeMaker[1].typeName = "Type2";
            _typeMaker[1].f = &Type2::newType2;
        };
        ParentType* makeType(std::string typeName) {
            for (int i = 0; i < 2; i++) {
                if (typeName == _typeMaker[i].typeName) {
                    return (this->_typeMaker[i].f)(typeName);
                }
            }
            return NULL;
        };
        }
};


