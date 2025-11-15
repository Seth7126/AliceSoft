// 函数: sub_5f0670
// 地址: 0x5f0670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t edi = arg1[2]

if (edx == edi && (edi - edx) s>> 4 u< 1)
    int32_t ecx = *arg1
    int32_t edx_2 = (edx - ecx) s>> 4
    
    if (0xfffffff - edx_2 u< 1)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t edx_3 = edx_2 + 1
    int32_t edi_2 = (edi - ecx) s>> 4
    int32_t ecx_1 = 0
    uint32_t eax_6 = edi_2 u>> 1
    
    if (0xfffffff - eax_6 u>= edi_2)
        ecx_1 = eax_6 + edi_2
    
    if (ecx_1 u>= edx_3)
        edx_3 = ecx_1
    
    sub_5f05a0(arg1, edx_3)

int32_t* ecx_3 = arg1[1]

if (ecx_3 != 0)
    int32_t xmm1_1 = *arg3
    int32_t xmm0_1 = *arg4
    *ecx_3 = *arg2
    ecx_3[1] = xmm1_1
    ecx_3[2] = xmm0_1
    ecx_3[3] = 0x3f800000

arg1[1] = &ecx_3[4]
return &ecx_3[4]
