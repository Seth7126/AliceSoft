// 函数: sub_51a3d0
// 地址: 0x51a3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738bc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *(arg1 + 4)

if (eax_4 != *(arg1 + 8))
    *(arg1 + 8) = eax_4
    *(arg1 + 0x10) = 1

int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x76693c, 0x16)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t* esi_1

if (ecx_1 != 0)
    char* edx_1 = &var_30
    
    if (var_1c u>= 0x10)
        edx_1 = var_30.d
    
    esi_1 = (*(*ecx_1 + 0x2c))(edx_1)
else
    esi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_60 = &common::CEXArrayReader::`vftable'
int32_t* var_5c = esi_1
var_8_1.b = 2

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0

if (esi_1 != 0)
    int32_t eax_10 = (*(*esi_1 + 8))(eax_2)
    int32_t ebx_1 = 0
    
    if (eax_10 s> 0)
        do
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            sub_403490(&var_48, 0x75d337, nullptr)
            var_8_1.b = 3
            char var_78[0x10]
            sub_403230(&var_60, &var_78, ebx_1, &var_48)
            var_8_1.b = 4
            int32_t* ecx_5 = *(arg3 + 0x24)
            
            if (ecx_5 == 0)
                sub_6d090a()
                noreturn
            
            void* i = (*(*ecx_5 + 8))(&var_78)
            var_8_1.b = 3
            int32_t var_64
            
            if (var_64 u>= 0x10)
                sub_403160(var_78[0].d, var_64 + 1, 1)
            
            int32_t* ecx_8 = *(arg1 + 4)
            var_64 = 0xf
            int32_t var_68_1 = 0
            int32_t eax_14 = *(arg1 + 8)
            var_78[0] = 0
            void* i_1 = i
            
            if (ecx_8 != eax_14)
                while (*ecx_8 != i)
                    ecx_8 = &ecx_8[1]
                    
                    if (ecx_8 == eax_14)
                        break
            
            if (ecx_8 != *(arg1 + 8))
                sub_6feca0(ecx_8, &ecx_8[1], *(arg1 + 8) - &ecx_8[1])
                *(arg1 + 8) -= 4
                *(arg1 + 0x10) = 1
            
            sub_404370(arg1 + 4, &i_1)
            var_8_1.b = 2
            *(arg1 + 0x10) = 1
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
            
            ebx_1 += 1
        while (ebx_1 s< eax_10)

*(arg1 + 0x10) = 1
void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
