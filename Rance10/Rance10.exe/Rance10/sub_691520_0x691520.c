// 函数: sub_691520
// 地址: 0x691520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4_1 = ebp
int32_t* ecx = __alloca_probe(0x3010)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8
int32_t var_4 = 0
_memset(&__return_addr, 0, 0x3000)
void** ecx_1 = arg2

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int32_t var_14 = *ecx[1]
int32_t var_18 = *ecx
sub_406aa0(&__return_addr, 0x3000, ecx_1)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx_2

if (__return_addr.b != 0)
    void* const* ecx_3 = &__return_addr
    char i
    
    do
        i = *ecx_3
        ecx_3 += 1
    while (i != 0)
    ecx_2 = ecx_3 - &__return_addr:1
else
    ecx_2 = nullptr

sub_403490(arg1, &__return_addr, ecx_2)
@__security_check_cookie@4(eax_1 ^ &var_8)
return arg1
