// 函数: sub_686ef0
// 地址: 0x686ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1

for (int32_t i = 0; i s< 8; i += 1)
    int32_t var_10_1 = edi[0xe]
    arg1 = sub_68aaa0(&edi[0xa2], i, 1, arg1.b, nullptr)

sub_685290(&edi[0xb])
int32_t* esi = edi[0xe]

if (esi != 0)
    (*(*esi + 0x2c))(esi, 0, 0, 0)
    (*(*esi + 0x24))(esi, 0, 0, 0)
    (*(*esi + 0x44))(esi, 0)

(*(*edi + 0xc0))(0)
(*(*edi + 0xc8))(0)
(*(*edi + 0xcc))(0)
(*(*edi + 0xd0))(1)
int32_t result = (*(*edi + 0xc4))(0, 0)
__builtin_memset(&edi[0x53], 0, 0x28)
int32_t edx = 0
edi[0xa1] = 0
int32_t* ecx_7 = edi[0xa9]
uint32_t esi_4 = (edi[0xaa] - ecx_7 + 3) u>> 2

if (ecx_7 u> edi[0xaa])
    esi_4 = 0

if (esi_4 != 0)
    do
        edx += 1
        *ecx_7 = 0
        ecx_7 = &ecx_7[1]
    while (edx != esi_4)

return result
