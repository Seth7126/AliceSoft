// 函数: sub_544a10
// 地址: 0x544a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x1a, arg5)
    void* esi_2 = *(edi_1 + (arg5 << 2) + 0x7c)
    sub_4dcdd0(esi_2 + 0x40, arg2, arg4)
    result = *(esi_2 + 0x60)
    void* ecx_4 = *(result + 0x68)
    
    if (ecx_4 != 0)
        return sub_4db170(ecx_4, arg2)

return result
