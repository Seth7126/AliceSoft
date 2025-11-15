// 函数: sub_545b30
// 地址: 0x545b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (eax != 0)
    void* esi_1 = *(eax + 0x44)
    sub_555e00(esi_1, 0x1c, arg2)
    void* ecx_3 = *(*(esi_1 + (arg2 << 2) + 0x7c) + 0x94)
    
    if (ecx_3 != 0)
        return sub_435fc0(ecx_3) __tailcall

return 0
