// 函数: sub_6427a0
// 地址: 0x6427a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746410
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* esi = arg1
void** var_18 = esi
struct textsurface::CTextSurfaceCacheProperty::VTable** edi

if (arg2 != 0)
    if (arg2 u> 0x3333333)
        sub_6d08ed()
        noreturn
    
    int32_t eax_5 = arg2 * 0x50
    
    if (eax_5 u< 0x1000)
        eax_3, arg1 = sub_6e810c(eax_5)
        edi = eax_3
    else
        if (eax_5 + 0x23 u<= eax_5)
            sub_6d08ed()
            noreturn
        
        eax_3, arg1 = sub_6e810c(eax_5 + 0x23)
        edi = (eax_3 + 0x23) & 0xffffffe0
        edi[-1] = eax_3
else
    edi = nullptr

int32_t var_8_1 = 0
int32_t* var_38_3 = arg1
int32_t var_3c = 0.d
struct textsurface::CTextSurfaceCacheProperty::VTable** var_1c = edi
int32_t* var_40 = arg1
sub_643350(eax_3, esi[1], *esi, edi)
int32_t eax_6 = esi[1]
int32_t* i = *esi
char var_20
var_20.d = (eax_6 - i) s/ 0x50

if (i != 0)
    for (; i != eax_6; i = &i[0x14])
        (**i)(0)
    
    void* esi_1 = *var_18
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = muls.dp.d(0x66666667, var_18[2] - esi_1)
    int32_t edx_4 = edx_3 s>> 5
    sub_403160(esi_1, (edx_4 u>> 0x1f) + edx_4, 0x50)

var_18[2] = &edi[arg2 * 0x14]
void* result = &edi[var_20.d * 0x14]
var_18[1] = result
*var_18 = edi
fsbase->NtTib.ExceptionList = ExceptionList
return result
