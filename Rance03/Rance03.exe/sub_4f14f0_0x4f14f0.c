// 函数: sub_4f14f0
// 地址: 0x4f14f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
int32_t var_14 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    label_4f153a:
        
        if (vFunc_0 != 0)
            goto label_4f154a
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(vFunc, arg3)
            goto label_4f153a
        
    label_4f154a:
        
        if (vFunc_0[0x32] != arg2 || vFunc_0[0x33] != arg4 || vFunc_0[0x34] != arg5
                || vFunc_0[0x35] != arg6)
            vFunc_0[0x32] = arg2
            vFunc_0[0x33] = arg4
            vFunc_0[0x34] = arg5
            vFunc_0[0x35] = arg6
            vFunc_0[0x1c].b = 1

return vFunc_0
