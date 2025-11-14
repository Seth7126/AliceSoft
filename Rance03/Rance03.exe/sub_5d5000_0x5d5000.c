// 函数: sub_5d5000
// 地址: 0x5d5000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xc) = 0

if (arg3 s> 0)
    int32_t eax_1 = *(arg1 + 0x10)
    
    if (eax_1 u<= 0xc)
        *(arg1 + 0x10) = eax_1 + 0xc
        
        if (eax_1 != 0xfffffff4)
            int32_t lpMem = *(arg1 + 8)
            int32_t eax_3
            
            if (lpMem == 0)
                eax_3 = HeapAlloc(data_75dc38, HEAP_NONE, eax_1 + 0xc)
            else
                eax_3 = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, eax_1 + 0xc)
            
            *(arg1 + 8) = eax_3
            
            if (eax_3 == 0)
                eax_3.b = 0
                return eax_3
    
    *(arg1 + 0xc) = 0xc
    int32_t* ecx
    
    if (*(arg1 + 0xc) != 0)
        ecx = *(arg1 + 8)
    else
        ecx = nullptr
    
    *ecx = arg2
    ecx[1] = arg3
    ecx[2] = arg4

int32_t eax
eax.b = 1
return eax
