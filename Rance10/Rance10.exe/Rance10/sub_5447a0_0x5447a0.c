// 函数: sub_5447a0
// 地址: 0x5447a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x1a, arg4)
    result = *(edi_1 + (arg4 << 2) + 0x7c)
    void* esi_2 = *(result + 0x60)
    void* ecx_3 = *(esi_2 + 8)
    
    if (ecx_3 != 0)
        result = sub_4cdc70(ecx_3, arg2)
        
        if (result != 0xffffffff)
            return sub_4defe0(esi_2, result)

return result
