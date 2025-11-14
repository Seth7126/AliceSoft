// 函数: sub_4f04b0
// 地址: 0x4f04b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            return sub_4a1f50(vFunc_0, arg2, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)
        
        vFunc_0 = sub_4e7720(vFunc, arg3)
    
    if (vFunc_0 != 0)
        return sub_4a1f50(vFunc_0, arg2, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)

return vFunc_0
