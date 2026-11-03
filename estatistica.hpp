#ifndef ESTATISTICA_HPP
#define ESTATISTICA_HPP

#include <vector>

class Estatistica {
public:
    static double somar(const std::vector<double>& numeros);

    static double calcularMedia(const std::vector<double>& numeros);

    static double encontrarMaior(const std::vector<double>& numeros);
};
#endif