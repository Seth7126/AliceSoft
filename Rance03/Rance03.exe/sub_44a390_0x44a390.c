// 函数: sub_44a390
// 地址: 0x44a390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct cgmanager::CDebugCGLoader::VTable** var_4 = arg1
*arg1 = &cgmanager::CDebugCGLoader::`vftable'
sub_44b360(arg1[2][1].vFunc_0)
void* eax_1 = arg1[2]
*(eax_1 + 4) = eax_1
int32_t* eax_2 = arg1[2]
*eax_2 = eax_2
void* eax_3 = arg1[2]
*(eax_3 + 8) = eax_3
arg1[3] = 0
int32_t** eax_4 = arg1[2]
sub_44b3e0(&arg1[2], &var_4, *eax_4, eax_4)
j__free(arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
