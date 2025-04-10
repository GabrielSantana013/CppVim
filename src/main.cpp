#include "miniVim.hpp"

int main(int argc, char** argv){
    if(argc > 1){
        auto miniVim = std::make_shared<MiniVim>(argv[1]);
        miniVim->run();
    }
    else{
        auto miniVim = std::make_shared<MiniVim>("");
        miniVim->run();
    }

    return 0;

}