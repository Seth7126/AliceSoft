// 函数: sub_58cf60
// 地址: 0x58cf60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c7c40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable** eax_3 = arg2
struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable** edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0x2e8ba2e)
        sub_69a4fc()
        noreturn
    
    eax_3 = sub_69adc6(eax_3 * 0x58)
    edi = eax_3
    struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable** var_18_1 = edi
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable** var_30_2 = arg2
sub_58d0c0(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_5 = arg1[1]
int32_t* i = *arg1
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x2e8ba2e9, eax_5 - i)
int32_t edx_2 = edx_1 s>> 4

if (i != 0)
    for (; i != eax_5; i = &i[0x16])
        (*(*i + 0x18))(0)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x58 + edi
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x58 + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
