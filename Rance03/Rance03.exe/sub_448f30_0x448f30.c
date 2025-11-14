// 函数: sub_448f30
// 地址: 0x448f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg1[4]

if (ecx u< arg2)
    sub_69a57f("invalid string position")
    noreturn

if (0xffffffff - ecx u<= 1)
    sub_69a551("string too long")
    noreturn

if (sub_4022d0(arg1, ecx + 1, 0) != 0)
    int32_t eax_2 = arg1[5]
    int32_t* edx_1
    
    if (eax_2 u< 0x10)
        edx_1 = arg1
    else
        edx_1 = *arg1
    
    int32_t* ecx_2
    
    if (eax_2 u< 0x10)
        ecx_2 = arg1
    else
        ecx_2 = *arg1
    
    int32_t eax_3 = arg1[4]
    
    if (eax_3 != arg2)
        _memcpy(arg2 + 1 + ecx_2, edx_1 + arg2, eax_3 - arg2)
    
    sub_403270(arg1, arg2, 1, arg3)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = ecx + 1
    
    if (not(cond:0_1))
        *(*arg1 + ecx + 1) = 0
        return arg1
    
    *(arg1 + ecx + 1) = 0

return arg1
