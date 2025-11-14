// 函数: sub_100018a0
// 地址: 0x100018a0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* result = arg1
char* eax = arg2
*(result + 0x18) = 0xf
*(result + 0x14) = 0
*(result + 4) = 0

do
    arg1.b = *eax
    eax = &eax[1]
while (arg1.b != 0)

sub_10001ae0(result, arg2, eax - &eax[1])
return result
