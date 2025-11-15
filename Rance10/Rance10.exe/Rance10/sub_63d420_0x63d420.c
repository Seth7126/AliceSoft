// 函数: sub_63d420
// 地址: 0x63d420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcbbc
char* var_8 = arg1
int32_t var_4 = 0
void* const edx

if (sub_63c080(edi).b != 0)
    edx = (*(**(edi + 0x34) + 0x28))(arg2)
else
    edx = &data_75d6c3

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
