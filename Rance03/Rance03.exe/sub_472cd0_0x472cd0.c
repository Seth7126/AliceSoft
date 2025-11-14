// 函数: sub_472cd0
// 地址: 0x472cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t arg_4
int32_t edx = arg_4
int32_t arg_8
int32_t esi = arg_8
arg_8 = esi

if (edx u<= 0x3f)
    arg_4 = 0x64
    var_4 = nullptr
    int32_t* ecx = &arg_8
    
    if (esi s>= 0x64)
        ecx = &arg_4
    
    int32_t* eax_1 = &var_4
    
    if (*ecx s> 0)
        eax_1 = ecx
    
    *(arg1 + edx * 0x24 + 4) = *eax_1

return sub_472e10(arg1, edx, esi)
