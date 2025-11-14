// 函数: sub_443090
// 地址: 0x443090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[0x33] == arg1[0x34])
    int32_t* ecx_1 = arg1[0x10c]
    
    if (ecx_1 != 0)
        arg1[0x10d] = (**ecx_1)() - arg2
    label_4430e3:
        sub_443140(arg1)
        int32_t eax_4
        eax_4.b = 1
        return eax_4
else
    int32_t* ecx = *(data_75d4e4 + 0x93c)
    
    if (ecx != 0)
        int32_t var_8_1 = arg2
        
        if (sub_4768c0(ecx, arg1[0x10b]).b != 0)
            goto label_4430e3

void* eax
eax.b = 0
return eax
