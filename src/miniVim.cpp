#include "miniVim.hpp"

MiniVim::MiniVim(const std::string &file) {
    
    if(file.empty()){
        fileName = "untitled.txt";
    }
    else{
        fileName = file;
    }

    
    initscr(); // Inicia a janela
    cbreak(); // Nao guarda as linhas de buffer
    noecho(); // Nao mostra o que nós digitamos
    keypad(stdscr, TRUE); // habilita o teclado
}

MiniVim::~MiniVim() {
    refresh();
    endwin(); // Finaliza a janela
}

void MiniVim::run(){

    printw(&fileName[0]);
    getch();
}

