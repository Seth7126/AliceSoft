// 函数: sub_4f61c0
// 地址: 0x4f61c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1
void* esi_1 = data_7fcba4 + 0x124

if (*(esi_1 + 0x5c) != *(esi_1 + 0x60))
    if (edx s< 0)
        edx = sub_4f4320(esi_1)
    
    int32_t ecx_5 = ((*(esi_1 + 0x60) - *(esi_1 + 0x5c)) s>> 2) - 1
    
    if (ecx_5 s< edx)
        edx = ecx_5
    
    int32_t* eax_4 = *(esi_1 + 0x5c) + (edx << 2)
    
    if (eax_4 != *(esi_1 + 0x60))
        void* result = *(*eax_4 + 4)
        
        if (result != 0)
            return *(result + 0x40)
        
        return result

return 0xffffffff
