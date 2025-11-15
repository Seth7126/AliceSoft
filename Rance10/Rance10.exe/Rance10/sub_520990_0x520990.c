// 函数: sub_520990
// 地址: 0x520990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(arg1 + 0x10, arg3, arg2)
int32_t result = 0
int32_t result_1 = *(arg1 + 0x110) - *(arg1 + 0x114)

if (result_1 s> 0)
    result = result_1

if (result != 0 && arg3[1] == 1)
    void* edx_1 = *(arg1 + 0xb0)
    int32_t ecx_3 = neg.d(edx_1)
    int32_t ecx_6
    int32_t ecx_7
    
    if (arg2 != (sbb.d(ecx_3, ecx_3, edx_1 != 0) & (edx_1 + 0xc)))
        ecx_6 = *(arg1 + 0xa4)
        result = ecx_6 + 0xc
        ecx_7 = neg.d(ecx_6)
    
    if (arg2 == (sbb.d(ecx_3, ecx_3, edx_1 != 0) & (edx_1 + 0xc))
            || arg2 == (sbb.d(ecx_7, ecx_7, ecx_6 != 0) & result))
        (*(**(edx_1 + 0x74) + 0x2c))(3)
        *(*(arg1 + 0xb0) + 0x8e) = 1
        sub_520a60(arg1)
        int32_t ecx_12 = *(arg1 + 0xa4)
        int32_t ecx_13 = neg.d(ecx_12)
        
        if (arg2 == (sbb.d(ecx_13, ecx_13, ecx_12 != 0) & (ecx_12 + 0xc)))
            sub_520ad0(arg1)
        
        void* eax_4 = *(arg1 + 0xb0)
        int32_t eax_5
        
        if (*(arg1 + 0xc) == 0)
            eax_5 = *(eax_4 + 0x90)
        else
            eax_5 = *(eax_4 + 0x94)
        
        *(arg1 + 0xbc) = eax_5
        result = *(arg1 + 0x11c)
        *(arg1 + 0xc0) = result

return result
