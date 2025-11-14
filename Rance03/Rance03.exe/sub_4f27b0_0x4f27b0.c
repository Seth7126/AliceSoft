// 函数: sub_4f27b0
// 地址: 0x4f27b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** edi = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc_0

if (edi != 0)
    int32_t eax = edi[2]
    
    if (arg1 s< eax || edi[1] + eax s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = edi[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 != 0)
        label_4f2801:
            sub_4b8130(&vFunc_0[0x1b], arg2)
            int32_t eax_2
            eax_2.b = 1
            return eax_2
        
        vFunc_0 = sub_4e7720(edi, arg1)
    
    if (vFunc_0 != 0)
        goto label_4f2801

vFunc_0.b = 0
return vFunc_0
