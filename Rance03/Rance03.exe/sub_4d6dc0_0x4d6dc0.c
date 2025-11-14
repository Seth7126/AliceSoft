// 函数: sub_4d6dc0
// 地址: 0x4d6dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg2

if (sub_4a55e0(arg1 + 0x104) != 0)
    int32_t var_c_1 = arg2
    struct partsengine::CPartsList::VTable** eax_1 = sub_4a52a0(arg1 + 0x104)
    
    if (eax_1 != 0)
        int32_t eax_2 = eax_1[2]
        struct IInterface::VTable** vFunc_0
        
        if (arg2 s< eax_2 || eax_1[1] + eax_2 s<= arg2)
            vFunc_0 = nullptr
        else
            vFunc_0 = eax_1[3][arg2 - eax_2].vFunc_0
            
            if (vFunc_0 != 0)
                return vFunc_0[0x1d]
            
            vFunc_0 = sub_4e7720(eax_1, arg2)
        
        if (vFunc_0 != 0)
            return vFunc_0[0x1d]

return 0xffffffff
