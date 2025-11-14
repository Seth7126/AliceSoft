// 函数: sub_5b5400
// 地址: 0x5b5400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8ee0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = (arg2 - arg3) s/ 0x38

if (i s> 1)
    void* ebx_1 = arg3 + 8
    char* edi_1 = arg2 - 0x30
    var_54 = 0x30 - arg3
    
    do
        struct sys43vm::CCallFuncCount::VTable* const var_4c = &sys43vm::CCallFuncCount::`vftable'
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        sub_401ff0(&var_44, edi_1, 0, 0xffffffff)
        int32_t var_4 = 0
        int32_t var_2c_1 = *(edi_1 + 0x18)
        int32_t* var_28
        sub_5b5a00(&var_28, &edi_1[0x1c])
        int32_t var_1c_1 = *(edi_1 + 0x28)
        int32_t var_18_1 = *(edi_1 + 0x2c)
        int32_t var_4_1 = 1
        
        if (edi_1 != ebx_1)
            sub_401ff0(edi_1, ebx_1, 0, 0xffffffff)
        
        *(edi_1 + 0x18) = *(arg3 + 0x20)
        sub_5b5aa0(&edi_1[0x1c], arg3 + 0x24)
        *(edi_1 + 0x28) = *(arg3 + 0x30)
        *(edi_1 + 0x2c) = *(arg3 + 0x34)
        void* eax_20 = (0xfffffff8 - arg3 + edi_1) s/ 0x38
        sub_5b5dd0(eax_20, nullptr, arg3, eax_20, &var_4c, arg4)
        int32_t var_4_2 = 0xffffffff
        int32_t* esi_3 = var_28
        var_4c = &sys43vm::CCallFuncCount::`vftable'
        
        if (esi_3 != 0)
            int32_t var_24
            
            if (esi_3 != var_24)
                do
                    (**esi_3)(0)
                    esi_3 = &esi_3[4]
                while (esi_3 != var_24)
                
                esi_3 = var_28
            
            j__free(esi_3)
            var_28 = nullptr
            var_24 = 0
            ebx_1 = arg3 + 8
            int32_t var_20_1 = 0
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        edi_1 -= 0x38
        i = (var_54 + edi_1) s/ 0x38
    while (i s> 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return i
