// 函数: sub_544680
// 地址: 0x544680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (result == 0)
    return result

void* esi = *(result + 0x44)
sub_555e00(esi, 0x1a, arg2)
void* eax_2 = *(*(*(esi + (arg2 << 2) + 0x7c) + 0x60) + 0x68)

if (eax_2 != 0)
    void* eax_3 = *(eax_2 + 0xc)
    
    if (eax_3 != 0)
        void* eax_4 = *(eax_3 + 0x38)
        
        if (eax_4 != 0)
            return *(eax_4 + 0x14)

return 0xffffffff
