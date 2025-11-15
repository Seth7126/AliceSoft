// 函数: sub_625a00
// 地址: 0x625a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 8)
int32_t ebp = *(arg1 + 0xc)
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
int32_t lpMem_1 = *(arg1 + 4)
*(arg1 + 4) = 0

if (arg1 != arg2)
    *(arg1 + 4) = *(arg2 + 4)
    *(arg1 + 8) = *(arg2 + 8)
    *(arg1 + 0xc) = *(arg2 + 0xc)
    *(arg2 + 4) = 0
    *(arg2 + 8) = 0
    *(arg2 + 0xc) = 0

void var_14

if (arg2 == &var_14)
    if (lpMem_1 == 0)
        return &var_14
    
    return HeapFree(data_7fcbf4, HEAP_NONE, lpMem_1)

BOOL lpMem = *(arg2 + 4)

if (lpMem != 0)
    lpMem = HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

*(arg2 + 4) = lpMem_1
*(arg2 + 8) = ebx
*(arg2 + 0xc) = ebp
return lpMem
