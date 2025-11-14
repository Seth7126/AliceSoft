// 函数: sub_4546e0
// 地址: 0x4546e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b78e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* eax_3 = arg2
int32_t* edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0x1a41a41)
        sub_69a4fc()
        noreturn
    
    eax_3 = sub_69adc6(eax_3 * 0x9c)
    edi = eax_3
    int32_t* var_18_1 = edi
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t* var_30_2 = arg2
sub_454980(eax_3, arg1[1], *arg1, edi)
int32_t eax_5 = arg1[1]
void* i = *arg1
void* ecx_2 = eax_5 - i

if (i != 0)
    for (; i != eax_5; i += 0x9c)
        sub_4541d0(i)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x9c + edi
void* result = ecx_2 s/ 0x9c * 0x9c + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
