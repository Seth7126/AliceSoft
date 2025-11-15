// 函数: sub_422630
// 地址: 0x422630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_FullAliasWait@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* esi = arg1
struct dpvariable::CRefPageInfo::VTable** edi

if (arg2 != 0)
    if (arg2 u> 0x3ffffff)
        sub_6d08ed()
        noreturn
    
    int32_t eax_5 = arg2 << 6
    
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
struct dpvariable::CRefPageInfo::VTable** var_1c = edi
int32_t* var_40 = arg1
sub_4230b0(eax_3, esi[1], *esi, edi)
int32_t var_8_2 = 0xffffffff
int32_t ecx_2 = esi[1]
int32_t* i = *esi
int32_t eax_8 = (ecx_2 - i) s>> 6
char var_20
var_20.d = eax_8
void** esi_1

if (i == 0)
    esi_1 = esi
else
    for (; i != ecx_2; i = &i[0x10])
        (**i)(0)
    
    esi_1 = esi
    void* ecx_4 = *esi_1
    sub_403160(ecx_4, (esi_1[2] - ecx_4) s>> 6, 0x40)
    eax_8 = var_20.d

esi_1[2] = &edi[arg2 * 0x10]
void* result = &edi[eax_8 * 0x10]
esi_1[1] = result
*esi_1 = edi
fsbase->NtTib.ExceptionList = ExceptionList
return result
