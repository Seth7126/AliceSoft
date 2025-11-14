// 函数: sub_4692e0
// 地址: 0x4692e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b92b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_14 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
int32_t var_4 = 0
int32_t var_14_1 = 1
int32_t* var_18
int32_t* edx

if (arg4[5] u< 0x10)
    edx = arg4
    var_18 = arg4
else
    edx = *arg4
    var_18 = edx

int32_t* eax_4 = arg4[4]
void* i = nullptr
int32_t ecx = arg2[4]

if (ecx - eax_4 s>= 0)
    do
        int32_t ebp_1 = arg2[5]
        int32_t* eax_5
        
        if (ebp_1 u< 0x10)
            eax_5 = arg2
        else
            eax_5 = *arg2
        
        int32_t** ecx_2 = eax_5 + i
        void* j_1 = eax_4 - 4
        
        if (eax_4 u>= 4)
            void* j
            
            do
                if (*ecx_2 != *edx)
                    goto label_4693a6
                
                ecx_2 = &ecx_2[1]
                edx = &edx[1]
                j = j_1
                j_1 -= 4
            while (j u>= 4)
        
        int32_t eax_7
        
        if (j_1 == 0xfffffffc)
            eax_7 = 0
        else
        label_4693a6:
            eax_5.b = *ecx_2
            char temp2_1 = *edx
            
            if (eax_5.b != temp2_1)
                eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp2_1) | 1
            else if (j_1 == 0xfffffffd)
                eax_7 = 0
            else
                eax_5.b = *(ecx_2 + 1)
                char temp4_1 = *(edx + 1)
                
                if (eax_5.b != temp4_1)
                    eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp4_1) | 1
                else if (j_1 == 0xfffffffe)
                    eax_7 = 0
                else
                    eax_5.b = *(ecx_2 + 2)
                    char temp5_1 = *(edx + 2)
                    
                    if (eax_5.b != temp5_1)
                        eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp5_1) | 1
                    else if (j_1 == 0xffffffff)
                        eax_7 = 0
                    else
                        eax_5.b = *(ecx_2 + 3)
                        char temp6_1 = *(edx + 3)
                        
                        if (eax_5.b == temp6_1)
                            eax_7 = 0
                        else
                            eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp6_1) | 1
        
        if (eax_7 == 0)
            result = result_1
            sub_403110(result, arg5, nullptr, 0xffffffff)
            i += eax_4 - 1
        else
            int32_t* eax_8
            
            if (ebp_1 u< 0x10)
                eax_8 = arg2
            else
                eax_8 = *arg2
            
            result = result_1
            sub_4031c0(result, 1, *(eax_8 + i))
            int32_t eax_10 = arg2[5]
            int32_t* ecx_4
            
            if (eax_10 u< 0x10)
                ecx_4 = arg2
            else
                ecx_4 = *arg2
            
            int32_t* ecx_5
            
            if (*(ecx_4 + i) u>= 0x81)
                if (eax_10 u< 0x10)
                    ecx_5 = arg2
                else
                    ecx_5 = *arg2
            
            if (*(ecx_4 + i) u>= 0x81 && *(ecx_5 + i) u<= 0x9f)
            label_469448:
                i += 1
                
                if (eax_10 u< 0x10)
                    sub_4031c0(result, 1, *(arg2 + i))
                else
                    sub_4031c0(result, 1, *(*arg2 + i))
            else
                int32_t* ecx_6
                
                if (eax_10 u< 0x10)
                    ecx_6 = arg2
                else
                    ecx_6 = *arg2
                
                if (*(ecx_6 + i) u>= 0xe0)
                    int32_t* ecx_7
                    
                    if (eax_10 u< 0x10)
                        ecx_7 = arg2
                    else
                        ecx_7 = *arg2
                    
                    if (*(ecx_7 + i) u<= 0xef)
                        goto label_469448
        
        edx = var_18
        i += 1
    while (i s<= ecx - eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
