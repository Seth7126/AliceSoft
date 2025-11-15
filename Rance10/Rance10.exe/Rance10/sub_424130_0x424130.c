// 函数: sub_424130
// 地址: 0x424130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7294a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_7fcb3c
sub_427910(&edi[5])
sub_403490(&edi[0x19], 0x75cd33, nullptr)

if (edi[3].b == 0)
    goto label_424240

struct filesystem::CFilePath::VTable* var_48 = &filesystem::CFilePath::`vftable'
char* var_30 = 0xf
int32_t var_34_1 = 0
char var_44 = 0
int32_t var_8_1 = 0
sub_67e790(&var_48)
int32_t var_18 = 0xf
int32_t var_1c_1 = 0
char var_2c = 0
sub_403490(&var_2c, "SF", 2)
var_8_1.b = 1
sub_67eaf0(&var_48)
sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

char* result
int32_t* ebx

if (sub_423f60(edi, &var_44, arg1) == 0)
    int32_t var_8_2 = 0xffffffff
    sub_67e530(&var_48)
label_424240:
    result = sub_424010(edi, arg1)
    
    if (result.b == 0)
        if (edi[3].b == 0)
            goto label_424365
        
        void** var_20 = nullptr
        int32_t var_1c_2 = 0
        var_18 = 0
        int32_t var_8_3 = 2
        sub_423d90(&var_20)
        void** esi_1 = var_20
        
        if (esi_1 == var_1c_2)
        label_4242a3:
            int32_t var_8_4 = 0xffffffff
            result = sub_417070(&var_20)
            
            if (edi[3].b == 0)
                goto label_424365
            
            var_48 = &filesystem::CFilePath::`vftable'
            var_30 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
            int32_t var_8_5 = 3
            sub_67e8b0(&var_48)
            var_18 = 0xf
            int32_t var_1c_3 = 0
            var_2c = 0
            sub_403490(&var_2c, "SF", 2)
            var_8_5.b = 4
            sub_67eaf0(&var_48)
            sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
            var_8_5.b = 3
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            if (sub_423f60(edi, &var_44, arg1) != 0)
                goto label_424220
            
            int32_t var_8_6 = 0xffffffff
            result = sub_67e530(&var_48)
        label_424365:
            int32_t* eax_11 = sub_419600(result, 0x75d5ec, &var_44, arg1)
            int32_t var_8_7 = 5
            char* eax_12 = sub_4176f0(eax_11.b, eax_11, &var_2c, 0x75d5fc)
            var_8_7.b = 6
            var_8_7.b = 7
            void* var_60
            sub_45aae0(sub_4175e0(eax_12, eax_12, &var_60, U"\n"))
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60, var_4c + 1, 1)
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_4 = 0
            var_2c = 0
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, &var_30[1], 1)
            
            result.b = 0
        else
            while (true)
                if (sub_423f60(edi, esi_1, arg1) != 0)
                    ebx.b = sub_4245c0(edi, arg1)
                    sub_417070(&var_20)
                    result.b = ebx.b
                    break
                
                esi_1 = &esi_1[6]
                
                if (esi_1 == var_1c_2)
                    goto label_4242a3
    else
        result.b = 1
else
label_424220:
    ebx.b = sub_4245c0(edi, arg1)
    sub_67e530(&var_48)
    result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
