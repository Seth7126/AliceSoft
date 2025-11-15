// 函数: sub_49ed40
// 地址: 0x49ed40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72acd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *(arg2 + 4)

if (result s> 0)
    int32_t ecx = *(arg2 + 8)
    
    if (ecx s> 0 && (*(arg1 + 0x6c) != result || *(arg1 + 0x70) != ecx))
        *(arg1 + 0x6c) = result
        *(arg1 + 0x70) = *(arg2 + 8)
        *(arg1 + 0x138) = *(arg2 + 4)
        result = *(arg2 + 8)
        *(arg1 + 0x13c) = result
        
        if (*(arg1 + 0x110) != 0)
            result = (*(**(arg1 + 0x110) + 0x14))(*(arg1 + 0x138), *(arg1 + 0x13c))
        
        if (*(arg1 + 0x40) != 0)
            *(arg1 + 0x60) = *(arg2 + 4)
            *(arg1 + 0x64) = *(arg2 + 8)
            result = sub_4a55a0(arg1 + 0xc0, arg1 + 0x5c)
        
        if (*(arg1 + 0x1f8) != 0)
        label_49ee06:
            
            if (*(arg1 + 0x110) != 0)
                result = (*(**(arg1 + 0x110) + 0x10))(eax_2)
            
            if (*(arg1 + 0x110) == 0 || result.b == 0)
                result = (*(*(arg1 + 4) + 0x44))(eax_2)
            else if (*(arg1 + 0x110) != 0)
                result = (*(**(arg1 + 0x110) + 0x1c))()
                
                if (result.b == 0)
                    void var_30
                    sub_403360(&var_30, 0x76105c)
                    int32_t var_8_1 = 0
                    sub_6c52e0(&var_30)
                    int32_t var_8_2 = 0xffffffff
                    result = sub_403320(&var_30)
                
                if (*(arg1 + 0x110) != 0)
                    result = (*(**(arg1 + 0x110) + 0x20))()
                    
                    if (result.b == 0)
                        void var_48
                        sub_403360(&var_48, 0x76101c)
                        int32_t var_8_3 = 1
                        sub_6c52e0(&var_48)
                        result = sub_403320(&var_48)
        else if (*(arg1 + 0x40) != 0)
            result = sub_4a5990(arg1 + 0xc0)
            
            if (result.b != 0)
                goto label_49ee06

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
