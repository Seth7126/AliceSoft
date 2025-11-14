// 函数: sub_5d33c0
// 地址: 0x5d33c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xc) = 0

if (arg2 == 2)
    int32_t eax_1 = *(arg1 + 0x10)
    
    if (eax_1 u<= 1)
        *(arg1 + 0x10) = eax_1 + 1
        
        if (eax_1 != 0xffffffff)
            int32_t lpMem = *(arg1 + 8)
            int32_t eax_3
            
            if (lpMem == 0)
                eax_3 = HeapAlloc(data_75dc38, HEAP_NONE, eax_1 + 1)
            else
                eax_3 = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, eax_1 + 1)
            
            *(arg1 + 8) = eax_3
            
            if (eax_3 == 0)
                eax_3.b = 0
                return eax_3
    
    *(arg1 + 0xc) = 1
    char* eax_4
    
    if (*(arg1 + 0xc) != 0)
        eax_4 = *(arg1 + 8)
    else
        eax_4 = nullptr
    
    *eax_4 = 0

void* edx = *(arg1 + 0x1c)
*(arg1 + 0x14) = arg2
*(arg1 + 0x18) = 1

if (*(edx + 0x18) s>= 0x989680)
    *(edx + 0x18) = 1

int32_t ecx = *(edx + 0x18)
*(edx + 0x18) = ecx + 1
int32_t eax_5
eax_5.b = 1
*(arg1 + 0x20) = ecx
*(arg1 + 0x24) = 0xffffffff
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0xffffffff
*(arg1 + 0x40) = 0xffffffff
*(arg1 + 0x44) = 0xffffffff
*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0xffffffff
return eax_5
