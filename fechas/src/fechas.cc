/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 23.dec.2020
 * @brief Dados dos ficheros, ordena las fechas (en formato dd/mm/aa) en sentido cronológico ascendiente.
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "fecha.h"
#include "tools.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string in_file_name{argv[1]};
  std::string out_file_name{argv[2]};

  std::ifstream in_file(in_file_name, std::ifstream::in);
  std::ofstream out_file(out_file_name, std::ofstream::out);

  std::vector<Fecha> dates;
  for (std::string line; std::getline(in_file, line);) {
    dates.emplace_back(Fecha{line});
  }

  for (auto date : dates) {
    out_file << date << std::endl;
  }

  return 0;
}
