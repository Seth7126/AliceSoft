// 函数: sub_5a4170
// 地址: 0x5a4170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
void* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_59b2c0(esi)
    esi += 0x34c
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
