// 函数: sub_618310
// 地址: 0x618310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7440e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = data_7fcbb8
int32_t eax_7 = (*(*arg3 + 8))(eax_2)
char* esi = nullptr
int32_t var_40 = 0
char* var_3c = nullptr
int32_t var_38 = 0
int32_t var_8_1 = 0

if (eax_7 != 0)
    if (eax_7 u> 0xaaaaaaa)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_4173f0(&var_40, eax_7)
    esi = var_3c

int32_t edi = 0
int32_t ebx
char var_2c

if (eax_7 s<= 0)
label_6183ea:
    struct sys43vm::CResume::VTable* const var_34_1 = &sys43vm::CResume::`vftable'
    int32_t var_30_1 = 0
    int32_t var_18 = 0xf
    int32_t var_1c = 0
    var_2c = 0
    var_8_1.b = 3
    ebx.b = sub_623c00(arg2, arg1, &var_40, &eax_5[0x6a])
else
    while (true)
        int32_t* eax_9 = (*(*arg3 + 0x14))(edi)
        
        if (eax_9 == 0)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_403490(&var_2c, 0x76ce28, 0x20)
            var_8_1.b = 1
            sub_612230(eax_5, "system.ResumeWriteComment", &var_2c)
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            ebx.b = 0
            break
        
        char* eax_10 = (**eax_9)()
        
        if (esi == var_38)
            sub_4170d0(&var_40, 1)
            esi = var_3c
        
        char* var_48_2 = esi
        char* var_58_1 = esi
        var_8_1.b = 2
        
        if (esi != 0)
            sub_403360(esi, eax_10)
        
        esi = &esi[0x18]
        var_8_1.b = 0
        edi += 1
        var_3c = esi
        
        if (edi s>= eax_7)
            goto label_6183ea
sub_417070(&var_40)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
