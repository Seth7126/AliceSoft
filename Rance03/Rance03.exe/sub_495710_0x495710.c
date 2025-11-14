// 函数: sub_495710
// 地址: 0x495710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb79b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x3c] != 0)
    result = arg1[8]
    
    if (result != 0)
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(result[2]))
        int32_t eax_5 = *arg1
        int32_t ebx_1 = int.d(_mm_cvtepi32_ps(zx.o(arg1[0x58])) / (1000f / xmm0_2))
        void* eax_6 = (*(eax_5 + 8))(ebx_1)
        sub_48d6a0(&var_94, &arg1[0xa])
        int32_t var_4 = 0
        sub_48d740(&var_94, eax_6)
        int32_t ecx_3
        ecx_3.b = *(arg1 + 0x16a)
        
        if (ecx_3.b == 0)
        label_49580e:
            
            if (arg1[0x5a].b != 0)
                arg1[0x5a].b = 0
                arg1[0x3c]
                result = sub_4906b0(zx.d(arg1[0x41].b), arg1[0x57], 1, arg1, &var_94)
            else if (*(arg1 + 0x169) != 0)
                arg1[0x3c]
                result = sub_4907d0(zx.d(arg1[0x41].b), arg1[0x57], arg1, &var_94)
            else
                int32_t eax_12 = arg1[0x59]
                
                if (eax_12 != ebx_1)
                    if (eax_12 s< ebx_1 - 1)
                        int32_t i_2 = ebx_1 - 1 - eax_12
                        int32_t i
                        
                        do
                            arg1[0x3c]
                            sub_4906b0(zx.d(arg1[0x41].b), arg1[0x57], 1, arg1, nullptr)
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    arg1[0x3c]
                    result = sub_4906b0(zx.d(arg1[0x41].b), arg1[0x57], 1, arg1, &var_94)
                else
                    arg1[0x3c]
                    result = sub_4907d0(zx.d(arg1[0x41].b), arg1[0x57], arg1, &var_94)
        else
            int32_t eax_7 = arg1[0x5b]
            
            if (eax_7 s< 1)
                if (ecx_3.b == 0 || arg1[0x5b] != 0)
                    goto label_49580e
                
                arg1[0x3c]
                result = sub_4907d0(zx.d(arg1[0x41].b), arg1[0x57], arg1, &var_94)
            else
                int32_t i_1 = 0
                
                if (eax_7 - 1 s> 0)
                    do
                        int32_t* var_a8_4 = arg1
                        arg1[0x3c]
                        ecx_3 = sub_490740(zx.d(arg1[0x41].b), arg1[0x57], ecx_3)
                        i_1 += 1
                    while (i_1 s< arg1[0x5b] - 1)
                
                arg1[0x3c]
                result = sub_4906b0(zx.d(arg1[0x41].b), arg1[0x57], 1, arg1, &var_94)
        
        *(arg1 + 0x16a) = 0
        arg1[0x5b] = 0
        arg1[0x59] = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
