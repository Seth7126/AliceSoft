// 函数: sub_687630
// 地址: 0x687630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax_1 = sub_6878b0(arg1, *(arg1 + 0x2d0))

if (eax_1 == 0)
    return eax_1

void* esi_1 = *(arg1 + 0x264)
int32_t* ecx = *(esi_1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(esi_1 + 0x4c) = 0

int32_t* ecx_1 = *(esi_1 + 0x48)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(esi_1 + 0x48) = 0

sub_683600(esi_1 + 0x50)
void* eax_4
eax_4.b = 1
return eax_4
