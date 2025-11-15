// 函数: sub_4051e0
// 地址: 0x4051e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
int32_t var_14 = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t var_8_1 = 0
int32_t edi = 0
int32_t eax_4 = arg2[4]
int32_t var_14_1 = 1

if (eax_4 s> 0)
    do
        int32_t eax_5 = arg2[5]
        char* ecx
        
        if (eax_5 u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        ecx.b = ecx[edi]
        char eax_10
        
        if (ecx.b u< 0x81 || ecx.b u> 0x9f)
            ecx.b += 0x20
            
            if (ecx.b u<= 0xf)
                goto label_405286
            
            int32_t* ecx_2
            
            if (eax_5 u< 0x10)
                ecx_2 = arg2
            else
                ecx_2 = *arg2
            
            int32_t* ecx_3
            
            if (*(ecx_2 + edi) s>= 0x41)
                if (eax_5 u< 0x10)
                    ecx_3 = arg2
                else
                    ecx_3 = *arg2
            
            if (*(ecx_2 + edi) s< 0x41 || *(ecx_3 + edi) s> 0x5a)
                if (eax_5 u< 0x10)
                    eax_10 = *(arg2 + edi)
                else
                    eax_10 = *(*arg2 + edi)
            else if (eax_5 u< 0x10)
                int32_t* eax_11
                eax_11.b = *(arg2 + edi)
                eax_11.b += 0x20
                eax_10 = eax_11.b
            else
                char* eax_9
                eax_9.b = (*arg2)[edi]
                eax_9.b += 0x20
                eax_10 = eax_9.b
        else
        label_405286:
            char* eax_6
            
            if (eax_5 u< 0x10)
                eax_6 = arg2
            else
                eax_6 = *arg2
            
            sub_405500(arg1, 1, eax_6[edi])
            edi += 1
            
            if (arg2[5] u< 0x10)
                eax_10 = *(arg2 + edi)
            else
                eax_10 = *(*arg2 + edi)
        
        sub_405500(arg1, 1, eax_10)
        edi += 1
    while (edi s< eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
