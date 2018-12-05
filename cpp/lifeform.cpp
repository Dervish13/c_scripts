#include <iostream>
#include <vector>

class LifeForm
{
  public:
   LifeForm();
   ~LifeForm();
    virtual void speak()=0;


};

class Cat : public LifeForm
{
  public:
    void speak()
    {

      std::cout<<"meow"<< std::endl;
    }

};

class Dog : public LifeForm
{

  public:
    void speak()
    {

      std::cout<<"woof"<<std::endl;
    }
};
int main()
{

  LifeForm *dog = new Dog();
 // LifeForm *Cat = new Cat();
  //Cat->speak();
  //Dog->speak();


return 0;
}
