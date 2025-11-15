// 函数: sub_518920
// 地址: 0x518920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg1 + 8))(1)

if (eax_1 == 0x11)
    void* esi_2 = arg1[0x11]
    sub_555e00(esi_2, 0x11, 1)
    return *(*(esi_2 + 0x80) + 0x24)

if (eax_1 != 0x18)
    return 0

void* esi_1 = arg1[0x11]
sub_555e00(esi_1, 0x18, 1)
return *(*(esi_1 + 0x80) + 0xc)
