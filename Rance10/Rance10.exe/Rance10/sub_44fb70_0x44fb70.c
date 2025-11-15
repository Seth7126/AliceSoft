// 函数: sub_44fb70
// 地址: 0x44fb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b0f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (*(arg1 + 0x18) == 0)
    result = false
else
    void* edi_1 = *(arg1 + 0x14)
    
    if (edi_1 == 0)
        result = false
    else
        int32_t* edi_2 = *(edi_1 + 0xc)
        
        if (edi_2 == 0)
            result = false
        else if ((*(*edi_2 + 0x10))(eax_2) == 0)
            result = false
        else
            int32_t eax_6 = (*(**(arg1 + 4) + 0x54))()
            int32_t eax_7 = (*(**(arg1 + 4) + 0x50))()
            struct common::CSize::VTable* const var_20 = &common::CSize::`vftable'
            int32_t var_1c_1 = eax_7
            int32_t var_18_1 = eax_6
            int32_t var_8_1 = 0
            struct common::CRect::VTable* var_48
            struct common::CRect::VTable** eax_9 = sub_404a10(&var_48, arg1 + 8, &var_20)
            var_8_1.b = 1
            int32_t var_8_2 = 0xffffffff
            
            if (sub_4502f0(*(arg1 + 0x18), edi_2, eax_9) != 0)
                result = true
            else
                void var_2c
                sub_403360(&var_2c, 0x75ddb4)
                int32_t var_8_3 = 2
                sub_6c52e0(&var_2c)
                sub_403320(&var_2c)
                result = false

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
