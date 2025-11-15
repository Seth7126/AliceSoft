// 函数: sub_4b9080
// 地址: 0x4b9080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_44dca0(*(arg1[6] + 4))
void* eax_4 = arg1[6]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[6]
*eax_5 = eax_5
void* eax_6 = arg1[6]
int32_t var_8_2 = 0xffffffff
int32_t var_4c = 0xf
int32_t var_50 = 0
*(eax_6 + 8) = eax_6
arg1[7] = 0
char var_60 = 0
sub_403490(&var_60, 0x75cff3, nullptr)
int32_t var_8_3 = 1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x761dd0, 0x16)
var_8_3.b = 2
char var_90[0x10]
char* eax_7 = sub_403cd0(arg2, &var_90, &var_30, &var_60)

if (arg1 != eax_7)
    int32_t eax_8 = arg1[5]
    
    if (eax_8 u>= 0x10)
        sub_403160(*arg1, eax_8 + 1, 1)
    
    arg1[5] = 0xf
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = 0
    int32_t* eax_10
    
    if (cond:0_1)
        eax_10 = arg1
    else
        eax_10 = *arg1
    
    *eax_10 = 0
    sub_4056a0(arg1, eax_7)

int32_t var_7c

if (var_7c u>= 0x10)
    sub_403160(var_90[0].d, var_7c + 1, 1)

int32_t var_7c_1 = 0xf
int32_t var_80 = 0
var_90[0] = 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_8_4 = 0xffffffff
int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

int32_t var_1c_2 = 0xf
int32_t var_20_2 = 0
var_30 = 0
sub_403490(&var_30, 0x761dfc, 6)
int32_t var_8_5 = 4
int32_t* ecx_7 = *(arg2 + 4)
int32_t* esi_1

if (ecx_7 != 0)
    char* edx_1 = &var_30
    
    if (var_1c_2 u>= 0x10)
        edx_1 = var_30.d
    
    esi_1 = (*(*ecx_7 + 0x2c))(edx_1)
else
    esi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_f8 = &common::CEXArrayReader::`vftable'
int32_t* var_f4_1 = esi_1
var_8_5.b = 6

if (var_1c_2 u>= 0x10)
    sub_403160(var_30.d, var_1c_2 + 1, 1)

int32_t var_1c_3 = 0xf
int32_t var_20_3 = 0
var_30 = 0
int32_t ebx_1

if (esi_1 != 0)
    ebx_1 = (*(*esi_1 + 8))(eax_2)
else
    ebx_1 = 0

int32_t result

if ((ebx_1.b & 1) == 0)
    int32_t edi_2 = 0
    
    if (ebx_1 s> 0)
        do
            int32_t var_64_1 = 0xf
            int32_t var_68_1 = 0
            char var_78 = 0
            sub_403490(&var_78, 0x75cffe, nullptr)
            var_8_5.b = 7
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            sub_403490(&var_48, 0x75cffd, nullptr)
            var_8_5.b = 8
            char var_c0[0x10]
            int32_t* eax_22 = sub_403230(&var_f8, &var_c0, edi_2 + 1, &var_78)
            var_8_5.b = 9
            char var_a8[0x10]
            char* eax_23 = sub_403230(&var_f8, &var_a8, edi_2, &var_48)
            var_8_5.b = 0xb
            void var_f0
            int32_t* eax_25
            void* ecx_15
            eax_25, ecx_15 = sub_4581e0(sub_4b9470(eax_23, eax_23, &var_f0, eax_22))
            int32_t* var_11c_8 = eax_25
            void* var_120_8 = &eax_25[4]
            void** var_104
            sub_44eda0(&arg1[6], &var_104, ecx_15)
            sub_408940(&var_f0)
            int32_t var_94
            
            if (var_94 u>= 0x10)
                sub_403160(var_a8[0].d, var_94 + 1, 1)
            
            var_94 = 0xf
            int32_t var_98_1 = 0
            var_a8[0] = 0
            int32_t var_ac
            
            if (var_ac u>= 0x10)
                sub_403160(var_c0[0].d, var_ac + 1, 1)
            
            var_ac = 0xf
            int32_t var_b0_1 = 0
            var_c0[0] = 0
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
            
            var_8_5.b = 6
            int32_t var_34_2 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            
            if (var_64_1 u>= 0x10)
                sub_403160(var_78.d, var_64_1 + 1, 1)
            
            edi_2 += 2
        while (edi_2 s< ebx_1)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
