// 函数: sub_6203a0
// 地址: 0x6203a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct mainsystem::CApp::VTable** var_4 = arg1
*arg1 = &mainsystem::CApp::`vftable'
int32_t** eax = arg1[1]
sub_4200d0(&arg1[1], &var_4, *eax, eax)
j__free(arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
