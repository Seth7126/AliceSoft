// 函数: sub_4d84e0
// 地址: 0x4d84e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t var_c = arg2
struct partsengine::CPartsList::VTable** edx = sub_4a52a0(arg1 + 0x104)
struct partsengine::CPartsList::VTable** vFunc_0

if (edx != 0)
    int32_t eax = edx[2]
    
    if (arg2 s< eax || edx[1] + eax s<= arg2)
        vFunc_0 = nullptr
    else
        vFunc_0 = edx[3][arg2 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            return sub_4a48f0(vFunc_0, arg3, arg4, 0) != 0
        
        vFunc_0 = sub_4e7720(edx, arg2)
    
    if (vFunc_0 != 0)
        return sub_4a48f0(vFunc_0, arg3, arg4, 0) != 0

vFunc_0.b = 0
return vFunc_0
