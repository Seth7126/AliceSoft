// 函数: sub_5b4c50
// 地址: 0x5b4c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5b4990(&arg1[0xa])
sub_5b47d0(&arg1[7])
int32_t eax = arg1[5]

if (eax u>= 0x10)
    sub_403160(*arg1, eax + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    int32_t var_8_1 = 0x34
    *arg1 = 0
    operator new(arg1)
    return arg1

int32_t var_8 = 0x34
**arg1 = 0
operator new(arg1)
return arg1
