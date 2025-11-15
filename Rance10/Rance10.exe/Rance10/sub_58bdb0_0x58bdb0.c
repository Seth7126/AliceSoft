// 函数: sub_58bdb0
// 地址: 0x58bdb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t* ecx = result[0xd]

if (ecx != 0)
    result = sub_57dc80(ecx)
    
    if (result != 0)
        int32_t* result_1 = result
        void var_18
        result = Concurrency::details::_SyncOriginator<uint32_t>::~_SyncOriginator<uint32_t>(
            arg1 + 0x24, sub_5dd5b0(arg3, &var_18))
        int32_t var_8_1 = 0
        int32_t* var_14
        
        if (var_14 != 0)
            bool cond:0_1 = var_14[1] != 1
            result = var_14[1]
            var_14[1] -= 1
            
            if (not(cond:0_1))
                result = (**var_14)(eax_2)
                int32_t edi_1 = var_14[2]
                var_14[2] -= 1
                
                if (edi_1 == 1)
                    result = (*(*var_14 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
