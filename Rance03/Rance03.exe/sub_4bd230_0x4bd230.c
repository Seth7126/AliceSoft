// 函数: sub_4bd230
// 地址: 0x4bd230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
void* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    sub_4b7cf0(esi + 8)
    esi += 0x5c
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
