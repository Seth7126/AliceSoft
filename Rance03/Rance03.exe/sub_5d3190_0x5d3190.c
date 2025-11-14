// 函数: sub_5d3190
// 地址: 0x5d3190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CPage::`vftable'
arg1[1] = &memory::CFastMemory::`vftable'
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = arg2
arg1[6] = 1
arg1[7] = arg3

if (*(arg3 + 0x18) s>= 0x989680)
    *(arg3 + 0x18) = 1

int32_t ecx = *(arg3 + 0x18)
*(arg3 + 0x18) = ecx + 1
arg1[8] = ecx
arg1[9] = 0xffffffff
arg1[0xa] = &memory::CFastIntVector::`vftable'
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0xffffffff
arg1[0xf] = 0xffffffff
arg1[0x10] = 0xffffffff
arg1[0x11] = 0xffffffff
arg1[0x12].b = 0
arg1[0x13] = 0xffffffff
__builtin_memset(&arg1[0x14], 0, 0x14)

if (arg2 == 2)
    arg1[3] = 0
    int32_t eax_1 = arg1[4]
    
    if (eax_1 u> 1)
    label_5d329c:
        arg1[3] = 1
        
        if (arg1[3] == 0)
            *0 = 0
            return arg1
        
        arg1[2]->vFunc_0 = 0
    else
        arg1[4] = eax_1 + 1
        
        if (eax_1 == 0xffffffff)
            goto label_5d329c
        
        int32_t lpMem = arg1[2]
        int32_t eax_3
        
        if (lpMem == 0)
            eax_3 = HeapAlloc(data_75dc38, HEAP_NONE, eax_1 + 1)
        else
            eax_3 = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, eax_1 + 1)
        
        arg1[2] = eax_3
        
        if (eax_3 != 0)
            goto label_5d329c

return arg1
