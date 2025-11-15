// 函数: sub_6881c0
// 地址: 0x6881c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
int32_t edi = 0
uint32_t ebx_3 = (*(arg1 + 8) - esi + 3) u>> 2

if (esi u> *(arg1 + 8))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        (*(**esi + 4))(eax_2)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

*(arg1 + 8) = *(arg1 + 4)
int32_t var_8_1 = 0
sub_4f2d00(*(*(arg1 + 0x10) + 4))
void* eax_6 = *(arg1 + 0x10)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x10)
*eax_7 = eax_7
void* result = *(arg1 + 0x10)
*(result + 8) = result
*(arg1 + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
