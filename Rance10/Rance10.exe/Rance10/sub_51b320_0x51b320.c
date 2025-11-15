// 函数: sub_51b320
// 地址: 0x51b320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = arg2
struct partsengine::CPartsList::VTable** eax = sub_4f14d0(arg1 + 0x34)

if (eax != 0)
    int32_t edi_1 = eax[2]
    
    if (arg2 s>= edi_1 && eax[1] + edi_1 s> arg2)
        int32_t vFunc_0 = eax[3][arg2 - edi_1].vFunc_0
        
        if (vFunc_0 != 0)
            return vFunc_0
        
        int32_t var_c_1 = arg2
        return sub_526580(eax)

return 0
