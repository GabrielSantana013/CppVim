# Configurações
TARGET = a.out
CXX = g++
DEBUG = -g
OPT = -O0
WARN = -Wall -Wno-unknown-pragmas
NCURSES = -lncurses -ltinfo
CXXFLAGS = $(DEBUG) $(OPT) $(WARN) -pipe
LDFLAGS = $(NCURSES)
SRCDIR = src
OBJDIR = obj
OBJS = $(OBJDIR)/main.o $(OBJDIR)/miniVim.o

# Regra principal
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

# Compilação dos .cpp
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) -c $(CXXFLAGS) $< -o $@

# Limpar os objetos e executável
clean:
	rm -rf $(OBJDIR) $(TARGET)
