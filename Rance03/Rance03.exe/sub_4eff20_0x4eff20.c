// 函数: sub_4eff20
// 地址: 0x4eff20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg1 s< eax || vFunc[1] + eax s<= arg1)
        vFunc_0 = nullptr
    label_4eff69:
        
        if (vFunc_0 != 0)
            vFunc_0[0x1e].b = ebx.b
    else
        vFunc_0 = vFunc[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(vFunc, arg1)
            goto label_4eff69
        
        vFunc_0[0x1e].b = ebx.b

return vFunc_0
