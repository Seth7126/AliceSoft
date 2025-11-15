// 函数: sub_4f6320
// 地址: 0x4f6320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx_1 = data_7fcba4 + 0x124
void* eax = *(ebx_1 + 0x68)

if (eax == 0)
    if (*(ebx_1 + 0x5c) == *(ebx_1 + 0x60))
        void* eax_2 = sub_404080(ebx_1 + 0x30)
        sub_4f4360(ebx_1, sub_404080(ebx_1 + 0x30), eax_2, 0)
    
    eax = *(*(ebx_1 + 0x5c) + ((*(ebx_1 + 0x60) - *(ebx_1 + 0x5c)) s>> 2 << 2) - 4)

return *(eax + 0x1c)
