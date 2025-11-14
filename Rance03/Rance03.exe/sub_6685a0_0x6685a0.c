// 函数: sub_6685a0
// 地址: 0x6685a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfee0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x134) != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_4 = 0
    int32_t* i_5 = nullptr
    uint32_t i_6 = 0
    result = sub_44cf30(&i_5, &i_6)
    
    if (result.b != 0)
        int32_t* i_13 = i_5
        
        if (i_13 != 0)
            int32_t* i_3 = i_6
            
            if (i_3 s> 0)
                int32_t* i
                
                do
                    sub_4158d0(&result_1, i_13)
                    i_13 = &i_13[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                int32_t* i_7 = i_3
                int32_t* i_8 = i_3
                var_4.b = 1
                sub_667cb0(&i_7, &result_1)
                int32_t* i_12 = i_7
                int32_t xmm3_1 = (zx.o(0)).d
                i_5 = i_3
                int32_t xmm2_1 = (zx.o(0)).d
                int32_t i_9 = (i_3 - i_12) s/ 0x28
                
                if (i_9 s> 0)
                    void* esi = &i_12[4]
                    int32_t i_2 = i_9
                    int32_t i_1
                    
                    do
                        int32_t ebp = *(esi + 0xc)
                        
                        if (ebp != 0)
                            i_5 = i_3 + 1
                        
                        uint32_t i_11 = *(esi - 4)
                        int32_t edi_1 = *esi
                        
                        if (i_11 != 0)
                            i_6 = sub_5ed330(i_11)
                        else
                            i_6 = i_11
                        
                        uint32_t eax_9
                        
                        if (edi_1 != 0)
                            eax_9 = sub_5ed330(edi_1)
                        else
                            eax_9 = 0
                        
                        bool cond:1_1 = *(esi + 0x14) != 0
                        xmm3_1 = _mm_cvtepi32_ps(zx.o((edi_1 * i_11) << 2)) f+ xmm3_1
                        
                        if (not(cond:1_1) && ebp == 1)
                            xmm2_1 = _mm_cvtepi32_ps(zx.o((eax_9 * i_6) << 2)) f+ xmm2_1
                        
                        i_3 = i_5
                        esi += 0x28
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    i_12 = i_7
                
                int32_t* var_78_1
                var_78_1.q = fconvert.d(xmm2_1 f* 0.0009765625f)
                int64_t var_80_1 = (zx.o(0)).q
                double var_88_1 = fconvert.d(xmm2_1 f* 0.0009765625f)
                double var_90_1 = fconvert.d(xmm3_1 f* 0.0009765625f)
                int32_t i_10 = i_9
                int32_t* i_4 = i_3
                int32_t var_9c_1 = 0x701988
                int32_t var_2c
                char* eax_12 = sub_4691f0(&var_2c, 0x701988)
                
                if (arg2 != eax_12)
                    if (arg2[5] u>= 0x10)
                        j__free(*arg2)
                    
                    arg2[5] = 0xf
                    arg2[4] = 0
                    *arg2 = 0
                    
                    if (*(eax_12 + 0x14) u>= 0x10)
                        *arg2 = *eax_12
                        *eax_12 = 0
                    else
                        int32_t eax_13 = *(eax_12 + 0x10)
                        
                        if (eax_13 != 0xffffffff)
                            int32_t var_74_4 = eax_13 + 1
                            char* var_78_2 = eax_12
                            var_80_1:4.d = arg2
                            _memcpy()
                    
                    arg2[4] = *(eax_12 + 0x10)
                    arg2[5] = *(eax_12 + 0x14)
                    *(eax_12 + 0x14) = 0xf
                    *(eax_12 + 0x10) = 0
                    *eax_12 = 0
                
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                
                if (i_12 != 0)
                    j__free(i_12)
                
                result = result_1
                
                if (result != 0)
                    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
