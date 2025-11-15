// 函数: sub_544750
// 地址: 0x544750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax != 0)
    void* edi_1 = *(eax + 0x44)
    sub_555e00(edi_1, 0x1a, arg4)
    void* ecx_3 = *(*(*(edi_1 + (arg4 << 2) + 0x7c) + 0x60) + 8)
    
    if (ecx_3 != 0)
        return sub_4cdc70(ecx_3, arg2)

return 0
