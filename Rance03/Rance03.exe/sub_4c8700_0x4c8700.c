// 函数: sub_4c8700
// 地址: 0x4c8700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char result
int32_t ecx
result, ecx = (*(*arg1 + 0x18))()

if (result == 0)
    return result

void* esi = data_75d530

if (*(esi + 4) != 0)
label_4c8742:
    
    if (sub_5e23a0(*(esi + 4)) == 0)
        goto label_4c874b
else
    if (data_75d534 != 0)
        int32_t var_8_1 = ecx
        int32_t* eax_1 = sub_6203f0()
        
        if (eax_1 == 0)
            goto label_4c874b
        
        int32_t eax_2 = (**eax_1)(&data_6ecca8)
        *(esi + 4) = eax_2
        
        if (eax_2 == 0)
            goto label_4c874b
        
        goto label_4c8742
    
label_4c874b:
    
    if (sub_4e34d0() == 0)
        return 0

return 1
