// 函数: sub_5381a0
// 地址: 0x5381a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg1
int32_t* edx = sub_5033d0(data_7fcba4 + 0xfc, arg2)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*edx == 0)
    sub_403490(arg1, edx, nullptr)
    return arg1

int32_t* ecx_3 = edx
void* edi = ecx_3 + 1
int32_t* eax

do
    eax.b = *ecx_3
    ecx_3 += 1
while (eax.b != 0)
sub_403490(arg1, edx, ecx_3 - edi)
return arg1
