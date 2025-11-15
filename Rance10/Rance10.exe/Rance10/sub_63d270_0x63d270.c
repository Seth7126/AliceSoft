// 函数: sub_63d270
// 地址: 0x63d270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = arg2
int32_t var_4 = 0
char* var_8 = arg1

if (edi[5] u>= 0x10)
    edi = *edi

void* ebx = data_7fcbbc
void* const edx

if (sub_63c080(ebx).b != 0)
    edx = (*(**(ebx + 0x34) + 8))(edi)
else
    edx = &data_75d6f1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*edx == 0)
    sub_403490(arg1, edx, nullptr)
    return arg1

char* ecx_3 = edx
int32_t* eax

do
    eax.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax.b != 0)
sub_403490(arg1, edx, ecx_3 - &ecx_3[1])
return arg1
