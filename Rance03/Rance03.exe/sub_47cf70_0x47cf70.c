// 函数: sub_47cf70
// 地址: 0x47cf70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg3 + 8))() s>= arg5 && (*(*arg2 + 8))() s>= arg5)
    int32_t xmm2 = (zx.o(0)).d
    int32_t xmm0 = (zx.o(0)).d
    int32_t var_10 = 0
    int32_t esi = 0
    int32_t var_c = 0
    
    if (arg5 s> 0)
        do
            int32_t* ebp_1 = (*(*arg3 + 0x10))(esi)
            int32_t* eax_4
            
            if (ebp_1 != 0)
                eax_4 = (*(*arg2 + 0x10))(esi)
            
            if (ebp_1 == 0 || eax_4 == 0)
                eax_4.b = 0
                return eax_4
            
            float xmm0_1 = sub_47ce80(esi, arg5 - 1, arg4)
            esi += 1
            xmm2 = _mm_cvtepi32_ps(zx.o(*ebp_1)) * xmm0_1 f+ var_10
            var_10 = xmm2
            xmm0 = xmm0_1 * _mm_cvtepi32_ps(zx.o(*eax_4)) f+ var_c
            var_c = xmm0
        while (esi s< arg5)
    
    *arg6 = int.d(xmm2)
    *arg7 = int.d(xmm0)
    int32_t* eax_7
    eax_7.b = 1
    return eax_7

int32_t eax_1
eax_1.b = 0
return eax_1
