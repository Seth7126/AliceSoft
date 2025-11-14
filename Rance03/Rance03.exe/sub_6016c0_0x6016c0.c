// 函数: sub_6016c0
// 地址: 0x6016c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool var_c = arg1.b
uint32_t edi = zx.d(arg3)
bool eax_1 = sub_698240(arg1 + 4, edi)
void* edx = *(arg1 + 0x98)
eax_1 = eax_1 == 0

if (edx != 0)
    *(edx + 4) = eax_1

sub_6981c0(arg1 + 4, edi, eax_1)
return DrawMenuBar(arg2)
