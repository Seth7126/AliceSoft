// 函数: sub_4a89a0
// 地址: 0x4a89a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t var_c = arg2
struct partsengine::CPartsList::VTable** eax = sub_4a52a0(arg1 + 4)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct IInterface::VTable** vFunc_0
    
    if (arg2 s< eax_1 || eax[1] + eax_1 s<= arg2)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax[3][arg2 - eax_1].vFunc_0
        
        if (vFunc_0 != 0)
            return sub_4a3cd0(vFunc_0)
        
        vFunc_0 = sub_4e7720(eax, arg2)
    
    if (vFunc_0 != 0)
        return sub_4a3cd0(vFunc_0)

return 0
