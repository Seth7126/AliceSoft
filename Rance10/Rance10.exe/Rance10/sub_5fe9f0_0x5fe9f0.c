// 函数: sub_5fe9f0
// 地址: 0x5fe9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2
int32_t edi = arg3
int32_t var_10 = edi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t ecx_1 = (eax_1 - edx) s>> 1
int32_t var_8 = ecx_1

if (arg4 s< ebp)
    while (true)
        void* eax_5 = edi + ecx_1 * 0x38
        int32_t eax_7
        uint32_t edx_1
        eax_7, edx_1 = __allmul(*(arg5 + 0x30), *(arg5 + 0x34), 0x3e8, 0)
        uint32_t edi_1 = data_7fcbec
        int32_t esi_1 = data_7fcbe8
        uint32_t eax_8
        int32_t edx_2
        eax_8, edx_2 = __alldiv(eax_7, edx_1, esi_1, edi_1)
        int32_t eax_10
        uint32_t edx_3
        eax_10, edx_3 = __allmul(*(eax_5 + 0x30), *(eax_5 + 0x34), 0x3e8, 0)
        uint32_t eax_11
        int32_t edx_4
        eax_11, edx_4 = __alldiv(eax_10, edx_3, esi_1, edi_1)
        
        if (edx_4 s< edx_2 || (edx_4 s<= edx_2 && eax_11 u<= eax_8))
            edi = var_10
            break
        
        edi = var_10
        int32_t esi_3 = ebp * 7
        char* ecx_3 = edi + 8 + (esi_3 << 3)
        
        if (ecx_3 != eax_5 + 8)
            sub_403590(ecx_3, eax_5 + 8, 0, 0xffffffff)
        
        *(edi + (esi_3 << 3) + 0x20) = *(eax_5 + 0x20)
        sub_5fe0d0(edi + 0x24 + (esi_3 << 3), eax_5 + 0x24)
        *(edi + (esi_3 << 3) + 0x30) = *(eax_5 + 0x30)
        *(edi + (esi_3 << 3) + 0x34) = *(eax_5 + 0x34)
        ebp = var_8
        int32_t eax_19
        int32_t edx_5
        edx_5:eax_19 = sx.q(var_8 - 1)
        ecx_1 = (eax_19 - edx_5) s>> 1
        var_8 = ecx_1
        
        if (arg4 s>= ebp)
            break
        
        continue

void* esi_4 = edi + ebp * 0x38

if (esi_4 + 8 != arg5 + 8)
    sub_403590(esi_4 + 8, arg5 + 8, 0, 0xffffffff)

*(esi_4 + 0x20) = *(arg5 + 0x20)
sub_5fe0d0(esi_4 + 0x24, arg5 + 0x24)
*(esi_4 + 0x30) = *(arg5 + 0x30)
int32_t result = *(arg5 + 0x34)
*(esi_4 + 0x34) = result
return result
