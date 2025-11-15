// 函数: ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAEAAV12@II@Z
// 地址: 0x6e3277
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[4]

if (edi u< arg2)
    sub_6321b0()
    noreturn

if (edi - arg2 u<= arg3)
    arg1[4] = arg2
    int32_t* eax_2
    
    if (arg1[5] u< 8)
        eax_2 = arg1
    else
        eax_2 = *arg1
    
    *(eax_2 + (arg2 << 1)) = 0
else if (arg3 != 0)
    int32_t* eax_3
    
    if (arg1[5] u< 8)
        eax_3 = arg1
    else
        eax_3 = *arg1
    
    void* ecx = eax_3 + (arg2 << 1)
    int32_t edi_1 = edi - arg3
    sub_6e3507(ecx, ecx + (arg3 << 1), edi_1 - arg2)
    arg1[4] = edi_1
    int32_t* eax_7
    
    if (arg1[5] u< 8)
        eax_7 = arg1
    else
        eax_7 = *arg1
    
    *(eax_7 + (edi_1 << 1)) = 0

return arg1
