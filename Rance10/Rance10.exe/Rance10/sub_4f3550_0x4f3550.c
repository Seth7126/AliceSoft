// 函数: sub_4f3550
// 地址: 0x4f3550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73624b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float var_d0[0x2a]
sub_5269a0(&var_d0)
int32_t var_8_1 = 0
sub_527800(&var_d0, *(arg1 + 4) + 0x150)
void* esi = data_7fcbbc
int32_t var_24 = arg6
char var_27 = arg5
int32_t var_20 = arg7
int32_t xmm0_2

if (esi != 0)
    xmm0_2 = 0x3f800000
    
    if (sub_63c080(esi) != 0)
        (*(**(esi + 0x2c) + 0x60))(eax_2)
        arg5.d = fconvert.s(arg2)
        xmm0_2 = arg5.d
    
    esi = data_7fcbbc
else
    xmm0_2 = 0x3f800000

*(*(arg1 + 4) + 0xd4) = xmm0_2
char eax_10

if (esi != 0)
    eax_10 = sub_63c080(esi)

int32_t xmm0_3

if (esi != 0 && eax_10 != 0)
    (*(**(esi + 0x2c) + 0x60))(eax_2)
    arg5.d = fconvert.s(unimplemented  {fstp dword [ebp+0x10], st0})
    unimplemented  {fstp dword [ebp+0x10], st0}
    xmm0_3 = arg5.d
else
    xmm0_3 = 0x3f800000

void* ecx_6 = *(arg1 + 4)
int32_t var_e0_1 = 0
int32_t var_e4 = 0
*(ecx_6 + 0xd8) = xmm0_3
sub_4ee2b0(ecx_6, arg3, arg4, &var_d0)
struct _EXCEPTION_REGISTRATION_RECORD** result = ___dyn_tls_init@12(&var_d0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
