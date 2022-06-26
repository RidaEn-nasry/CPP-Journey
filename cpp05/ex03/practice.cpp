
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
    virtual ParentType* newType (std::string name) = 0;
    int getParent() const {
        return this->_parent;
    };
};

class Type1 : public ParentType {
    private:    
        std::string typeName;
    public:
        Type1(std::string typeName): ParentType(1) {
            this->typeName = typeName;
        };
        const std::string & getTypeName() { return typeName; };    
        ParentType* newType ( std::string typeName ) {
            return new Type1 ( typeName );
        }
};


class   Type2 : public ParentType {
    private:
        std::string typeName;
    public:
        Type2(std::string typeName) : ParentType(1) {
           this->typeName = typeName;
        };

        const std::string & getTypeName() { return typeName; };
        ParentType* newType( std::string typeName ) {
            return new Type2( typeName );
        }
};

class   TypeMaker {
    private:
        typedef struct {
            std::string typeName;
            
        } t_typeMaker;
        Form arr[3];
    public:
        TypeMaker() {
            _typeMaker[0].typeName = "Type1";
            _typeMaker[0].f = &ParentType::newType;
            _typeMaker[1].typeName = "Type2";
            _typeMaker[1].f = &ParentType::newType;
        };
        ParentType* makeType(std::string typeName) {
            for (int i = 0; i < 3; i++) {
                if (t)
            }    
        };
};


