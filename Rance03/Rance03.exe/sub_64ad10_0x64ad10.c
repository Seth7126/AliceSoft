// 函数: sub_64ad10
// 地址: 0x64ad10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &memory::CFastIntVector::`vftable'
arg1[1] = 0
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 8)
int32_t eax_2 = *(arg2 + 8)

if (eax_2 != 0)
    int32_t* eax_4 = HeapAlloc(data_75dc34, HEAP_NONE, eax_2 << 2)
    int32_t ecx_1 = arg1[2] << 2
    arg1[1] = eax_4
    sub_69d850(eax_4, *(arg2 + 4), ecx_1)

return arg1
