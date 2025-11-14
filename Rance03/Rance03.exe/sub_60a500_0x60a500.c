// 函数: sub_60a500
// 地址: 0x60a500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ccf50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct graphengined3d11::CBlendState::VTable** eax_3 = arg2
struct graphengined3d11::CBlendState::VTable** edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0x1fffffff)
        sub_69a4fc()
        noreturn
    
    eax_3 = sub_69adc6(eax_3 << 3)
    edi = eax_3
    struct graphengined3d11::CBlendState::VTable** var_18_1 = edi
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
struct graphengined3d11::CBlendState::VTable** var_30_2 = arg2
GSI1::OffForSym(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_5 = arg1[1]
int32_t* i = *arg1
int32_t ecx_3 = (eax_5 - i) s>> 3

if (i != 0)
    for (; i != eax_5; i = &i[2])
        (**i)(0)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = &edi[arg2 * 2]
void* result = &edi[ecx_3 * 2]
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
