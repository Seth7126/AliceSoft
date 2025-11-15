// 函数: ??0Etw@details@Concurrency@@AAE@XZ
// 地址: 0x565280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    void* edi_1 = arg1 + 4
    
    do
        int32_t var_8_1 = 0
        int32_t* esi_1 = *edi_1
        
        if (esi_1 != 0)
            bool cond:0_1 = esi_1[1] != 1
            esi_1[1]
            esi_1[1] -= 1
            
            if (not(cond:0_1))
                (**esi_1)(eax_2)
                bool cond:1_1 = esi_1[2] != 1
                esi_1[2]
                esi_1[2] -= 1
                
                if (not(cond:1_1))
                    (*(*esi_1 + 4))()
        
        edi_1 += 8
        int32_t var_8_2 = 0xffffffff
        result = edi_1 - 4
    while (result != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
