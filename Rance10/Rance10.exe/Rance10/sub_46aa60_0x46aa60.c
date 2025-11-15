// 函数: sub_46aa60
// 地址: 0x46aa60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cfec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 1
char var_64 = 0x2e
void* eax_3 = sub_42cb30(arg2, &var_64, arg1)
void* var_48
sub_405480(arg2, &var_48, 0, eax_3)
int32_t var_8_1 = 0
char var_30
sub_405480(arg2, &var_30, eax_3 + 1, 0xffffffff)
var_8_1.b = 1
int32_t var_38
int32_t var_34
int32_t var_1c
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result

if (var_38 == 0)
label_46ac2e:
    result = nullptr
else
    struct exfile::CDefineData::VTable** eax_5 = sub_46e950(arg1 + 8, &var_48, 0xffffffff)
    eax_5[0xd] = 6
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_1
    int32_t ecx_5
    result_1, ecx_5 = sub_46e020(eax_5)
    result = result_1
    
    if (eax_3 != 0xffffffff)
        var_64 = 0x2e
        void* i
        
        do
            int32_t var_7c_2 = 1
            i = sub_42cb30(&var_30, &var_64, ecx_5)
            void* var_60
            char* eax_6 = sub_405480(&var_30, &var_60, 0, i)
            
            if (&var_48 != eax_6)
                if (var_34 u>= 0x10)
                    sub_403160(var_48, var_34 + 1, 1)
                
                var_34 = 0xf
                var_38 = 0
                var_48.b = 0
                sub_4056a0(&var_48, eax_6)
            
            var_8_1.b = 1
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60, var_4c + 1, 1)
            
            char* eax_12 = sub_405480(&var_30, &var_60, i + 1, 0xffffffff)
            
            if (&var_30 != eax_12)
                if (var_1c u>= 0x10)
                    sub_403160(var_30.d, var_1c + 1, 1)
                
                var_1c = 0xf
                int32_t var_20_1 = 0
                var_30 = 0
                sub_4056a0(&var_30, eax_12)
            
            var_8_1.b = 1
            
            if (var_4c u>= 0x10)
                sub_403160(var_60, var_4c + 1, 1)
            
            if (var_38 == 0)
                sub_46ad20(arg1, result)
                goto label_46ac2e
            
            struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_2
            result_2, ecx_5 = sub_475520(result, &var_48)
            
            if (result_2 == 0)
                int32_t* ecx_12 = result[7]
                
                if (ecx_12 != 0)
                    (**ecx_12)(1)
                
                result[7] = 0
                result_2, ecx_5 = sub_475360(result, &var_48)
            
            result = result_2
        while (i != 0xffffffff)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20_2 = 0
var_30 = 0

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
