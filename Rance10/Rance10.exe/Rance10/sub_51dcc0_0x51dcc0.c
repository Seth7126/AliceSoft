// 函数: sub_51dcc0
// 地址: 0x51dcc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(arg1 + 0xc, arg3, arg2)
int32_t result = sub_4b8340()

if (result.b == 0)
    result = sub_51fff0(arg1 + 0xc0)
    int32_t ecx_1 = arg3[1]
    
    if (ecx_1 == 1 || ecx_1 == 0x10)
        if (*(arg1 + 0xb0) == result)
            *(arg1 + 0xb0) = 0xffffffff
            *(arg1 + 0xb4) = 0xffffffff
    else if (ecx_1 == 0x11)
        *(arg1 + 0xad) = 0
    else if (ecx_1 == 0xd)
        result.b = *(arg1 + 0x1c1)
        *(arg1 + 0x1c2) = result.b
        *(arg1 + 0x1c1) = 0

if (arg3[1] == 0x10)
    *(arg1 + 0xac) = 0

return result
