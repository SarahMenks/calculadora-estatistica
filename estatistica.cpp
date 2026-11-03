#include "estatistica.hpp"
#include <numeric>
#include <algorithm>
#include <stdexcept>

double Estatistica::somar(const std::vector<double>& numeros) {
    return std::accumulate(numeros.begin(), numeros.end(), 0.0);
}

double Estatistica::calcularMedia(const std::vector<double>& numeros) {
    if (numeros.empty()) {
        throw std::invalid_argument("O vetor nao pode estar vazio.");
    }
    return somar(numeros) / numeros.size();
}

double Estatistica::encontrarMaior(const std::vector<double>& numeros) {
    if (numeros.empty()) {
        throw std::invalid_argument("O vetor nao pode estar vazio.");
    }
    return *std::max_element(numeros.begin(), numeros.end());
}