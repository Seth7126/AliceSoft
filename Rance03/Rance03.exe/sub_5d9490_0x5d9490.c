// 函数: sub_5d9490
// 地址: 0x5d9490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca66b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_41c
int32_t eax_2 = __security_cookie ^ &var_41c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_2 = *(arg2 + 0x63c) - (arg2 + 0x238) - 4
struct sys43vm::CIntStack::VTable* const var_418 = &sys43vm::CIntStack::`vftable'
void* esi_3 = esi_2 & 0xfffffffc
int32_t var_414[0x100]
sub_69d850(&var_414, arg2 + 0x23c, esi_3, eax_4)
int32_t eax_7 = &var_414 + esi_3
int32_t var_4 = 0
int32_t result

if (sub_5de860(arg1, (eax_7 - &var_418 - 4) s>> 2).b == 0)
label_5d957b:
    result.b = 0
else
    int32_t i = 0
    
    if ((eax_7 - &var_418 - 4) s>> 2 != 0)
        do
            if (sub_5d93f0(arg1, arg2, var_414[i]).b == 0)
                goto label_5d957b
            
            i += 1
        while (i u< (eax_7 - &var_418 - 4) s>> 2)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_41c)
return result
