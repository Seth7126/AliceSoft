// 函数: sub_5573b0
// 地址: 0x5573b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int128_t xmm0 = *arg17
int128_t* eax
eax.b = arg19.b
*(arg1 + 0x20) = eax.b
*(arg1 + 0x10) = xmm0
*(arg1 + 0x58) = arg20
int32_t result = *(arg1 + 0x38)

if (result == *(arg1 + 0x3c))
    *(arg1 + 0x50) = 0xffffffff
else
    float xmm2_1 = *(arg1 + 8)
    xmm2_1 f- 0
    result:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
        | (xmm2_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        *(arg1 + 0x50) = 0xffffffff
    else
        if (not(0 f<= arg2))
            arg2 = (zx.o(0)).d
        
        int32_t ecx_2 = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(int.d(arg2 / xmm2_1))
        result = divs.dp.d(edx_1:eax_2, ecx_2)
        *(arg1 + 0x50) = mods.dp.d(edx_1:eax_2, ecx_2)

int32_t ecx_3 = *(arg1 + 0x50)

if (ecx_3 s>= 0)
    result = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2
    
    if (ecx_3 s< result)
        arg19 = arg1
        sub_412de0(arg21 + 4, &arg19)
        int32_t* ecx_7 = *(*(*(arg1 + 0x38) + (*(arg1 + 0x50) << 2)) + 0x10)
        
        if (ecx_7 != 0)
            char eax_9
            eax_9, ecx_7 = (*(*ecx_7 + 0x28))()
            arg19.b = eax_9
        else
            arg19.b = ecx_7.b
        
        int32_t* var_10_1 = ecx_7
        return sub_557500(arg1, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, 
            arg13, arg14, arg15, arg16, arg18, arg19.b)

return result
