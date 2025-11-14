// 函数: sub_468810
// 地址: 0x468810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i

for (i = arg3; i != arg2; i = &i[1])
    int32_t var_2c
    char* eax_6
    int32_t ecx_1
    eax_6, ecx_1 = sub_468250(*i, &var_2c)
    void** edx = arg4
    int32_t ebp_1 = edx[4]
    
    if (edx[5] u>= 0x10)
        edx = *edx
    
    int32_t ebx_1 = *(eax_6 + 0x10)
    
    if (*(eax_6 + 0x14) u>= 0x10)
        eax_6 = *eax_6
    
    int32_t esi_1 = ebp_1
    
    if (ebx_1 u< ebp_1)
        esi_1 = ebx_1
    
    bool cond:3_1
    
    if (esi_1 == 0)
    label_4688da:
        int32_t eax_9
        
        if (ebx_1 u>= ebp_1)
            eax_9.b = ebx_1 != ebp_1
        else
            eax_9 = 0xffffffff
        
        cond:3_1 = eax_9 == 0
    else
        int32_t j_1 = esi_1 - 4
        
        if (esi_1 u>= 4)
            int32_t j
            
            do
                if (*eax_6 != *edx)
                    goto label_46889e
                
                eax_6 = &eax_6[4]
                edx = &edx[1]
                j = j_1
                j_1 -= 4
            while (j u>= 4)
        
        int32_t eax_8
        
        if (j_1 == 0xfffffffc)
            eax_8 = 0
        else
        label_46889e:
            ecx_1.b = *eax_6
            char temp1_1 = *edx
            
            if (ecx_1.b != temp1_1)
                eax_8 = sbb.d(eax_6, eax_6, ecx_1.b u< temp1_1) | 1
            else if (j_1 == 0xfffffffd)
                eax_8 = 0
            else
                ecx_1.b = eax_6[1]
                char temp4_1 = *(edx + 1)
                
                if (ecx_1.b != temp4_1)
                    eax_8 = sbb.d(eax_6, eax_6, ecx_1.b u< temp4_1) | 1
                else if (j_1 == 0xfffffffe)
                    eax_8 = 0
                else
                    ecx_1.b = eax_6[2]
                    char temp5_1 = *(edx + 2)
                    
                    if (ecx_1.b != temp5_1)
                        eax_8 = sbb.d(eax_6, eax_6, ecx_1.b u< temp5_1) | 1
                    else if (j_1 == 0xffffffff)
                        eax_8 = 0
                    else
                        eax_6.b = eax_6[3]
                        char temp6_1 = *(edx + 3)
                        
                        if (eax_6.b == temp6_1)
                            eax_8 = 0
                        else
                            eax_8 = sbb.d(eax_6, eax_6, eax_6.b u< temp6_1) | 1
        
        cond:3_1 = eax_8 == 0
        
        if (eax_8 == 0)
            goto label_4688da
    
    ebx_1.b = cond:3_1
    int32_t var_4 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    if (ebx_1.b != 0)
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return i
