// 函数: sub_4a8750
// 地址: 0x4a8750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg2
void* eax = sub_4a56f0(arg1 + 4)

if (eax == 0)
label_4a8784:
    int32_t var_c_2 = arg2
    struct partsengine::CPartsList::VTable** eax_1 = sub_4a52a0(arg1 + 4)
    
    if (eax_1 != 0)
        int32_t edi_1 = eax_1[2]
        
        if (arg2 s>= edi_1 && eax_1[1] + edi_1 s> arg2)
            int32_t vFunc_0 = eax_1[3][arg2 - edi_1].vFunc_0
            
            if (vFunc_0 != 0)
                return vFunc_0
            
            return sub_4e7720(eax_1, arg2)
else
    eax.b = *(eax + 0x49c)
    
    if (eax.b == 0)
        goto label_4a8784
    
    int32_t var_c_1 = arg2
    sub_455870(0x6e0698)

return 0
