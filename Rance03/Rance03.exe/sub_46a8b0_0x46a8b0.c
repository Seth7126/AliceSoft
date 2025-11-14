// 函数: sub_46a8b0
// 地址: 0x46a8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ebp = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_2 = (*(*arg1 + 0x1c))()
int32_t eax_4 = (*(*arg6 + 0x10))()
int32_t* eax_5 = (*(*arg6 + 0x14))()
int32_t eax_6 = (*(*arg6 + 8))(0, 0)
int32_t* eax_7 = (*(*arg6 + 0x1c))()
int32_t edx_5 = int.d(arg8)
int32_t i_1 = arg5
float xmm1_1 = arg8 - _mm_cvtepi32_ps(zx.o(edx_5))
float xmm1_4 = arg9 / _mm_cvtepi32_ps(zx.o(arg4))
int32_t edx_7 = (edx_5 << 0x10) - int.d(xmm1_1 * -65536f)
arg2 = edx_7
int32_t ecx_8 = int.d(xmm1_4)
float xmm1_5 = xmm1_4 - _mm_cvtepi32_ps(zx.o(ecx_8))
float xmm1_8 = arg10 / _mm_cvtepi32_ps(zx.o(i_1))
int32_t esi_2 = int.d(xmm1_8)
int32_t result = int.d((xmm1_8 - _mm_cvtepi32_ps(zx.o(esi_2))) * -65536f)
int32_t esi_4 = (esi_2 << 0x10) - result
arg9 = esi_4

if (i_1 s> 0)
    int32_t ebx_1 = int.d(arg7)
    int32_t result_1 = (ebx_1 << 0x10) - int.d((arg7 - _mm_cvtepi32_ps(zx.o(ebx_1))) * -65536f)
    arg10 = result_1
    int32_t i
    
    do
        void* eax_11 = edx_7 s>> 0x10
        
        if (eax_11 s>= eax_5)
            eax_11 = eax_5 - 1
        
        float eax_14 = eax_11 * eax_7 + eax_6
        result = result_1
        
        if (arg4 s> 0)
            arg3 = arg4
            int32_t j
            
            do
                int32_t edi_1 = result s>> 0x10
                
                if (edi_1 s>= eax_4)
                    edi_1 = eax_4 - 1
                
                result += (ecx_8 << 0x10) - int.d(xmm1_5 * -65536f)
                *ebp = *(eax_14 i+ (edi_1 << 2))
                ebp[1] = *(eax_14 i+ (edi_1 << 2) + 1)
                ebp[2] = *(eax_14 i+ (edi_1 << 2) + 2)
                ebp = &ebp[4]
                j = arg3
                arg3 -= 1
            while (j != 1)
            edx_7 = arg2
            esi_4 = arg9
            result_1 = arg10
            i_1 = arg5
        
        ebp = &ebp[eax_2 - (arg4 << 2)]
        edx_7 += esi_4
        i = i_1
        i_1 -= 1
        arg2 = edx_7
        arg5 = i_1
    while (i != 1)

return result
