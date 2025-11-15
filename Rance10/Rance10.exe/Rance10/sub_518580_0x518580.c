// 函数: sub_518580
// 地址: 0x518580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x44)
sub_555e00(esi, 0x1b, 1)
void* edi = *(*(esi + 0x80) + 0xc)

if (edi == 0)
    int32_t* eax_1
    eax_1.b = 0
    return eax_1

int32_t* ecx_1 = *(edi + 0x11c)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(edi + 0x11c) = 0

(**arg2)()
*(edi + 0x11c) = arg2
int32_t eax_4
eax_4.b = 1
return eax_4
