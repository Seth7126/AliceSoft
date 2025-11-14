// 函数: sub_414c70
// 地址: 0x414c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x14) - *(arg2 + 0x10))
int32_t edx_3 = edx_2 s>> 2
sub_415390(arg1 + 0x64, (edx_3 u>> 0x1f) + edx_3)
int32_t i = 0
int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x68) - *(arg1 + 0x64))
int32_t edx_5 = edx_4 s>> 3

if ((edx_5 u>> 0x1f) + edx_5 s> 0)
    int32_t esi_1 = 0
    int32_t edi_1 = 0
    int32_t edx_9
    
    do
        char* ecx_4 = *(arg1 + 0x64) + esi_1
        void** eax_11 = *(arg2 + 0x10) + edi_1
        
        if (ecx_4 != eax_11)
            sub_401ff0(ecx_4, eax_11, 0, 0xffffffff)
        
        char* ecx_7 = *(arg1 + 0x64) + 0x18 + esi_1
        void** edx_7 = *(arg2 + 0x1c) + edi_1
        
        if (ecx_7 != edx_7)
            sub_401ff0(ecx_7, edx_7, 0, 0xffffffff)
        
        i += 1
        int32_t eax_13
        int32_t edx_8
        edx_8:eax_13 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x68) - *(arg1 + 0x64))
        edi_1 += 0x18
        esi_1 += 0x30
        edx_9 = edx_8 s>> 3
    while (i s< (edx_9 u>> 0x1f) + edx_9)

InvalidateRect(*(arg1 + 0xc), nullptr, 1)
return UpdateWindow(*(arg1 + 0xc))
