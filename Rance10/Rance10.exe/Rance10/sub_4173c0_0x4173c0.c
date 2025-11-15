// 函数: sub_4173c0
// 地址: 0x4173c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
void* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_40ae10(esi)
    esi += 0x28
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
