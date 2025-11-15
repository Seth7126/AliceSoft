// 函数: sub_64fad0
// 地址: 0x64fad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x12] != 8)
    *(*arg1 + 0x14) = 0x10
    *(*arg1 + 0x18) = arg1[0x12]
    (**arg1)(arg1)

if (arg1[8] u<= 0 || arg1[7] u<= 0 || arg1[9] s<= 0)
    *(*arg1 + 0x14) = 0x21
    (**arg1)(arg1)

sub_652420(arg1)

if (arg1[0x34].b == 0)
    sub_64d350(arg1)
    sub_653e80(arg1)
    sub_653550(arg1)

sub_64dfe0(arg1)

if (*(arg1 + 0xd1) == 0)
    sub_64fa20(arg1)
else
    sub_64c1e0(arg1)

char edx_2

if (arg1[0x32] s> 1 || *(arg1 + 0xd2) != 0)
    edx_2 = 1
else
    edx_2 = 0

sub_64ca10(arg1, edx_2)
sub_64fcb0(arg1)
sub_651110(arg1)
(*(arg1[1] + 0x18))(arg1)
return (*arg1[0x62])(arg1)
