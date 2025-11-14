// 函数: sub_606100
// 地址: 0x606100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccca8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_40 = edi
sub_4107c0(*edi, edi[1])
edi[1] = *edi
void** var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_4 = 0
int32_t result = sub_605cc0(arg1, &var_3c)
void** ebx_1 = var_3c
void** esi = ebx_1

if (ebx_1 != var_38)
    do
        struct filesystem::CFilePath::VTable* const var_2c = &filesystem::CFilePath::`vftable'
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        char var_28 = 0
        var_4.b = 1
        sub_604730(&var_2c)
        sub_403110(&var_28, arg1, nullptr, 0xffffffff)
        sub_604730(&var_2c)
        sub_403110(&var_28, esi, nullptr, 0xffffffff)
        sub_421cd0(edi, &var_28)
        void** var_4c_1 = nullptr
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0
        var_4.b = 2
        sub_606100(eax_4)
        int32_t* var_68_2 = var_40
        result = sub_606320(edi, edi[1], var_4c_1, var_48_1)
        void** edi_1 = var_4c_1
        
        if (edi_1 != 0)
            if (edi_1 != var_48_1)
                do
                    if (edi_1[5] u>= 0x10)
                        j__free(*edi_1)
                    
                    edi_1[5] = 0xf
                    edi_1[4] = 0
                    *edi_1 = nullptr
                    edi_1 = &edi_1[6]
                while (edi_1 != var_48_1)
                
                edi_1 = var_4c_1
            
            result = j__free(edi_1)
            int32_t var_4c_2 = 0
            int32_t var_48_2 = 0
            int32_t var_44_2 = 0
        
        var_4.b = 0
        var_2c = &filesystem::CFilePath::`vftable'
        
        if (var_14_1 u>= 0x10)
            result = j__free(var_28.d)
        
        edi = var_40
        esi = &esi[6]
    while (esi != var_38)
    
    ebx_1 = var_3c

if (ebx_1 != 0)
    void** esi_1 = ebx_1
    
    if (ebx_1 != var_38)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = nullptr
            esi_1 = &esi_1[6]
        while (esi_1 != var_38)
    
    result = j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
