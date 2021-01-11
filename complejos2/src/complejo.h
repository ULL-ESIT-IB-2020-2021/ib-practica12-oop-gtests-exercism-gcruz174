/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 24.dec.2020
 * @brief This file declares the Complejo class
 *
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H

/** Representación de un número complejo
 */
class Complejo {
 public:
  Complejo();
  Complejo(int real, int imaginary);

  int GetRealPart();
  int GetImaginaryPart();

  static Complejo Add(Complejo first, Complejo second);
  static Complejo Subtract(Complejo first, Complejo second);
  static Complejo Multiply(Complejo first, Complejo second);

  friend Complejo operator+ (const Complejo &c, const int &r);

  void print();

 private:
  int real_;
  int imaginary_;
};

#endif
