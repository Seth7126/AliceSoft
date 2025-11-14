// 函数: sub_4d6d70
// 地址: 0x4d6d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg2
struct partsengine::CPartsList::VTable** eax = sub_4a52a0(arg1 + 0x104)

if (eax != 0)
    int32_t edi_1 = eax[2]
    
    if (arg2 s>= edi_1 && eax[1] + edi_1 s> arg2)
        int32_t vFunc_0 = eax[3][arg2 - edi_1].vFunc_0
        
        if (vFunc_0 != 0)
            return vFunc_0
        
        return sub_4e7720(eax, arg2)

return 0
