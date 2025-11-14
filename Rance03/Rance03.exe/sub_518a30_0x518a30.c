// 函数: sub_518a30
// 地址: 0x518a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm2 = arg3 + arg5
float esi = *(arg1 + 0xc0)
float edx_1

if (esi s> 0)
    edx_1 = *(arg1 + 0xc4)

int32_t edx_2
float esi_1

if (esi s<= 0 || edx_1 s<= 0)
    edx_2 = arg7
    esi_1 = arg6
else
    bool cond:0_1 = esi s>= arg6
    float* eax_1 = &arg5
    arg5 = esi
    
    if (cond:0_1)
        eax_1 = &arg6
    
    esi_1 = *eax_1
    int32_t* eax_2 = &arg6
    
    if (edx_1 s>= arg7)
        eax_2 = &arg7
    
    arg6 = edx_1
    edx_2 = *eax_2

*(arg1 + 0xa0) = esi_1
*(arg1 + 0xa4) = edx_2
*(arg1 + 0x98) = int.d(arg2 + arg4)
int32_t result = int.d(xmm2)
*(arg1 + 0x9c) = result
return result
