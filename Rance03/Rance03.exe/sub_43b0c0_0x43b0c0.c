// 函数: sub_43b0c0
// 地址: 0x43b0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IAFAFile::afafactory::CAFAFile::VTable** var_4 = arg1
*arg1 = &afafactory::CAFAFile::`vftable'{for `IAFAFile'}
int32_t* eax = arg1[8]

if (eax != 0)
    sub_4107c0(eax, arg1[9])
    j__free(arg1[8])
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t* eax_1 = arg1[5]

if (eax_1 != 0)
    sub_4107c0(eax_1, arg1[6])
    j__free(arg1[5])
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t** eax_2 = arg1[3]
sub_43cee0(&arg1[3], &var_4, *eax_2, eax_2)
return j__free(arg1[3])
