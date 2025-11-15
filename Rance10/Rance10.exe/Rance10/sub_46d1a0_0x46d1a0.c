// 函数: sub_46d1a0
// 地址: 0x46d1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_408940(esi)
    esi = &esi[0xe]
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
