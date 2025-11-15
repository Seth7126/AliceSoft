// 函数: sub_455740
// 地址: 0x455740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (arg2 s>= 2)
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
        return 0
    
    uint32_t ecx_6 =
        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    *(arg3 + 4) = &edx_1[4]
    sub_456890(arg1 + 0x1c, ecx_6)
    void* esi_2 = *(arg1 + 0x1c)
    int32_t edi_1 = *(arg1 + 0x20)
    
    if (esi_2 != edi_1)
        while (true)
            if (sub_45a5d0(esi_2, arg3, arg2) == 0)
                return 0
            
            esi_2 += 0x44
            
            if (esi_2 == edi_1)
                return 1

return 1
