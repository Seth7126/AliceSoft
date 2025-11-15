// 函数: ___std_bulk_submit_threadpool_work@8
// 地址: 0x69a260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    int32_t* ecx = *arg1
    
    if (ecx != 0)
        bool cond:0_1 = ecx[1] != 1
        ecx[1]
        ecx[1] -= 1
        
        if (not(cond:0_1))
            int32_t* edx_1 = ecx[0x1e]
            int32_t* var_20_1
            int32_t eax_4
            
            if (edx_1 == 0)
                eax_4 = *ecx
                var_20_1 = 1
            else
                eax_4 = *edx_1
                var_20_1 = ecx
            
            (*eax_4)(var_20_1)
    
    *arg1 = *arg2
    int32_t eax_5
    eax_5.b = arg2[1].b
    *arg2 = 0
    arg1[1].b = eax_5.b

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
