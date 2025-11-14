// 函数: sub_529460
// 地址: 0x529460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    (**esi)(0)
    esi = &esi[0xb]
while (esi != ebx)

int32_t eax_2 = *arg1
arg1[1] = eax_2
return eax_2
