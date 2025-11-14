// 函数: sub_4fbd60
// 地址: 0x4fbd60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IInterface::VTable** result = sub_4a9f10(arg1)
struct IInterface::VTable** result_1 = result

if (result_1 != 0)
    int32_t var_c = arg2
    int32_t var_8 = 0xff
    int32_t* ecx = &var_c
    int32_t var_4 = 0
    
    if (arg2 s>= 0xff)
        ecx = &var_8
    
    int32_t* eax = &var_4
    
    if (*ecx s> 0)
        eax = ecx
    
    result = *eax
    
    if (result_1[0x24] != result)
        result_1[0x24] = result
        result_1[0x1c].b = 1

return result
