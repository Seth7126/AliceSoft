// 函数: sub_5b5270
// 地址: 0x5b5270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8ee0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg3
int32_t var_50 = edi
int32_t esi_4 = (arg2 - edi) s/ 0x38
var_54 = esi_4
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(esi_4)
int32_t result = eax_7 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    int32_t* ebx_4 = edi + ((i * 7 + 4) << 3)
    
    do
        ebx_4 = &ebx_4[-0xe]
        struct sys43vm::CCallFuncCount::VTable* const var_4c = &sys43vm::CCallFuncCount::`vftable'
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        i -= 1
        char var_44 = 0
        sub_401ff0(&var_44, &ebx_4[-6], 0, 0xffffffff)
        int32_t var_4 = 0
        int32_t var_2c_1 = *ebx_4
        int32_t* var_28
        sub_5b5a00(&var_28, &ebx_4[1])
        int32_t var_1c_1 = ebx_4[4]
        int32_t var_18_1 = ebx_4[5]
        int32_t var_4_1 = 1
        result = sub_5b5dd0(&var_4c, i, edi, esi_4, &var_4c, arg4)
        int32_t var_4_2 = 0xffffffff
        int32_t* esi_5 = var_28
        var_4c = &sys43vm::CCallFuncCount::`vftable'
        
        if (esi_5 != 0)
            int32_t var_24
            
            if (esi_5 != var_24)
                do
                    (**esi_5)(0)
                    esi_5 = &esi_5[4]
                while (esi_5 != var_24)
                
                esi_5 = var_28
            
            result = j__free(esi_5)
            edi = var_50
            var_28 = nullptr
            var_24 = 0
            int32_t var_20_1 = 0
        
        if (var_30_1 u>= 0x10)
            result = j__free(var_44.d)
        
        esi_4 = var_54
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
