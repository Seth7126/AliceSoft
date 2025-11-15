// 函数: sub_481b60
// 地址: 0x481b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (**data_7fcb70)(eax_2)
int32_t* esi = data_7fcb70

if (esi != 0)
    char var_30
    int32_t* edx_1 = sub_419600(result, 0x75ffb4, &var_30, arg2)
    int32_t var_8_1 = 0
    
    if (edx_1[5] u>= 0x10)
        edx_1 = *edx_1
    
    int32_t* eax_6 = (*(esi[1] + 0x24))(edx_1)
    int32_t var_8_2 = 0xffffffff
    int32_t* edi_1 = eax_6
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        eax_6 = sub_403160(var_30.d, var_1c + 1, 1)
    
    void* var_54_3 = *(arg1 + 0xc)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    void* var_3c
    sub_425bb0(arg1 + 0x10, sub_490990(eax_6, edi_1, &var_3c, var_54_3))
    void* ecx_7 = var_3c
    
    if (ecx_7 != 0)
        int32_t var_34
        sub_403160(ecx_7, (var_34 - ecx_7) s>> 2, 4)
        var_3c = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
    
    result = (*(*esi + 4))()

int32_t* ecx_9 = *(arg1 + 0xc)

if (ecx_9 != 0)
    result = (*(*ecx_9 + 0xc))()
    
    if (result == 1)
        int32_t* i = *(arg1 + 0x10)
        
        for (int32_t edi_2 = *(arg1 + 0x14); i != edi_2; i = &i[1])
            result = (*(**i + 0x14))()
            
            if (result.b != 0)
                int32_t* ecx_11 = *(arg1 + 0xc)
                *(arg1 + 0x1c) = 1
                (*(*ecx_11 + 0x24))(2)
                int32_t esi_1 = **(arg1 + 0xc)
                int32_t eax_16 = (*(esi_1 + 0x18))()
                *(arg1 + 0xc)
                (*(esi_1 + 0x30))(eax_16 * 2)
                int32_t esi_2 = **(arg1 + 0xc)
                int32_t eax_18 = (*(esi_2 + 0x14))()
                *(arg1 + 0xc)
                result = (*(esi_2 + 0x2c))(eax_18 * 2)
                break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
