// 函数: sub_55b4b0
// 地址: 0x55b4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b33b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_dc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm3
int32_t var_14 = xmm3
void var_d4
int128_t* eax_3 = sub_526a90(&var_d4, arg2)
int32_t var_8_1 = 0
void* eax_4 = *(eax_3 + 0xbc)
void* eax_5

if (eax_4 != 0)
    eax_5 = *(eax_4 + 8)
else
    eax_5 = data_7fcba0

sub_4b9f80(eax_3, eax_5)
int128_t* var_e0_2 = eax_3
*(eax_3 + 0x58) = *(arg4 + 8)
*(eax_3 + 0x5c) = *(arg4 + 0xc)
eax_3[6].d = *(arg4 + 0x14)
*(eax_3 + 0x64) = *(arg4 + 0x18)
*(eax_3 + 0x7c) = 1
*(eax_3 + 0xa4) =
    int.d(_mm_cvtepi32_ps(zx.o(int.d(arg5 * 255f) * *(eax_3 + 0xa4))) * 0.00392156886f)
sub_54e2e0(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** result = ___dyn_tls_init@12(&var_d4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
