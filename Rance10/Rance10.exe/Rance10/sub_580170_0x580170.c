// 函数: sub_580170
// 地址: 0x580170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_14 = arg2
int32_t* var_18 = arg1
int32_t ecx_1 = sub_4ac600(arg1[3], arg1[4])
arg1[4] = arg1[3]
arg1[1] = *arg1
int32_t edi = arg2[1]
int128_t* i = *arg2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0

for (; i != edi; i += 0x24)
    ecx_1 = sub_580fa0(arg1, i)

int32_t* var_14_2 = arg2
int32_t var_18_1 = ecx_1
sub_4ac600(arg1[3], arg1[4])
arg1[4] = arg1[3]
int32_t result = *arg1

if (result == arg1[1])
    return result

sub_580230(arg1, &arg1[6], &arg1[7], &arg1[8], &arg1[9])
sub_4d7bd0(&arg1[3], arg1[0xb] * arg1[0xa])
return sub_5802f0(arg1)
