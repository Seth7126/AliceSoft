// 函数: sub_53a990
// 地址: 0x53a990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** edi = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc_0

if (edi != 0)
    int32_t eax = edi[2]
    
    if (arg1 s>= eax && edi[1] + eax s> arg1)
        vFunc_0 = edi[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg1
            vFunc_0 = sub_526580(edi)
            goto label_53a9d9
        
    label_53a9dd:
        void* eax_2 = vFunc_0[0x1c]
        int32_t ecx_7 = *(eax_2 + 0xc4)
        int32_t* edx = *(eax_2 + 0xc0)
        
        if (edx != ecx_7)
            while (*edx != arg2)
                edx = &edx[1]
                
                if (edx == ecx_7)
                    break
        
        int32_t eax_3
        eax_3.b = edx != ecx_7
        return eax_3
    
    vFunc_0 = nullptr
label_53a9d9:
    
    if (vFunc_0 != 0)
        goto label_53a9dd

vFunc_0.b = 0
return vFunc_0
