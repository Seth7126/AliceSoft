// 函数: sub_4d6d10
// 地址: 0x4d6d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg2
struct partsengine::CPartsList::VTable** edx = sub_4a52a0(arg1 + 0x104)

if (edx != 0)
    int32_t edi_1 = edx[2]
    
    if (arg2 s>= edi_1 && edx[1] + edi_1 s> arg2)
        if (edx[3][arg2 - edi_1].vFunc_0 == 0)
            struct IInterface::VTable** eax_3
            eax_3.b = sub_4e7720(edx, arg2) != 0
            return eax_3
        
        int32_t eax_2
        eax_2.b = 1
        return eax_2

struct partsengine::CPartsList::VTable** eax
eax.b = 0
return eax
