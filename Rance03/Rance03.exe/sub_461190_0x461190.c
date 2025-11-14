// 函数: sub_461190
// 地址: 0x461190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8af9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t var_4 = 0
int32_t var_14 = 0
int32_t ebp = edi[4]
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_402110(arg1, 0x6da1b6, nullptr)
int32_t ebx = 0
int32_t var_4_1 = 0
int32_t var_14_1 = 1

if (ebp s> 0)
    do
        int32_t ecx_1 = edi[5]
        char* eax_3
        
        if (ecx_1 u< 0x10)
            eax_3 = edi
        else
            eax_3 = *edi
        
        if (eax_3[ebx] != 0x22)
            char* eax_4
            
            if (ecx_1 u< 0x10)
                eax_4 = edi
            else
                eax_4 = *edi
            
            eax_4.b = eax_4[ebx]
            int32_t edx_1 = *(arg1 + 0x14)
            arg2.b = eax_4.b
            char* ecx_2
            
            if (edx_1 u< 0x10)
                ecx_2 = arg1
            else
                ecx_2 = *arg1
            
            void* eax_6 = *(arg1 + 0x10) + ecx_2
            char* ecx_3
            
            if (edx_1 u< 0x10)
                ecx_3 = arg1
            else
                ecx_3 = *arg1
            
            if (eax_6 != 0)
                eax_6 -= ecx_3
            
            int32_t* var_2c_1 = arg2
            sub_448f30(arg1, eax_6, ecx_3.b)
            int32_t ecx_5 = edi[5]
            char* eax_7
            
            if (ecx_5 u< 0x10)
                eax_7 = edi
            else
                eax_7 = *edi
            
            if (eax_7[ebx] == 0x5c)
                ebx += 1
                
                if (ebx s< ebp)
                    int32_t* eax_8
                    
                    if (ecx_5 u< 0x10)
                        eax_8 = edi
                    else
                        eax_8 = *edi
                    
                    eax_8.b = *(eax_8 + ebx)
                    int32_t edx_2 = *(arg1 + 0x14)
                    char* ecx_6
                    
                    if (edx_2 u< 0x10)
                        ecx_6 = arg1
                    else
                        ecx_6 = *arg1
                    
                    void* eax_10 = *(arg1 + 0x10) + ecx_6
                    char* ecx_7
                    
                    if (edx_2 u< 0x10)
                        ecx_7 = arg1
                    else
                        ecx_7 = *arg1
                    
                    if (eax_10 != 0)
                        eax_10 -= ecx_7
                    
                    int32_t var_2c_2 = eax_8.b.d
                    sub_448f30(arg1, eax_10, ecx_7.b)
        
        ebx += 1
    while (ebx s< ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
