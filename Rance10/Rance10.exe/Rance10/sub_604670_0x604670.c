// 函数: sub_604670
// 地址: 0x604670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const edx = &data_7984bc
int32_t var_4 = 0
char* var_8 = arg3

if (*arg4 == 0)
    edx = &data_794c78

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0

if (*edx == 0)
    sub_403490(arg3, edx, nullptr)
    return arg3

char* ecx_1 = edx
char* eax

do
    eax.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax.b != 0)
sub_403490(arg3, edx, ecx_1 - &ecx_1[1])
return arg3
