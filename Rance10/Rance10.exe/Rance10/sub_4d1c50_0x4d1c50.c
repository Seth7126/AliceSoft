// 函数: sub_4d1c50
// 地址: 0x4d1c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@DD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
float var_d8[0x30]
sub_526e80(arg1 + 0x44, sub_5269a0(&var_d8))
int32_t var_8_2 = 0xffffffff
___dyn_tls_init@12(&var_d8)
*(arg1 + 0x108) = *(arg1 + 0x104)
int32_t ebx = 0
*(arg1 + 0x30) = *(arg1 + 0x2c)
*(arg1 + 0x28) = 0
*(arg1 + 0x24) = 0xffffffff
*(arg1 + 8) = 0
int32_t* esi = *(arg1 + 0x18)
uint32_t ecx_6 = (*(arg1 + 0x1c) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x1c))
    ecx_6 = 0

if (ecx_6 != 0)
    do
        (*(**esi + 4))(eax_2)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_6)

*(arg1 + 0x1c) = *(arg1 + 0x18)
int32_t ebx_1 = *(arg1 + 0x3c)

for (int128_t* i = *(arg1 + 0x38); i != ebx_1; i += 0xcc)
    sub_4aa740(i)

int32_t result = *(arg1 + 0x38)
*(arg1 + 0x3c) = result
int32_t* ecx_9 = *(arg1 + 0x10)

if (ecx_9 != 0)
    result = (*(*ecx_9 + 4))(eax_2)
    *(arg1 + 0x10) = 0

int32_t* ecx_10 = *(arg1 + 0xc)

if (ecx_10 != 0)
    result = (*(*ecx_10 + 4))(eax_2)
    *(arg1 + 0xc) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
