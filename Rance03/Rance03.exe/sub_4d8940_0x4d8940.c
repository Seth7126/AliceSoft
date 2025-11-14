// 函数: sub_4d8940
// 地址: 0x4d8940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 0x10)

if (result != *(arg1 + 0x14))
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - result)
    int32_t edx_4 = edx_3 s>> 1
    result = sub_4d90e0(arg1 + 4, *(arg1 + 0x10) + ((edx_4 u>> 0x1f) + edx_4) * 0xc - 0xc)
    void* edi_1 = *(arg1 + 0x14)
    void* ecx_2 = *(edi_1 - 0xc)
    
    if (ecx_2 != 0)
        void* var_10_2 = arg1
        void* var_14_1 = ecx_2
        sub_4d98b0(ecx_2, *(edi_1 - 8))
        result = j__free(*(edi_1 - 0xc))
        *(edi_1 - 0xc) = 0
        *(edi_1 - 8) = 0
        *(edi_1 - 4) = 0
    
    *(arg1 + 0x14) -= 0xc

return result
