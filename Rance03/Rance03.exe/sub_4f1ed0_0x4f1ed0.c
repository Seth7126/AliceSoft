// 函数: sub_4f1ed0
// 地址: 0x4f1ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** edi = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc_0

if (edi != 0)
    int32_t eax = edi[2]
    
    if (arg1 s>= eax && edi[1] + eax s> arg1)
        vFunc_0 = edi[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(edi, arg1)
            goto label_4f1f19
        
    label_4f1f1d:
        void* eax_2 = vFunc_0[0x16]
        int32_t edx = *(eax_2 + 0x98)
        int32_t* ecx_7 = *(eax_2 + 0x94)
        
        if (ecx_7 != edx)
            while (*ecx_7 != arg2)
                ecx_7 = &ecx_7[1]
                
                if (ecx_7 == edx)
                    break
        
        int32_t eax_3
        eax_3.b = ecx_7 != edx
        return eax_3
    
    vFunc_0 = nullptr
label_4f1f19:
    
    if (vFunc_0 != 0)
        goto label_4f1f1d

vFunc_0.b = 0
return vFunc_0
