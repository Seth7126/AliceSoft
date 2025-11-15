// 函数: sub_55aff0
// 地址: 0x55aff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b307
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_6e810c(0x6c)
int32_t* var_14 = eax_3
int32_t var_8_1 = 0
int32_t* eax_4 = sub_54d5a0(eax_3)
int32_t var_8_2 = 0xffffffff
bool cond:0 = *(arg1 + 0xf8) == 0
var_14 = eax_4

if (not(cond:0))
    void* ecx_1 = *eax_4
    eax_4[0xd].b = 1
    
    if (ecx_1 != 0)
        sub_451b40(ecx_1)

sub_42ccf0(arg1 + 0xcc, &var_14)
int32_t* esi_1 = var_14
sub_54dae0(esi_1, arg2, arg3, arg9, arg10, arg11, 0xff)
struct common::CRect::VTable* const var_30 = &common::CRect::`vftable'
struct common::CPoint::VTable* const var_2c = &common::CPoint::`vftable'
int32_t var_28 = 0
int32_t var_24 = 0
struct common::CSize::VTable* const var_20 = &common::CSize::`vftable'
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_3 = 1
void* ecx_4 = *esi_1
float edi

if (ecx_4 == 0)
    edi = 0f
else if (*(esi_1 + 0x16) == 0)
    int32_t* ecx_5 = *(ecx_4 + 0x118)
    
    if (ecx_5 != 0)
        edi = (*(*ecx_5 + 0x14))(eax_2)
    else
        edi = 0f
else
    edi = esi_1[0xc]

void* ecx_6 = *esi_1
float eax_7

if (ecx_6 == 0)
    eax_7 = 0f
else if (*(esi_1 + 0x16) == 0)
    int32_t* ecx_7 = *(ecx_6 + 0x118)
    
    if (ecx_7 != 0)
        eax_7 = (*(*ecx_7 + 0x10))(eax_2)
    else
        eax_7 = 0f
else
    eax_7 = esi_1[0xb]

float arg_10
float arg_14
char eax_9 = sub_55b5a0(arg_10, arg_14, eax_7, edi, arg5, arg6, arg7, &arg_10, &arg_14, &var_30)
void* ecx_8 = *esi_1

if (ecx_8 != 0)
    esi_1[5].b = eax_9
    *(ecx_8 + 0x18) = eax_9

void* var_40_2 = ecx_8
void* var_48_2 = ecx_8
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_55b4b0(esi_1, arg4, arg_14, &var_30, arg8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
