// 函数: sub_4f18c0
// 地址: 0x4f18c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg1 s< eax || vFunc[1] + eax s<= arg1)
        vFunc_0 = nullptr
    label_4f1909:
        
        if (vFunc_0 != 0)
            goto label_4f190d
    else
        vFunc_0 = vFunc[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(vFunc, arg1)
            goto label_4f1909
        
    label_4f190d:
        
        if (vFunc_0[0x38] != arg2)
            vFunc_0[0x38] = arg2
            vFunc_0[0x1c].b = 1

return vFunc_0
