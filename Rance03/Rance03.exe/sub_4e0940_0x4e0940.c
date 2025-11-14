// 函数: sub_4e0940
// 地址: 0x4e0940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t arg_8
int32_t esi = arg_8
sub_485b20(arg1 + 4, esi, 0)
int32_t* result = &arg_8
int32_t ecx_2 = *(arg1 + 0xf4) - *(arg1 + 0xf8)
arg_8 = ecx_2
var_4 = nullptr

if (ecx_2 s<= 0)
    result = &var_4

if (*result != 0 && esi == 1)
    void* ecx_3 = *(arg1 + 0x94)
    void* eax
    
    if (ecx_3 == 0)
        eax = nullptr
    else
        eax = ecx_3 + 8
    
    if (arg2 != eax)
        void* eax_1 = *(arg1 + 0x88)
        
        if (eax_1 == 0)
            result = nullptr
        else
            result = eax_1 + 8
    
    if (arg2 == eax || arg2 == result)
        (*(**(ecx_3 + 0x5c) + 0x38))(3)
        *(*(arg1 + 0x94) + 0x79) = 1
        sub_4e0a40(arg1 - 4)
        int32_t eax_4 = *(arg1 + 0x88)
        int32_t eax_5
        
        if (eax_4 == 0)
            eax_5 = 0
        else
            eax_5 = eax_4 + 8
        
        if (arg2 == eax_5)
            sub_4e0a90(arg1 - 4)
        
        void* eax_6 = *(arg1 + 0x94)
        float xmm0_3
        
        if (*(arg1 + 0x2c) == 0)
            xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x17c))) f+ *(eax_6 + 0x7c)
        else
            xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x180))) f+ *(eax_6 + 0x80)
        
        *(arg1 + 0xa0) = xmm0_3
        result = *(arg1 + 0x100)
        *(arg1 + 0xa4) = result

return result
