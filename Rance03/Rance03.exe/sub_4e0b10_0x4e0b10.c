// 函数: sub_4e0b10
// 地址: 0x4e0b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* arg_8
void* edi = arg_8
sub_485b70(arg1 + 4, edi, 0)
int32_t* result = &arg_8
void* ecx_2 = *(arg1 + 0xf4) - *(arg1 + 0xf8)
arg_8 = ecx_2
var_4 = nullptr

if (ecx_2 s<= 0)
    result = &var_4

if (*result != 0 && edi == 1)
    int32_t eax = *(arg1 + 0x94)
    int32_t eax_1
    
    if (eax == 0)
        eax_1 = 0
    else
        eax_1 = eax + 8
    
    if (arg2 != eax_1)
        void* eax_2 = *(arg1 + 0x88)
        
        if (eax_2 == 0)
            result = nullptr
        else
            result = eax_2 + 8
    
    if (arg2 == eax_1 || arg2 == result)
        void* edi_1 = data_75d4e0
        arg_8 = nullptr
        var_4 = nullptr
        
        if (sub_46cb80(edi_1) != 0)
            (***(edi_1 + 0xc))(&arg_8, &var_4)
        
        void* eax_5 = arg_8
        
        if (*(arg1 + 0x2c) != 0)
            eax_5 = var_4
        
        return sub_4aab20(arg1 + 0xb0, 
            _mm_cvtepi32_ps(zx.o(eax_5 - *(arg1 + 0x9c))) / _mm_cvtepi32_ps(zx.o(*(arg1 + 0xe4)
                - *(arg1 + 0x200) - *(arg1 + 0xf0) - *(arg1 + 0xec))) f+ *(arg1 + 0xa4))

return result
