// 函数: sub_57df00
// 地址: 0x57df00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_41c
int32_t eax_1 = __security_cookie ^ &var_41c
int32_t ecx = *(arg1 + 0x20)
var_41c = ecx

if (ecx == 0)
    *(arg1 + 0x28) = ecx
    @__security_check_cookie@4(eax_1 ^ &var_41c)
    return arg1

void* ebx = arg1 + 0x10

if (*(arg1 + 0x24) u>= 0x10)
    ebx = *ebx

void var_410
int32_t eax_3 = sub_5704c0(&var_410)
int32_t ecx_4 = 0xffffffff
int32_t eax_4 = var_41c
int32_t edi = 0

if (eax_4 != 0)
    do
        uint32_t esi_1 = zx.d(*(ebx + edi))
        edi += 1
        ecx_4 = ecx_4 u>> 8 ^ *(eax_3 + ((esi_1 ^ zx.d(ecx_4.b)) << 2))
    while (edi u< eax_4)

*(arg1 + 0x28) = not.d(ecx_4)
@__security_check_cookie@4(eax_1 ^ &var_41c)
return arg1
