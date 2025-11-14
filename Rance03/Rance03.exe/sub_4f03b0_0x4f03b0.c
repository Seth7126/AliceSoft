// 函数: sub_4f03b0
// 地址: 0x4f03b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** eax = sub_4a52a0(data_75d4fc + 0x178)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct IInterface::VTable** vFunc_0
    
    if (arg1 s>= eax_1 && eax[1] + eax_1 s> arg1)
        vFunc_0 = eax[3][arg1 - eax_1].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax, arg1)
            goto label_4f03f9
        
    label_4f0403:
        int32_t eax_6 = *(vFunc_0[0x14][0xb].vFunc_0 + 0x90)
        
        if (eax_6 s> 0)
            int32_t var_10_2 = eax_6
            void* eax_7 = sub_4a56f0(vFunc_0[0x15])
            
            if (eax_7 != 0)
                int32_t eax_8 = sub_4a1dd0(eax_7)
                return vFunc_0[0x21] + eax_8
        
        return vFunc_0[0x21]
    
    vFunc_0 = nullptr
label_4f03f9:
    
    if (vFunc_0 != 0)
        goto label_4f0403

return 0
