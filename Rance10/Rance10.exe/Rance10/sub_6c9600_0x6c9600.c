// 函数: sub_6c9600
// 地址: 0x6c9600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s<= 0 || arg3 s> 8)
    int32_t eax
    eax.b = 0
    return eax

char* ebp = *(arg1 + 4)
int32_t edi = *(arg1 + 0xc)
int32_t eax_1 = edi + arg3
int32_t ecx_1 = eax_1 & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

int32_t ecx_4 = neg.d(ecx_1)
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(eax_1)

if (&ebp[neg.d(sbb.d(ecx_4, ecx_4, ecx_1 != 0)) + ((eax_2 + (edx & 7)) s>> 3)] u> *(arg1 + 8))
    void* eax_5
    eax_5.b = 0
    return eax_5

int32_t edx_1
edx_1.b = *ebp
edx_1.b <<= edi.b
*arg2 = edx_1.b
int32_t eax_7

if (*(arg1 + 0xc) + arg3 s> 8)
    *(arg1 + 4) += 1
    char* eax_8
    eax_8.b = **(arg1 + 4)
    eax_8.b u>>= 8 - *(arg1 + 0xc)
    eax_8.b |= *arg2
    eax_8.b u>>= 8 - arg3.b
    *arg2 = eax_8.b
    eax_7 = (*(arg1 + 0xc) + arg3) & 0x80000007
    
    if (eax_7 s< 0)
        eax_7 = ((eax_7 - 1) | 0xfffffff8) + 1
    
    *(arg1 + 0xc) = eax_7
else
    edx_1.b u>>= 8 - arg3.b
    *arg2 = edx_1.b
    *(arg1 + 0xc) += arg3
    
    if (*(arg1 + 0xc) == 8)
        *(arg1 + 4) += 1
        eax_7.b = 1
        *(arg1 + 0xc) = 0
        return eax_7

eax_7.b = 1
return eax_7
