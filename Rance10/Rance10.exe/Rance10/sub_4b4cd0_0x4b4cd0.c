// 函数: sub_4b4cd0
// 地址: 0x4b4cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = sub_4efcc0(*(arg1 + 0xa0))
int32_t eax_1 = (*(*eax + 8))(1)

if (eax_1 == 0x11)
    void* esi_2 = eax[0x11]
    sub_555e00(esi_2, 0x11, 1)
    return *(*(esi_2 + 0x80) + 0x24)

if (eax_1 != 0x18)
    return 0

void* esi_1 = eax[0x11]
sub_555e00(esi_1, 0x18, 1)
return *(*(esi_1 + 0x80) + 0xc)
