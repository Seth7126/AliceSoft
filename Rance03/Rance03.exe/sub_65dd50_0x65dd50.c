// 函数: sub_65dd50
// 地址: 0x65dd50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf7cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d8
int32_t eax_2 = __security_cookie ^ &var_d8
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2
int32_t var_d4 = esi

if (arg1 != esi)
    for (int32_t* i = &arg1[0x30]; i != esi; i = &i[0x30])
        int32_t* i_1 = i
        int32_t var_d0
        sub_65b030(&var_d0, i)
        int32_t var_4 = 0
        int32_t eax_5 = var_d0
        
        if (eax_5 s>= *arg1)
            int32_t* i_2 = i
            
            while (true)
                i_2 -= 0xc0
                
                if (eax_5 s>= *i_2)
                    break
                
                sub_65dc20(i_1, i_2)
                eax_5 = var_d0
                i_1 = i_2
            
            result = sub_65dc20(i_1, &var_d0)
            esi = var_d4
        else
            int32_t var_f0_2 = var_d4
            sub_662cc0(&i[0x30], i, arg1, &i[0x30])
            result = sub_65dc20(arg1, &var_d0)
        
        int32_t var_4_1 = 0xffffffff
        struct dpparts::CListItem::VTable* const var_2c_1 = &dpparts::CListItem::`vftable'
        char var_64
        int32_t var_50
        
        if (var_50 u>= 0x10)
            result = j__free(var_64.d)
        
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        int32_t var_68
        int32_t var_7c
        
        if (var_68 u>= 0x10)
            result = j__free(var_7c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d8)
return result
