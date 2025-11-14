// 函数: sub_4f0040
// 地址: 0x4f0040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** eax = sub_4a52a0(data_75d4fc + 0x178)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct IInterface::VTable** vFunc_0
    
    if (arg1 s< eax_1 || eax[1] + eax_1 s<= arg1)
        vFunc_0 = nullptr
    label_4f0089:
        
        if (vFunc_0 != 0)
            goto label_4f008d
    else
        vFunc_0 = eax[3][arg1 - eax_1].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax, arg1)
            goto label_4f0089
        
    label_4f008d:
        int32_t* ecx_7 = vFunc_0[0x17]
        
        if (ecx_7 != 0)
            return (*(*ecx_7 + 8))(arg2)

return 0xffffffff
