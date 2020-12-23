/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 23.dec.2020
 * @brief Definition for class Fecha
 */

#ifndef FECHA_H
#define FECHA_H

#include <string>

class Fecha {
 private:
  int year_{};
  int month_{};
  int day_{};
 
 public:
  Fecha(int year = 2000, int month = 1, int day = 1) 
		   : year_{year}, month_{month}, day_{day} {}
  Fecha(std::string date);
  int year() const { return year_; }
  int month() const { return month_; }
  int day() const { return day_; }
	friend std::ostream& operator<<(std::ostream &out, const Fecha &Fecha);
	friend bool operator== (const Fecha &d1, const Fecha &d2);
	friend bool operator> (const Fecha &d1, const Fecha &d2);
  friend bool operator< (const Fecha &d1, const Fecha &d2);

  bool IsLeapYear() { return (year_ % 4 == 0 && year_ % 100 != 0) || year_ % 400 == 0; }
};

std::string ToString(const Fecha $Fecha);
 
#endif
