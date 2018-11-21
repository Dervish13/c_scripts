#include <iostream>

class Osoba
{
  public:
    Osoba(unsigned int g = 0, std::string i = "Perica", std::string p = "Petrović");
    ~Osoba();
    unsigned int getgodine();
    void setgodine(unsigned int godine);

  protected:
    unsigned int _godine;
    std::string _ime;
    std::string _prezime;
    Osoba *brat;
};


class SpecijalnaOsoba : public Osoba
{
  public:
    SpecijalnaOsoba();
};


int main()
{
  Osoba o;
  Osoba *p = new Osoba();
  std::cout << o.getgodine() << std::endl;
  p->setgodine(5);
  return 0;
}


Osoba::Osoba(unsigned int g, std::string i, std::string p)
{
  _godine = g;
  _ime = i;
  _prezime = p;
  brat = nullptr;

}

Osoba::~Osoba()
{
  if (brat != nullptr)
  {
  std::cout << "Free" << std::endl;
    std::cout << brat << std::endl;
    delete brat;
  }
}


unsigned int Osoba::getgodine()
{
  return _godine;
}


void Osoba::setgodine(unsigned int g)
{
  _godine = g;
}


SpecijalnaOsoba::SpecijalnaOsoba()
{
  _godine = 5;
};


extern "C"
{
  void print()
  {
  }
}
