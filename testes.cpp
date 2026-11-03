#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "estatistica.hpp"

TEST_CASE("1. Soma de um vetor de numeros") {
    std::vector<double> nums = {1.5, 2.5, 3.0, 4.0};
    CHECK(Estatistica::somar(nums) == doctest::Approx(11.0));
}

TEST_CASE("2. Media aritmetica com valores positivos") {
    std::vector<double> nums = {10.0, 20.0, 30.0};
    CHECK(Estatistica::calcularMedia(nums) == doctest::Approx(20.0));
}

TEST_CASE("3. Media aritmetica de um vetor vazio deve lancar excecao") {
    std::vector<double> nums = {};
    CHECK_THROWS_AS(Estatistica::calcularMedia(nums), std::invalid_argument);
}

TEST_CASE("4. Encontrar o maior numero com valores positivos e negativos") {
    std::vector<double> nums = {-10.5, 0.0, 5.2, -2.0, 3.1};
    CHECK(Estatistica::encontrarMaior(nums) == doctest::Approx(5.2));
}

TEST_CASE("5. Encontrar o maior numero de um vetor vazio deve lancar excecao") {
    std::vector<double> nums = {};
    CHECK_THROWS_AS(Estatistica::encontrarMaior(nums), std::invalid_argument);
}