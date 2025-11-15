// 函数: sub_544d90
// 地址: 0x544d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = result[0x11]
    sub_555e00(edi_1, 0x1a, arg4)
    void* esi_2 = *(edi_1 + (arg4 << 2) + 0x7c)
    sub_4dd390(esi_2 + 0x40, arg2)
    result = *(esi_2 + 0x60)
    void* ecx_4 = result[0x1a]
    
    if (ecx_4 != 0)
        return sub_4db1c0(ecx_4, arg2)

return result
