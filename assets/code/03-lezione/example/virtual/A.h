class A {
public:
    virtual A& operator=(const A& _a) = 0;
    virtual A* clone()const = 0;
    virtual ~A(){};
};