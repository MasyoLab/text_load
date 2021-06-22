//==========================================================================
// �t�H���_�T���̃T���v��
// author: MasyoLab
//==========================================================================
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#define _GLIBCXX_DEBUG
#include <iostream>

#include "text_load.hpp"

int main(void)
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    auto file_path = text_load::get("test.txt");

    for (auto itr = file_path.begin(); itr != file_path.end(); ++itr)
    {
        std::cout << (*itr) << std::endl;
    }

    return std::system("PAUSE");
}

