// 函数: sub_464060
// 地址: 0x464060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c4a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_8_1 = 0
char* edi = nullptr
uint32_t var_78 = 0
char* var_84 = nullptr
int32_t var_80 = 0
int32_t var_7c = 0
var_8_1.b = 1
void* ebx
void* var_74

if (*(arg2 + 4) + 8 u<= *(arg2 + 8))
    if (sub_6c9360(arg2, &var_5c, 4).b == 0)
        ebx.b = 0
    else if (sub_61ec90(arg2, &var_78).b == 0)
        ebx.b = 0
    else
        ebx = var_78
        
        if (*(arg2 + 4) + ebx u<= *(arg2 + 8))
            sub_405950(&var_84, ebx)
            edi = var_84
            
            if (sub_6c9430(arg2, edi, ebx).b == 0)
                ebx.b = 0
            else
                struct fileimage::CFileImageAnalyser::VTable* const var_20 =
                    &fileimage::CFileImageAnalyser::`vftable'
                char* var_1c_2 = edi
                void* var_18_2 = var_80
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                var_8_1.b = 6
                
                if (sub_6c9360(&var_20, &var_44, 4) == 0)
                    ebx.b = 0
                    sub_403320(&var_44)
                else if (sub_407560(&var_44, "EXTF") == 0)
                    ebx.b = 0
                    sub_403320(&var_44)
                else
                    var_78 = 0
                    
                    if (sub_61ec90(&var_20, &var_78) == 0 || var_78 != 1)
                        ebx.b = 0
                        sub_403320(&var_44)
                    else if (sub_61ec90(&var_20, arg3) == 0)
                        ebx.b = 0
                        sub_403320(&var_44)
                    else
                        ebx.b = 1
                        sub_403320(&var_44)
        else
            sub_403360(&var_74, 0x75e434)
            var_8_1.b = 4
            sub_45eb40(*(arg1 + 4), &var_74)
            sub_403320(&var_74)
            ebx.b = 0
else
    char* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t* eax_6 = sub_403490(&var_2c, 0x75e468, 0x31)
    var_8_1.b = 2
    var_8_1.b = 3
    sub_4055a0(*(arg1 + 4), sub_4175e0(eax_6, &var_2c, &var_74, U"\n"), 0, 0xffffffff)
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74, var_60 + 1, 1)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, &var_18_1[1], 1)
    
    ebx.b = 0

if (edi != 0)
    sub_403160(edi, var_7c - edi, 1)

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
