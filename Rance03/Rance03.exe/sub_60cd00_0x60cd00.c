// 函数: sub_60cd00
// 地址: 0x60cd00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax_1 = sub_60cf80(arg1, *(arg1 + 0x284))

if (eax_1 == 0)
    return eax_1

void* esi_1 = *(arg1 + 0x218)
int32_t* ecx = *(esi_1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(esi_1 + 0x4c) = 0

int32_t* ecx_1 = *(esi_1 + 0x48)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(esi_1 + 0x48) = 0

sub_6093d0(esi_1 + 0x50)
void* eax_4
eax_4.b = 1
return eax_4
