// 函数: sub_4f0ca0
// 地址: 0x4f0ca0
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
        label_4f0ced:
            int32_t var_10_2 = arg5
            int32_t var_14_1 = arg4
            return sub_4b7960(&vFunc_0[0x1b], arg2)
        
        vFunc_0 = sub_4e7720(vFunc, arg3)
    
    if (vFunc_0 != 0)
        goto label_4f0ced

return vFunc_0
