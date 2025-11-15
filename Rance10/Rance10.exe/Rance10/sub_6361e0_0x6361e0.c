// 函数: sub_6361e0
// 地址: 0x6361e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t** var_4_1 = arg3
int32_t ebx = 0
int16_t* edi = arg2
uint32_t ebp_3 = (arg4 - edi + 1) u>> 1

if (edi u> arg4)
    ebp_3 = 0

if (ebp_3 == 0)
    *arg3 = arg5
    return arg3

do
    sub_637b50(arg5, *edi)
    ebx += 1
    edi = &edi[1]
while (ebx != ebp_3)

*arg3 = arg5
return arg3
