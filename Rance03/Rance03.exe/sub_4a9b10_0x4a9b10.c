// 函数: sub_4a9b10
// 地址: 0x4a9b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4fc
void** eax = sub_417ed0(edi + 0x168, arg1)
char eax_2

if (eax != *(edi + 0x168))
    eax_2 = sub_40c3a0(arg1, &eax[4])

if (eax == *(edi + 0x168) || eax_2 != 0)
    arg1 = *(edi + 0x168)
else
    arg1 = eax

if (arg1 == *(edi + 0x168))
    return 0

return &arg1[0xa]
