/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 24.dic.2020
 * @brief Defines operations on complex numbers
 *
 */

#include "complejo.h"

#include <iostream>

/** Crea un nuevo número complejo dadas su parte real e imaginaria.
 *
 *  @param[in] real Parte real
 *  @param[in] imaginary Parte imaginaria
 *  @return El número complejo creado
 */
Complejo::Complejo(int real, int imaginary) {
  real_ = real;
  imaginary_ = imaginary;
}

/** Crea un nuevo número complejo igual a 0.
 *
 *  @return El número complejo creado
 */
Complejo::Complejo() {
  real_ = 0;
  imaginary_ = 0;
}

/** Obtiene la parte real del número complejo.
 *
 *  @return Parte real del número complejo
 */
int Complejo::GetRealPart() { return real_; }

/** Obtiene la parte imaginaria del número complejo.
 *
 *  @return Parte imaginaria del número complejo
 */
int Complejo::GetImaginaryPart() { return imaginary_; }

/** Imprime el número complejo en pantalla en su forma binómica.
 */
void Complejo::print() {
  std::cout << GetRealPart() << (GetImaginaryPart() > 0 ? "+" : "")
            << GetImaginaryPart() << "i" << std::endl;
}

/** Suma dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Add(Complejo first, Complejo second) {
  int imaginary_sum{first.GetImaginaryPart() + second.GetImaginaryPart()};
  int real_sum{first.GetRealPart() + second.GetRealPart()};

  Complejo number{real_sum, imaginary_sum};
  return number;
}

/** Resta dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Subtract(Complejo first, Complejo second) {
  int imaginary_sub{first.GetImaginaryPart() - second.GetImaginaryPart()};
  int real_sub{first.GetRealPart() - second.GetRealPart()};

  Complejo number{real_sub, imaginary_sub};
  return number;
}

/** Multiplica dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Multiply(Complejo first, Complejo second) {
  int real_mult{(first.GetRealPart() * second.GetRealPart()) - (first.GetImaginaryPart() * second.GetImaginaryPart())};
  int imaginary_mult{(first.GetRealPart() * second.GetImaginaryPart()) + (first.GetImaginaryPart() * second.GetRealPart())};

  Complejo number{real_mult, imaginary_mult};
  return number;
}