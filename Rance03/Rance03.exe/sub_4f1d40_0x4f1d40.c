// 函数: sub_4f1d40
// 地址: 0x4f1d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg1
struct partsengine::CPartsList::VTable** edx = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc_0

if (edx != 0)
    int32_t eax = edx[2]
    
    if (arg1 s< eax || edx[1] + eax s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = edx[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            vFunc_0.b = vFunc_0[0x3d].b
            return vFunc_0
        
        vFunc_0 = sub_4e7720(edx, arg1)
    
    if (vFunc_0 != 0)
        vFunc_0.b = vFunc_0[0x3d].b
        return vFunc_0

vFunc_0.b = 0
return vFunc_0
