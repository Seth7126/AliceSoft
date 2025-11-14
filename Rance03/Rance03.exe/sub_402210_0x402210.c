// 函数: sub_402210
// 地址: 0x402210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[4]

if (edi u< arg2)
    sub_69a57f("invalid string position")
    noreturn

if (edi - arg2 u<= arg3)
    bool cond:0 = arg1[5] u< 0x10
    arg1[4] = arg2
    
    if (cond:0)
        *(arg1 + arg2) = 0
        return arg1
    
    (*arg1)[arg2] = 0
    return arg1

if (arg3 != 0)
    int32_t* eax_5
    
    if (arg1[5] u< 0x10)
        eax_5 = arg1
    else
        eax_5 = *arg1
    
    int32_t edi_1 = edi - arg3
    void* ebx_1 = eax_5 + arg2
    
    if (edi_1 != arg2)
        _memcpy(ebx_1, ebx_1 + arg3, edi_1 - arg2)
    
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = edi_1
    
    if (not(cond:1_1))
        (*arg1)[edi_1] = 0
        return arg1
    
    *(arg1 + edi_1) = 0

return arg1
