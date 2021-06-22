//==========================================================================
// �e�L�X�g�ǂݎ��[text_load.cpp]
// author: MasyoLab
//==========================================================================
#include "text_load.hpp"

//==========================================================================
/**
@brief �w��t�@�C�����e�L�X�g�ǂݎ��
@param Input [in] �ǂݎ��t�@�C��
@return �ǂݎ�茋��
*/
std::list<std::string> text_load::get(const std::string & Input) noexcept(false)
{
    std::ifstream ifs(Input); // c++�ɂ��t�@�C���ǂݍ���
    std::string str; // �i�[string
    std::list<std::string> _input;

    // �t�@�C�����J�����Ƃ�
    if (!ifs.fail())
    {
        // �I���܂ŉ�
        for (;std::getline(ifs, str);) {
            _input.push_back(str);
        }
    }
    else
    {
        std::ofstream ifs(Input);
    }
    ifs.close();

    return _input;
}
