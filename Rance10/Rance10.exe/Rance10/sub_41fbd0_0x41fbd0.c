// 函数: sub_41fbd0
// 地址: 0x41fbd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax_1 = (*(**(arg1 + 0xc) + 0x1c))(arg2)
char* edx = eax_1

if (edx == 0)
    eax_1.b = 0
    return eax_1

if (*edx == 0)
    sub_403490(arg3, edx, nullptr)
    int32_t* eax_2
    eax_2.b = 1
    return eax_2

char i

do
    i = *eax_1
    eax_1 = &eax_1[1]
while (i != 0)
sub_403490(arg3, edx, eax_1 - &eax_1[1])
int32_t* eax_4
eax_4.b = 1
return eax_4
