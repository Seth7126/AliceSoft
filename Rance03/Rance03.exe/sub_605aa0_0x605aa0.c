// 函数: sub_605aa0
// 地址: 0x605aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccbf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_30 = arg2
sub_4107c0(*arg2, arg2[1])
arg2[1] = *arg2
void** var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_4 = 0
sub_606100(arg1, &var_3c)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_421cd0(&var_3c, arg1)
void** ebp = var_3c
void** edi = ebp
int32_t ebx_1 = var_38

if (ebp != ebx_1)
    do
        var_48 = nullptr
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        var_4.b = 1
        result = sub_6055e0(edi, &var_48)
        void** ebp_1 = var_48
        void** esi_1 = ebp_1
        
        if (ebp_1 != var_44_1)
            do
                struct filesystem::CFilePath::VTable* const var_2c =
                    &filesystem::CFilePath::`vftable'
                int32_t var_14_1 = 0xf
                int32_t var_18_1 = 0
                char var_28 = 0
                var_4.b = 2
                sub_604730(&var_2c)
                sub_403110(&var_28, edi, nullptr, 0xffffffff)
                sub_604730(&var_2c)
                sub_403110(&var_28, esi_1, nullptr, 0xffffffff)
                result = sub_421cd0(var_30, &var_28)
                var_2c = &filesystem::CFilePath::`vftable'
                
                if (var_14_1 u>= 0x10)
                    result = j__free(var_28.d)
                
                esi_1 = &esi_1[6]
            while (esi_1 != var_44_1)
            
            ebp_1 = var_48
        
        var_4.b = 0
        
        if (ebp_1 != 0)
            void** esi_2 = ebp_1
            
            if (ebp_1 != var_44_1)
                do
                    if (esi_2[5] u>= 0x10)
                        j__free(*esi_2)
                    
                    esi_2[5] = 0xf
                    esi_2[4] = 0
                    *esi_2 = nullptr
                    esi_2 = &esi_2[6]
                while (esi_2 != var_44_1)
            
            result = j__free(ebp_1)
            var_48 = nullptr
            int32_t var_44_2 = 0
            int32_t var_40_2 = 0
        
        ebx_1 = var_38
        edi = &edi[6]
    while (edi != ebx_1)
    
    ebp = var_3c

if (ebp != 0)
    void** esi_3 = ebp
    
    if (ebp != ebx_1)
        do
            if (esi_3[5] u>= 0x10)
                j__free(*esi_3)
            
            esi_3[5] = 0xf
            esi_3[4] = 0
            *esi_3 = nullptr
            esi_3 = &esi_3[6]
        while (esi_3 != ebx_1)
    
    result = j__free(ebp)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
