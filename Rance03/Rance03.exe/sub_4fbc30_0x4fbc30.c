// 函数: sub_4fbc30
// 地址: 0x4fbc30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** edi = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc_0

if (edi != 0)
    int32_t eax = edi[2]
    
    if (arg3 s< eax || edi[1] + eax s<= arg3)
        vFunc_0 = nullptr
    else
        vFunc_0 = edi[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            return (*(vFunc_0[0x17]->vFunc_0 + 0x50))(arg2, arg4, arg5)
        
        vFunc_0 = sub_4e7720(edi, arg3)
    
    if (vFunc_0 != 0)
        return (*(vFunc_0[0x17]->vFunc_0 + 0x50))(arg2, arg4, arg5)

vFunc_0.b = 0
return vFunc_0
