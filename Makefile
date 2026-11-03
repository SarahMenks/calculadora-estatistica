CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Arquivos fonte
SRCS = estatistica.cpp testes.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = testes.out

# Regra principal: compila e executa os testes
all: $(TARGET) run

# Baixa a biblioteca doctest.h se nao existir
doctest.h:
	curl -sL https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h -o doctest.h

# Compilação do executável de testes
$(TARGET): doctest.h $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Executa os testes
run: $(TARGET)
	./$(TARGET)

# Limpa arquivos gerados
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run clean