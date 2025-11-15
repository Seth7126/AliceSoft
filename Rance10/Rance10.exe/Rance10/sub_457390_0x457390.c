// 函数: sub_457390
// 地址: 0x457390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ebx = arg1
struct IDebugFileVarSource::debugfile::CVarSource::VTable** eax_3 = arg2
struct IDebugFileVarSource::debugfile::CVarSource::VTable** edi

if (eax_3 != 0)
    if (eax_3 u> 0x1f07c1f)
        sub_6d08ed()
        noreturn
    
    int32_t eax_4 = eax_3 * 0x84
    
    if (eax_4 u< 0x1000)
        eax_3, arg1 = sub_6e810c(eax_4)
        edi = eax_3
    else
        if (eax_4 + 0x23 u<= eax_4)
            sub_6d08ed()
            noreturn
        
        eax_3, arg1 = sub_6e810c(eax_4 + 0x23)
        edi = (eax_3 + 0x23) & 0xffffffe0
        edi[-1] = eax_3
else
    edi = nullptr

int32_t var_8_1 = 0
int32_t* var_34_3 = arg1
int32_t var_38 = 0.d
struct IDebugFileVarSource::debugfile::CVarSource::VTable** var_18 = edi
int32_t* var_3c = arg1
sub_458b10(eax_3, ebx[1], *ebx, edi)
int32_t eax_5 = ebx[1]
int32_t* i = *ebx
char var_1c
var_1c.d = (eax_5 - i) s/ 0x84

if (i != 0)
    for (; i != eax_5; i = &i[0x21])
        (*(*i + 0x30))(0)
    
    void* esi = *ebx
    int32_t eax_11
    int32_t edx_3
    edx_3:eax_11 = muls.dp.d(0x3e0f83e1, ebx[2] - esi)
    int32_t edx_4 = edx_3 s>> 5
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0x84)

ebx[2] = arg2 * 0x84 + edi
void* result = &edi[var_1c.d * 0x21]
ebx[1] = result
*ebx = edi
fsbase->NtTib.ExceptionList = ExceptionList
return result
