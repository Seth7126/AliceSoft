// 函数: sub_617990
// 地址: 0x617990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743fa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t edi = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t var_80 = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t result_1 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1

if (sub_619a10(arg1, &var_64, "system.ResumeSave") != 0
        && sub_619a10(arg1, &var_2c, "system.ResumeSave") != 0)
    struct sys43vm::CResume::VTable* var_4c = &sys43vm::CResume::`vftable'
    int32_t var_48_1 = 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    var_8_1.b = 2
    var_8_1.b = 1
    int32_t ebx
    ebx.b = sub_622ec0(&var_4c, &var_64, arg1, &var_2c, &arg1[0x6a]) == 0
    sub_622e70(&var_4c)
    int32_t ebx_2 = zx.d(ebx.b) ^ 1
    void* eax_12 = sub_621720(&arg1[0x52], var_80)
    char const* const var_9c_4
    void** var_98_4
    void var_7c
    
    if (eax_12 != 0)
        if (edi u>= *(eax_12 + 0x14) u>> 2)
            sub_403360(&var_7c, 0x76c810)
            var_8_1.b = 5
            var_98_4 = sub_4b0f20(&var_80, &var_7c, &var_44, &var_80, edi, ebx_2, 
                sub_621fa0(&arg1[0x52], var_80))
            var_8_1.b = 6
            var_9c_4 = "system.ResumeSave"
            goto label_617b3d
        
        *(*(eax_12 + 0x10) + (edi << 2)) = ebx_2
        sub_405d30(&arg1[0x7d], 1)
    else
        sub_403360(&var_7c, 0x76c85c)
        var_8_1.b = 3
        var_98_4 = sub_417810(&var_80, &var_7c, &var_44, &var_80, edi)
        var_8_1.b = 4
        var_9c_4 = "system.ResumeSave"
    label_617b3d:
        sub_612230(arg1, var_9c_4, var_98_4)
        sub_403320(&var_44)
        sub_403320(&var_7c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (result u>= 0x10)
    result = sub_403160(var_64.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
