// 函数: sub_5b5f90
// 地址: 0x5b5f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2
int32_t edi = arg3
int32_t var_10 = edi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t ecx_1 = (eax_1 - edx) s>> 1
int32_t var_c = ecx_1

if (arg4 s< ebp)
    while (true)
        int32_t eax_4 = ecx_1 * 7
        void* ecx_2 = edi + (eax_4 << 3)
        int32_t eax_5
        uint32_t edx_1
        eax_5, edx_1 =
            __allmul(*(edi + (eax_4 << 3) + 0x30), *(edi + (eax_4 << 3) + 0x34), 0x3e8, 0)
        uint32_t edi_1 = data_75d564
        int32_t esi_1 = data_75d560
        uint32_t eax_6
        int32_t edx_2
        eax_6, edx_2 = __alldiv(eax_5, edx_1, esi_1, edi_1)
        int32_t eax_8
        uint32_t edx_3
        eax_8, edx_3 = __allmul(*(arg5 + 0x30), *(arg5 + 0x34), 0x3e8, 0)
        uint32_t eax_9
        int32_t edx_4
        eax_9, edx_4 = __alldiv(eax_8, edx_3, esi_1, edi_1)
        
        if (edx_2 s< edx_4 || (edx_2 s<= edx_4 && eax_6 u<= eax_9))
            edi = var_10
            break
        
        edi = var_10
        int32_t esi_3 = ebp * 7
        char* ecx_4 = edi + 8 + (esi_3 << 3)
        
        if (ecx_4 != ecx_2 + 8)
            sub_401ff0(ecx_4, ecx_2 + 8, 0, 0xffffffff)
        
        *(edi + (esi_3 << 3) + 0x20) = *(ecx_2 + 0x20)
        sub_5b5aa0(edi + 0x24 + (esi_3 << 3), ecx_2 + 0x24)
        *(edi + (esi_3 << 3) + 0x30) = *(ecx_2 + 0x30)
        *(edi + (esi_3 << 3) + 0x34) = *(ecx_2 + 0x34)
        ebp = var_c
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = sx.q(var_c - 1)
        ecx_1 = (eax_17 - edx_5) s>> 1
        var_c = ecx_1
        
        if (arg4 s>= ebp)
            break
        
        continue

void* esi_4 = edi + ebp * 0x38

if (esi_4 + 8 != arg5 + 8)
    sub_401ff0(esi_4 + 8, arg5 + 8, 0, 0xffffffff)

*(esi_4 + 0x20) = *(arg5 + 0x20)
sub_5b5aa0(esi_4 + 0x24, arg5 + 0x24)
*(esi_4 + 0x30) = *(arg5 + 0x30)
int32_t result = *(arg5 + 0x34)
*(esi_4 + 0x34) = result
return result
