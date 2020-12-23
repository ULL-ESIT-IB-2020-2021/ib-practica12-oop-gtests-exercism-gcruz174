/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 23.dec.2020
 * @brief Implementation for class Fecha
 */

#include "fecha.h"

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

// Overloaded insertion operator
std::ostream &operator<<(std::ostream &out, const Fecha &date) {
  out << date.day() << "/" << date.month() << "/"
      << date.year();  // actual output done here
  return out;  // return std::ostream so we can chain calls to operator<<
}

/** Converts a Fecha to a string
 *
 *  @param[in] date. Fecha to convert
 */
std::string ToString(const Fecha date) {
  std::string resultado{""};
  std::stringstream os;

  os << date.day() << "/" << date.month() << "/" << date.year();
  os >> resultado;

  return resultado;
}

// Equality comparison
bool operator==(const Fecha &d1, const Fecha &d2) {
  return (d1.day() == d2.day() && d1.month() == d2.month() &&
          d1.year() == d2.year());
}

// Greater than comparison
bool operator>(const Fecha &d1, const Fecha &d2) {
  if (d1.year() > d2.year()) {
    return true;
  }
  if ((d1.year() == d2.year()) && (d1.month() > d2.month())) {
    return true;
  }
  if ((d1.year() == d2.year()) && (d1.month() == d2.month()) &&
      (d1.day() > d2.day())) {
    return true;
  }
  return false;
}

// Lower than comparison
bool operator<(const Fecha &d1, const Fecha &d2) {
  if (d1.year() < d2.year()) {
    return true;
  }
  if ((d1.year() == d2.year()) && (d1.month() < d2.month())) {
    return true;
  }
  if ((d1.year() == d2.year()) && (d1.month() == d2.month()) &&
      (d1.day() < d2.day())) {
    return true;
  }
  return false;
}

/** Constructor de la clase Fecha
 *
 *  @param[in] date. Cadena de texto con la fecha en formato dd/mm/aa
 */
Fecha::Fecha(std::string date) {
  std::string day_string{date.substr(0, 2)};
  std::string month_string{date.substr(3, 2)};
  std::string year_string{date.substr(6, 2)};

  day_ = std::stoi(day_string);
  month_ = std::stoi(month_string);
  year_ = std::stoi(year_string);
}
