// 函数: sub_4f90c0
// 地址: 0x4f90c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* ecx_2 = *(eax + 0x34)
int32_t var_8 = arg2
void* eax_1 = sub_510440(ecx_2, arg4)

if (*(eax_1 + 0x2bc) != arg2)
    int32_t var_4 = 0
    int32_t* eax_2 = &var_8
    
    if (arg2 s<= 0)
        eax_2 = &var_4
    
    *(eax_1 + 0x2bc) = *eax_2
    sub_50d490(eax_1)

eax_1.b = 1
return eax_1
