// 函数: sub_5665c0
// 地址: 0x5665c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x58) - *(arg1 + 0x54)) s>> 3)
    int32_t* edi_1 = *(arg1 + 0x54) + (arg2 << 3)
    __Smtx_lock_shared(&edi_1[1])
    void* edi_2 = *edi_1
    __Smtx_unlock_shared(&edi_1[1])
    
    if (edi_2 != 0)
        void var_18
        int32_t result = *sub_586e30(edi_2 + 0x14, &var_18, arg3)
        int32_t var_8_1 = 0
        int32_t* var_14
        
        if (var_14 != 0)
            bool cond:0_1 = var_14[1] != 1
            var_14[1]
            var_14[1] -= 1
            
            if (not(cond:0_1))
                (**var_14)(eax_2)
                int32_t edi_3 = var_14[2]
                var_14[2] -= 1
                
                if (edi_3 == 1)
                    (*(*var_14 + 4))()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
