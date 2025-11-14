// 函数: sub_450920
// 地址: 0x450920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4d4
void** eax = sub_417ed0(edi + 0x1c, arg1)
char eax_2

if (eax != *(edi + 0x1c))
    eax_2 = sub_40c3a0(arg1, &eax[4])

if (eax == *(edi + 0x1c) || eax_2 != 0)
    arg1 = *(edi + 0x1c)
else
    arg1 = eax

if (arg1 == *(edi + 0x1c) || arg1[0xb] != 2)
    void** eax_5
    eax_5.b = 0
    return eax_5

*arg2 = arg1[0xd]
int32_t* eax_4
eax_4.b = 1
return eax_4
