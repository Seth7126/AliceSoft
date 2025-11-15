// 函数: sub_54e7d0
// 地址: 0x54e7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
*arg2 = _mm_cvtepi32_ps(zx.o(*arg3))
arg1[1] = 0
arg2[1] = _mm_cvtepi32_ps(zx.o(*arg4))

if (arg5[5] s> 0 && arg5[6] s> 0)
    int32_t edi_1 = *arg3
    
    if (arg5[2] s< edi_1)
        int32_t eax_1 = *arg4
        
        if (arg5[3] s< eax_1)
            int32_t edi_2 = edi_1 - arg5[2]
            
            if (arg5[5] s< edi_2)
                edi_2 = arg5[5]
            
            int32_t* eax_2 = eax_1 - arg5[3]
            bool cond:3_1 = arg5[6] s< eax_2
            int32_t xmm0_5 = _mm_cvtepi32_ps(zx.o(arg5[2]))
            
            if (cond:3_1)
                eax_2 = arg5[6]
            
            *arg1 = xmm0_5
            *arg2 = _mm_cvtepi32_ps(zx.o(arg5[2] + edi_2))
            arg1[1] = _mm_cvtepi32_ps(zx.o(arg5[3]))
            arg2[1] = _mm_cvtepi32_ps(zx.o(arg5[3] + eax_2))
            *arg3 = edi_2
            *arg4 = eax_2

int32_t* ecx
ecx.b = arg6
int32_t* eax_7 = arg1
char temp1 = ecx.b

if (temp1 != 0)
    eax_7 = arg2

int32_t* result = arg2

if (temp1 != 0)
    result = arg1

int32_t xmm3 = *result
int32_t xmm0_12
int32_t xmm1

if (arg7 == 0)
    xmm0_12 = arg1[1]
    xmm1 = arg2[1]
else
    xmm0_12 = arg2[1]
    xmm1 = arg1[1]

*arg1 = *eax_7
arg1[1] = xmm0_12
*arg2 = xmm3
arg2[1] = xmm1
return result
