// 函数: sub_68fbc0
// 地址: 0x68fbc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_214
int32_t eax_1 = __security_cookie ^ &var_214
void var_200
void var_1c0
int128_t* eax_4 = sub_6cad30(&var_200, (**arg8)(arg7, __builtin_memset(&var_1c0, 0, 0x1b0), arg9))
int32_t* eax_5 = sub_68f9a0(eax_4, eax_4, &var_1c0)

if (eax_5.b == 0)
    @__security_check_cookie@4(eax_1 ^ &var_214)
    return eax_5

int32_t var_210 = 0x50
int80_t x87_r5
int80_t x87_r6
int80_t x87_r7
sub_68ff40(eax_5, &var_210, &var_1c0, arg2, arg3, arg4, arg5, arg6, x87_r5, x87_r6, x87_r7, arg7, 
    arg8, arg9)
int32_t edi = var_210
(*(*arg8 + 0x94))()
void* eax_8 = *arg8
*(&var_1c0 + (edi << 2)) = fconvert.s(arg2)
(*(eax_8 + 0x98))()
void var_1bc
*(&var_1bc + (edi << 2)) = fconvert.s(arg3)
void var_1b8
__builtin_memset(&var_1b8 + (edi << 2), 0, 8)
(*(*arg7 + 0x4c))()
void* eax_12 = *arg7
void var_1b0
*(&var_1b0 + (edi << 2)) = fconvert.s(arg4)
(*(eax_12 + 0x14))()
void* eax_14 = *arg7
void var_1ac
*(&var_1ac + (edi << 2)) = fconvert.s(arg5)
(*(eax_14 + 0x50))()
void var_1a8
*(&var_1a8 + (edi << 2)) = fconvert.s(arg6)
int32_t var_1a4[0x66]
var_1a4[edi] = 0
bool cond:0 = sub_684cb0(arg1 + 0xac, &var_1c0, *(*(arg1 + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_214)
return cond:0
