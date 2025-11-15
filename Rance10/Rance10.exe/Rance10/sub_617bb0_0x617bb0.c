// 函数: sub_617bb0
// 地址: 0x617bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74408a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_114 = nullptr
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
var_8_1.b = 1

if (sub_619a10(arg1, &var_2c, "system.ResumeLoad") != 0
        && sub_619a10(arg1, &var_44, "system.ResumeLoad") != 0)
    struct sys43vm::CResume::VTable* var_64 = &sys43vm::CResume::`vftable'
    int32_t var_60_1 = 0
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    var_8_1.b = 2
    
    if (sub_6231b0(&var_2c, arg1, &var_44, &arg1[0x6a]) != 0)
        sub_621ee0(&arg1[0x52])
        sub_405d30(&arg1[0x7d], 0)
    else
        void var_94
        void var_7c
        
        if (var_60_1 == 1)
            int32_t* ecx_6 = arg1[9]
            char eax_14
            
            if (ecx_6 != 0)
                eax_14 = (**ecx_6)(eax_2)
            
            void var_10c
            void var_f4
            void var_dc
            char* ebx_1
            int32_t* edi_1
            
            if (ecx_6 == 0 || eax_14 == 0)
                edi_1 = sub_403360(&var_dc, 0x75d616)
                int32_t var_8_3 = 5
                ebx_1 = 4
            else
                int32_t* eax_16 = sub_419600(&var_5c, 0x76c928, &var_10c, &var_5c)
                var_8_1.b = 3
                var_114 = 1
                edi_1 = sub_4176f0(eax_16.b, eax_16, &var_f4, &data_76c924)
                int32_t var_8_2 = 4
                ebx_1 = 3
            
            var_114 = ebx_1
            void var_c4
            int32_t* eax_20 = sub_419600(&var_2c, 0x76c8c4, &var_c4, &var_2c)
            int32_t var_8_4 = 6
            void var_ac
            void* eax_21 = sub_4176f0(eax_20.b, eax_20, &var_ac, 0x76c91c)
            var_8_4.b = 7
            int32_t* eax_22 = sub_4177a0(eax_21, eax_21, &var_7c, edi_1)
            var_8_4.b = 8
            var_8_4.b = 9
            bool cond:1_1 = sub_612480(arg1, sub_4176f0(eax_22.b, eax_22, &var_94, 0x76c940)) == 0
            sub_403320(&var_94)
            sub_403320(&var_7c)
            sub_403320(&var_ac)
            sub_403320(&var_c4)
            
            if ((ebx_1.b & 4) != 0)
                ebx_1 &= 0xfffffffb
                sub_403320(&var_dc)
            
            if ((ebx_1.b & 2) != 0)
                ebx_1 &= 0xfffffffd
                sub_403320(&var_f4)
            
            if ((ebx_1.b & 1) != 0)
                sub_403320(&var_10c)
            
            if (cond:1_1 == 0)
                sub_621ee0(&arg1[0x52])
                sub_405d30(&arg1[0x7d], 0)
        else
            char* eax_9 = &var_2c
            
            if (result_1 u>= 0x10)
                eax_9 = var_2c.d
            
            var_114 = eax_9
            sub_403360(&var_7c, 0x76c8d8)
            var_8_1.b = 0xa
            var_8_1.b = 0xb
            sub_612320(arg1, sub_409240(&var_114, &var_7c, &var_94, &var_114))
            sub_403320(&var_94)
            sub_403320(&var_7c)
    
    sub_622e70(&var_64)

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t result = result_1
int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
