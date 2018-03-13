//Rename and Change Signature refactorings now update functions in all inheritance branches,
// including sibling functions.
// For example, rename Bird::jump function and agree to rename the base function.

class Animal {
    virtual void jump() = 0;
};

class Bird: public Animal {
    void jump() override {};
};

class Mammal: public Animal {
    void jump() override {};
};

