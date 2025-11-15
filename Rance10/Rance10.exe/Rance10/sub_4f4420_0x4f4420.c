// 函数: sub_4f4420
// 地址: 0x4f4420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = *(arg1 + 0x5c)

for (int32_t* i = i_1; i != *(arg1 + 0x60); i = &i[1])
    void* ecx_1 = *(*i + 4)
    
    if (ecx_1 != 0)
        ecx_1 = *(ecx_1 + 0x40)
    
    if (ecx_1 == arg4)
        int32_t esi_1 = (i - i_1) s>> 2
        
        if (esi_1 != 0xffffffff)
            return sub_4f4360(arg1, arg2, arg3, esi_1 + 1)
        
        break

return sub_4f4360(arg1, arg2, arg3, 0xffffffff)
