// 函数: sub_402d30
// 地址: 0x402d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2aa9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_10 = arg1
int32_t var_14 = 0
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_4 = 0
int32_t edi = 0
int32_t ebp = arg2[4]
int32_t var_14_1 = 1

if (ebp s> 0)
    do
        int32_t eax_3 = arg2[5]
        char* ecx
        
        if (eax_3 u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        char* ecx_1
        
        if (ecx[edi] u>= 0x81)
            if (eax_3 u< 0x10)
                ecx_1 = arg2
            else
                ecx_1 = *arg2
        
        char* ecx_2
        char* ecx_3
        
        if (ecx[edi] u< 0x81 || ecx_1[edi] u> 0x9f)
            if (eax_3 u< 0x10)
                ecx_2 = arg2
            else
                ecx_2 = *arg2
            
            if (ecx_2[edi] u>= 0xe0)
                if (eax_3 u< 0x10)
                    ecx_3 = arg2
                else
                    ecx_3 = *arg2
        
        if ((ecx[edi] u< 0x81 || ecx_1[edi] u> 0x9f) && (ecx_2[edi] u< 0xe0 || ecx_3[edi] u> 0xef))
            int32_t* ecx_6
            
            if (eax_3 u< 0x10)
                ecx_6 = arg2
            else
                ecx_6 = *arg2
            
            int32_t* ecx_7
            
            if (*(ecx_6 + edi) s>= 0x41)
                if (eax_3 u< 0x10)
                    ecx_7 = arg2
                else
                    ecx_7 = *arg2
            
            char eax_9
            
            if (*(ecx_6 + edi) s< 0x41 || *(ecx_7 + edi) s> 0x5a)
                int32_t* eax_11
                
                if (eax_3 u< 0x10)
                    eax_11 = arg2
                else
                    eax_11 = *arg2
                
                eax_9 = *(eax_11 + edi)
            else if (eax_3 u< 0x10)
                int32_t* eax_10
                eax_10.b = *(arg2 + edi)
                eax_10.b += 0x20
                eax_9 = eax_10.b
            else
                char* eax_8
                eax_8.b = (*arg2)[edi]
                eax_8.b += 0x20
                eax_9 = eax_8.b
            
            sub_4031c0(arg1, 1, eax_9)
            edi += 1
        else
            char* eax_4
            
            if (eax_3 u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
            
            sub_4031c0(arg1, 1, eax_4[edi])
            int32_t* eax_6
            
            if (arg2[5] u< 0x10)
                eax_6 = arg2
            else
                eax_6 = *arg2
            
            sub_4031c0(arg1, 1, *(eax_6 + edi + 1))
            edi += 2
    while (edi s< ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
