#pragma once // substitui o ifndef
//#pragma clang diaginostic ignored "-Wc++98-compat"

#include <ncurses.h>
#include <memory>
#include <string>

class MiniVim{

    std::string fileName;

        public:
        MiniVim(const std::string&);
        ~MiniVim();
        void run();
};