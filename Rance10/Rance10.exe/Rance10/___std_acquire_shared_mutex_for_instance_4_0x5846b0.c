// 函数: ___std_acquire_shared_mutex_for_instance@4
// 地址: 0x5846b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bd06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x1f0) - *(arg1 + 0x1ec)) s>> 2)
    int32_t eax_7 = *(*(arg1 + 0x1ec) + (arg2 << 2))
    
    if (eax_7 != 0xffffffff)
        void var_1c
        int32_t result = *sub_586e30(*(arg1 + 0x244), &var_1c, eax_7)
        int32_t var_8_1 = 0
        int32_t* var_18
        
        if (var_18 != 0)
            bool cond:0_1 = var_18[1] != 1
            var_18[1]
            var_18[1] -= 1
            
            if (not(cond:0_1))
                (**var_18)(eax_2)
                int32_t edi_1 = var_18[2]
                var_18[2] -= 1
                
                if (edi_1 == 1)
                    (*(*var_18 + 4))()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
