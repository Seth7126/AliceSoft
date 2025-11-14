// 函数: sub_450710
// 地址: 0x450710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
void* edi = data_75d4d4
void** eax = sub_417ed0(edi + 0x1c, ebx)
char eax_2

if (eax != *(edi + 0x1c))
    eax_2 = sub_40c3a0(ebx, &eax[4])

if (eax == *(edi + 0x1c) || eax_2 != 0)
    arg2 = *(edi + 0x1c)
else
    arg2 = eax

if (arg2 != *(edi + 0x1c) && arg2[0xb] != 2)
    void** eax_4
    eax_4.b = 0
    return eax_4

void* eax_5 = sub_450a70(edi + 0x1c, ebx)
*(eax_5 + 4) = 2
*(eax_5 + 0xc) = arg1
eax_5.b = 1
return eax_5
