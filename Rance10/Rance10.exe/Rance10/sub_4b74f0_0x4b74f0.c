// 函数: sub_4b74f0
// 地址: 0x4b74f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(arg1 + 0xc, arg3, arg2)
void* result = sub_4b8340()

if (result.b == 0 && *(arg1 + 0xf0) == result.b)
    result = arg3[1]
    bool cond:0_1
    
    if (result != 1)
        if (result == 0x26)
            return sub_4b83c0(arg1, 1)
        
        cond:0_1 = result != 0x28
    else
        int32_t ecx_1 = *(arg1 + 0xa4)
        int32_t ecx_2 = neg.d(ecx_1)
        
        if (arg2 == (sbb.d(ecx_2, ecx_2, ecx_1 != 0) & (ecx_1 + 0xc)))
            return sub_4b83c0(arg1, 1)
        
        void* ecx_6 = *(arg1 + 0xa8)
        result = ecx_6 + 0xc
        int32_t ecx_7 = neg.d(ecx_6)
        cond:0_1 = arg2 != (sbb.d(ecx_7, ecx_7, ecx_6 != 0) & result)
    
    if (not(cond:0_1))
        return sub_4b83c0(arg1, 0xffffffff)

return result
