// 函数: sub_4afad0
// 地址: 0x4afad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761998, 0xc)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t* var_34
int32_t* edi_1

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    int32_t* eax_4 = (*(*ecx_1 + 0x2c))(edx_1)
    edi_1 = eax_4
    var_34 = eax_4
else
    edi_1 = nullptr
    var_34 = nullptr

struct common::CEXArrayReader::VTable* const var_40 = &common::CEXArrayReader::`vftable'
int32_t* var_3c = edi_1
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* result = *arg1
int32_t ebx = 0
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
arg1[1] = result

if (edi_1 != 0)
    result = (*(*edi_1 + 8))(eax_2)
    void* result_1 = result
    
    if (result s> 0)
        do
            int32_t eax_8 = (*(*edi_1 + 0xc))(ebx, 0)
            int32_t ecx_4 = arg1[1]
            int32_t var_30
            result = &var_30
            var_30 = eax_8
            int32_t edx_3
            
            if (&var_30 u< ecx_4)
                edx_3 = *arg1
            
            if (&var_30 u>= ecx_4 || edx_3 u> &var_30)
                if (ecx_4 == arg1[2])
                    sub_404610(arg1, 1)
                
                result = arg1[1]
                
                if (result != 0)
                    *result = eax_8
            else
                if (ecx_4 == arg1[2])
                    result = sub_404610(arg1, 1)
                
                void** ecx_6 = arg1[1]
                
                if (ecx_6 != 0)
                    result = *(*arg1 + ((&var_30 - edx_3) s>> 2 << 2))
                    *ecx_6 = result
            
            arg1[1] += 4
            ebx += 1
            edi_1 = var_34
        while (ebx s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
