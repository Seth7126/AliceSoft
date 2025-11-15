// 函数: sub_643a80
// 地址: 0x643a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t eax = *(arg1 + 4)
void* const edx

if (eax s>= 0x100)
    edx = &data_796e58
else
    switch (eax)
        case 1
            edx = &data_796e3c
        case 2
            edx = &data_796e2c
        case 3
            edx = &data_796e68
        default
            edx = &data_796e48

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0

if (*edx == 0)
    sub_403490(arg2, edx, nullptr)
    return arg2

void* const ecx_2 = edx
void* edi = ecx_2 + 1

do
    eax.b = *ecx_2
    ecx_2 += 1
while (eax.b != 0)

sub_403490(arg2, edx, ecx_2 - edi)
return arg2
