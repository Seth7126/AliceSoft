// 函数: sub_62c5f0
// 地址: 0x62c5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 4)
int32_t result

if (arg2 u>= *(ecx + 0xc))
    result = 0
label_62c60b:
    
    if (*(ecx + 0x14) != 0)
        void* eax_1 = sub_6d4583()
        
        if (arg2 u>= *(eax_1 + 0xc))
            return 0
        
        return *(*(eax_1 + 8) + (arg2 << 2))
else
    result = *(*(ecx + 8) + (arg2 << 2))
    
    if (result == 0)
        goto label_62c60b

return result
