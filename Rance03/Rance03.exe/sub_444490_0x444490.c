// 函数: sub_444490
// 地址: 0x444490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]
int32_t edx_2 = (eax - *arg1) s>> 1

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 1)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    sub_4444f0(arg1, arg2 - edx_2)
    int32_t edi_1 = arg1[1]
    int32_t eax_6 = (edi_1 - *arg1) s>> 1
    int32_t ecx_1 = arg2 - eax_6
    
    if (arg2 != eax_6)
        int32_t ecx_3
        int32_t edi_2
        edi_2, ecx_3 = __builtin_memset(edi_1, 0, ecx_1 u>> 1 << 2)
        __builtin_memset(edi_2, 0, adc.d(ecx_3, ecx_3, (ecx_1 & 1) != 0) << 1)
    
    int32_t ecx_5 = arg1[1]
    eax = ecx_5 + ((arg2 - ((ecx_5 - *arg1) s>> 1)) << 1)
    arg1[1] = eax

return eax
