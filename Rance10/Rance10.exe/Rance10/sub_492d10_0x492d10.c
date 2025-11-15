// 函数: sub_492d10
// 地址: 0x492d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fac0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_424db0(data_7fcb80, arg1)
void* var_44
char* eax_3 = sub_405070(&var_44, arg1)
int32_t var_8_1 = 0
int32_t* lpFileName_1
sub_4176f0(eax_3.b, eax_3, &lpFileName_1, ".ex")
var_8_1.b = 2
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

int32_t* lpFileName = &lpFileName_1
int32_t var_30_1 = 0xf
int32_t var_18

if (var_18 u>= 0x10)
    lpFileName = lpFileName_1

int32_t var_34 = 0
var_44.b = 0
uint32_t result = GetFileAttributesA(lpFileName)
int32_t ebx

if (result == 0xffffffff)
    ebx.b = 0
else
    result.b = not.b((result u>> 4).b)
    result.b &= 1
    
    if (result.b == 0)
        ebx.b = 0
    else
        int32_t* lpFileName_2 = &lpFileName_1
        
        if (var_18 u>= 0x10)
            lpFileName_2 = lpFileName_1
        
        void* esi_1 = *data_7fcb70
        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** eax_7 =
            sub_46d320(lpFileName_2)
        data_7fcb70
        
        if ((*(esi_1 + 0x14))(eax_7).b == 0)
            ebx.b = 0
        else
            ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(lpFileName_1, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
