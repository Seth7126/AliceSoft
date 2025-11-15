// 函数: sub_5fe0d0
// 地址: 0x5fe0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7423b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1

if (arg1 != arg2)
    int32_t eax_3 = *arg2
    int32_t ecx = arg2[1]
    
    if (eax_3 != ecx)
        void* ecx_2 = *arg1
        int32_t edx_3 = (ecx - eax_3) s>> 4
        int32_t ebx_3 = (arg1[1] - ecx_2) s>> 4
        
        if (edx_3 u> ebx_3)
            int32_t eax_12 = (arg1[2] - ecx_2) s>> 4
            
            if (edx_3 u> eax_12)
                if (ecx_2 != 0)
                    sub_5fb6b0(ecx_2, arg1[1])
                    void* ecx_9 = *arg1
                    sub_403160(ecx_9, (arg1[2] - ecx_9) s>> 4, 0x10)
                
                if (sub_5fe2f0(arg1, (arg2[1] - *arg2) s>> 4) != 0)
                    int32_t var_8_1 = 0
                    arg1[1] = sub_5fe780(*arg2, arg2[1], *arg1)
            else
                void* ebx_5 = (ebx_3 << 4) + *arg2
                void* eax_13
                int32_t ecx_7
                eax_13, ecx_7 = sub_5fe750(eax_12, ebx_5, *arg2, ecx_2)
                int32_t var_30_2 = 0
                int32_t var_34_1 = ecx_7
                arg1[1] = sub_5fb890(eax_13, arg2[1], ebx_5, arg1[1])
        else
            sub_5fb6b0(sub_5fe750(eax_3, arg2[1], eax_3, ecx_2), arg1[1])
            arg1[1] = ((arg2[1] - *arg2) & 0xfffffff0) + *arg1
    else
        sub_5fb670(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
