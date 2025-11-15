// 函数: sub_51b370
// 地址: 0x51b370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = arg2

if (sub_4f45c0(arg1 + 0x30) == 0)
    int32_t var_c_1 = arg2
    struct partsengine::CPartsList::VTable** eax_1 = sub_4f14d0(arg1 + 0x34)
    
    if (eax_1 != 0)
        int32_t edi_1 = eax_1[2]
        
        if (arg2 s>= edi_1 && eax_1[1] + edi_1 s> arg2)
            int32_t vFunc_0 = eax_1[3][arg2 - edi_1].vFunc_0
            
            if (vFunc_0 != 0)
                return vFunc_0
            
            int32_t var_c_2 = arg2
            return sub_526580(eax_1)

return 0
