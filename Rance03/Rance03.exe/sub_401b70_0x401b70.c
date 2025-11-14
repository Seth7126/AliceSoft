// 函数: sub_401b70
// 地址: 0x401b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
char* eax = sub_69a3f7(arg2)
char const* const edx = "unknown error"

if (eax != 0)
    edx = eax

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*edx == 0)
    sub_402110(arg1, edx, nullptr)
    return arg1

char const* const ecx_3 = edx

do
    eax.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax.b != 0)

sub_402110(arg1, edx, ecx_3 - &ecx_3[1])
return arg1
