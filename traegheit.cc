#include "Vektor.hh"
#include "Zylindermantel.hh"
#include "Vollzylinder.hh"
#include <iostream>
#include <memory>

 double traegheit ( Koerper* k, Vektor a, Vektor u) {
   double J = 0;
   double m = M/N;
std :: cout << " berechne  fuer " << k-> name () ;
for (int i = 0; i < N; ++i) {
    Vektor x = k->punkt();
    Vektor n = (x-a).kreuz(u);
    double r = n.betrag()/u.betrag(); //|n|/|u|
    J += m * r * r;
  }
}

int main() {
  const int N = 10000;     // Anzahl Integrationspunkte
  const double M = 1;      // Masse des Zylindermantels
  const double ZM_R = 1.0; // Radius der Zylindermantels
  const double ZM_L = 1.0; // Laenge des Zylindermantels

  Vektor a; // Punkt auf der Rotationsachse
  std::cout << "Aufpunkt:";
  std::cin >> a;
  Vektor u; // Richtung der Rotationsachse
  std::cout << "Richtung:";
  std::cin >> u;

  /*std::unique_ptr<Zylindermantel> zm(new Zylindermantel(ZM_R, ZM_L));

  double J = 0;     // Massentraegheitsmoment
  double m = M / N; // Masse eines Massenpunktes
  for (int i = 0; i < N; ++i) {
    Vektor x = zm->punkt();
    // Abstand Punkt x und Gerade a + t*u
    // Vektor n = ...;//Normalenvektor x-a kreuz u
    Vektor n = (x-a).kreuz(u);
    double r = n.betrag()/u.betrag(); //|n|/|u|
    // std::cout << x << " :" << r << std::endl;
    // addiere Beitrag des Massenpunktes zum Traegheitsmoment
    J += m * r * r;
  }
  std::cout << "Massentraegheitsmoment fuer einen Zylindermantel"
            << " mit a = " << a << " und u = " << u << ": " << J << std::endl;

   std::unique_ptr<Vollzylinder> vm(new Vollzylinder(ZM_R, ZM_L));
  
  double J_VZ = 0;     // Massentraegheitsmoment
  double m_VZ = M / N; // Masse eines Massenpunktes
  for (int i = 0; i < N; ++i) {
    Vektor x = vm->punkt();
    // Abstand Punkt x und Gerade a + t*u
    // Vektor n = ...;//Normalenvektor x-a kreuz u
    //Vektor n = (x-a).kreuz(u);
   // double r = n.betrag()/u.betrag(); //|n|/|u|
    // std::cout << x << " :" << r << std::endl;
    // addiere Beitrag des Massenpunktes zum Traegheitsmoment
    J_VZ += m_VZ * r * r;
  }
  std::cout << "Massentraegheitsmoment fuer einen Vollzylinder"
            << " mit a = " << a << " und u = " << u << ": " << J_VZ << std::endl;
 
    return 0; */
}
std :: unique_ptr < Koerper > k( new Zylindermantel (ZM_R , ZM_L ));
  std :: unique_ptr < Koerper > k2( new Vollzylinder (ZM_R , ZM_L ));
std::cout << "Massentraegheitsmoment fuer einen Zylindermantel"
            << " mit a = " << a << " und u = " << u << ": " << traegheit (k.get(),a,u) << std::endl;

  std::cout << "Massentraegheitsmoment fuer einen Vollzylinder"
            << " mit a = " << a << " und u = " << u << ": " << traegheit (k2.get(),a,u) << std::endl;

double traegheit ( Koerper * k , Vektor a , Vektor u) {
std :: cout << " berechne ␣ fuer ␣" << k -> name () << ’\n’;

std :: unique_ptr < Koerper > k( new Zylindermantel ( ZM_R , ZM_L ));
traegheit ( k . get () ,a , u );
