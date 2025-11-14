// 函数: sub_4294e0
// 地址: 0x4294e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** ebp = arg1

if (arg3 == 0)
    return 0

void* esi = ebp[4]

if (esi != 0 && arg3 u<= esi)
    void* i = esi + 1 - arg3
    void* ebx_1
    
    if (ebp[5] u< 0x10)
        ebx_1 = ebp
    else
        ebx_1 = *ebp
    
    while (i != 0)
        void* eax_5 = _memchr(ebx_1, *arg2, i)
        int32_t* edi_1 = eax_5
        
        if (edi_1 == 0)
            break
        
        if (sub_405190(eax_5, arg2, edi_1, arg3) == 0)
            if (ebp[5] u>= 0x10)
                ebp = *ebp
            
            return edi_1 - ebp
        
        i += ebx_1 - edi_1 - 1
        ebx_1 = edi_1 + 1

return 0xffffffff
