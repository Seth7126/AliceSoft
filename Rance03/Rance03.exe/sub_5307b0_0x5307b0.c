// 函数: sub_5307b0
// 地址: 0x5307b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c3ad0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct sealengine::CDetectPolygon::VTable** eax_3 = arg2
struct sealengine::CDetectPolygon::VTable** edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0x1f07c1f)
        sub_69a4fc()
        noreturn
    
    eax_3 = sub_69adc6(eax_3 * 0x84)
    edi = eax_3
    struct sealengine::CDetectPolygon::VTable** var_18_1 = edi
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
struct sealengine::CDetectPolygon::VTable** var_30_2 = arg2
sub_530990(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_5 = arg1[1]
int32_t* i = *arg1
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x3e0f83e1, eax_5 - i)
int32_t edx_2 = edx_1 s>> 5

if (i != 0)
    for (; i != eax_5; i = &i[0x21])
        (**i)(0)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x84 + edi
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x84 + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
