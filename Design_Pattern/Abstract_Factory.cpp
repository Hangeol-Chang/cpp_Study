#include<iostream>
using namespace std;

// 여러 객체를 통합해주는 base-interface
class AbstractProductA {
public :
    virtual ~AbstractProductA(){};
    virtual string UsefulFunctionA() const = 0;
};

class ConcreteProductA1 : public AbstractProductA {
public :
    string UsefulFunctionA() const override {
        return "the result of the product A1";
    }
};

class ConcreteProductA2 : public AbstractProductA {
    string UsefulFunctionA() const override {
        return "the result of the product A2";
    }
};

// base-interface 2
class AbstractProductB {
public :
    virtual ~AbstractProductB(){};
    virtual string UsefulFunctionB() const = 0;

    virtual string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};

class ConcreteProductB1 : public AbstractProductB {
public :
    string UsefulFunctionB() const override {
        return "the result of the product B1";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};
class ConcreteProductB2 : public AbstractProductB {
public :
    string UsefulFunctionB() const override {
        return "the result of the product B2";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};

///////////////////////////// 객체 정의 끝 ///////////////////////////////

// 추상 팩토리
class AbstractFactory {
public :
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0; 
};

// 팩토리 구현체
class ConcreteFactory1 : public AbstractFactory {
public :
    AbstractProductA *CreateProductA() const override {
        return new ConcreteProductA1();
    }
    AbstractProductB *CreateProductB() const override {
        return new ConcreteProductB1();
    }
};
class ConcreteFactory2 : public AbstractFactory {
public :
    AbstractProductA *CreateProductA() const override {
        return new ConcreteProductA2();
    }
    AbstractProductB *CreateProductB() const override {
        return new ConcreteProductB2();
    }
};

void ClientCode(const AbstractFactory &factory) {
    const AbstractProductA *product_a = factory.CreateProductA();
    const AbstractProductB *product_b = factory.CreateProductB();

    cout << product_a->UsefulFunctionA() << "\n";
    cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    
    delete product_a;
    delete product_b;
};

int main() {
    cout << "Client : testing Abstract Factory pattern \n\n";

    ConcreteFactory1 *f1 = new ConcreteFactory1();
    ClientCode(*f1);
    delete f1;

    ConcreteFactory2 *f2 = new ConcreteFactory2();
    ClientCode(*f2);
    delete f2;

    // 추상 객체에 구현체 대입.
    AbstractFactory *f3 = new ConcreteFactory1();
    ClientCode(*f3);
}