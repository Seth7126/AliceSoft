// 函数: sub_499820
// 地址: 0x499820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpvariable::CController::VTable** 
    var_64 = arg2
struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpanalysis::CController::VTable** 
    var_68 = arg1
std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >(
    arg1[1], arg1[2])
arg1[2] = arg1[1]
sub_49a460(&arg1[1])
arg1[4] = 0
char* var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "DPAnalysis", 0xa)
int32_t var_8_1 = 0
bool cond:0 = sub_499af0(arg1, &var_2c, arg2, arg3) == 0
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, &var_18[1], 1)

char* result

if (cond:0 == 0)
    char* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, "DPVariable", 0xa)
    int32_t var_8_3 = 1
    bool cond:1_1 = sub_499af0(arg1, &var_2c, arg2, arg3) == 0
    int32_t var_8_4 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, &var_18_1[1], 1)
    
    if (cond:1_1 != 0)
        result.b = 0
    else
        sub_403360(&var_2c, "DPParts")
        int32_t var_8_5 = 2
        bool cond:2_1 = sub_499af0(arg1, &var_2c, arg2, arg3) == 0
        int32_t var_8_6 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, &var_18_1[1], 1)
        
        if (cond:2_1 != 0)
            result.b = 0
        else
            sub_403360(&var_2c, "DPLogViewer")
            int32_t var_8_7 = 3
            int32_t var_8_8 = 0xffffffff
            struct 
                common::SuicideRefCounter<class IJaffaDebugPlugin>::dpvariable::CController::VTable*
                * ebx
            ebx.b = sub_499af0(arg1, &var_2c, arg2, arg3) == 0
            sub_403320(&var_2c)
            
            if (ebx.b != 0)
                result.b = 0
            else
                void var_44
                sub_403360(&var_44, "DPSound")
                int32_t var_8_9 = 4
                ebx.b = sub_499af0(arg1, &var_44, arg2, arg3) == 0
                sub_403320(&var_44)
                result.b = ebx.b == 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
