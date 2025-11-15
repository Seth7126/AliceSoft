// 函数: sub_68fd00
// 地址: 0x68fd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__alloca_probe(0x300c)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8

if ((*(*arg2 + 0x44))() == 0)
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return 1

int32_t __saved_ebp
__builtin_memset(&__saved_ebp, 0, 0x3000)
int32_t var_18 = arg1
char eax_5
int32_t* ebp
void* esi_1
eax_5, ebp, esi_1 = sub_690d50(&__saved_ebp)

if (eax_5 == 0)
    @__security_check_cookie@4(eax_1 ^ &var_8)
    *ebp
    return eax_5

bool cond:0 = sub_684cb0(esi_1 + 0xc0, &__saved_ebp, *(*(esi_1 + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_8)
*ebp
return cond:0
