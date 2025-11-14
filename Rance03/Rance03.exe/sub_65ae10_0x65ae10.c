// 函数: sub_65ae10
// 地址: 0x65ae10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf6eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d4
int32_t eax_2 = __security_cookie ^ &var_d4
int32_t __saved_edi
int32_t var_e0 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2

for (int32_t* i = arg1; i != esi; i = &i[0x30])
    esi -= 0xc0
    
    if (i == esi)
        break
    
    sub_65b030(&var_d4, i)
    int32_t var_4 = 0
    sub_65dc20(i, esi)
    result = sub_65dc20(esi, &var_d4)
    int32_t var_4_1 = 0xffffffff
    struct dpparts::CListItem::VTable* const var_30_1 = &dpparts::CListItem::`vftable'
    char var_68
    int32_t var_54
    
    if (var_54 u>= 0x10)
        result = j__free(var_68.d)
    
    var_54 = 0xf
    int32_t var_58_1 = 0
    var_68 = 0
    int32_t var_6c
    int32_t var_80
    
    if (var_6c u>= 0x10)
        result = j__free(var_80)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d4)
return result
