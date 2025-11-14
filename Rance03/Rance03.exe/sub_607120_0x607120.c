// 函数: sub_607120
// 地址: 0x607120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
char* result = arg2
int32_t* edi = arg1
char* result_1 = result
int32_t* var_28 = edi

if (edi != result)
    char* ebp_1 = &edi[6]
    var_2c = ebp_1
    
    if (ebp_1 != result)
        do
            bool cond:0_1 = *(ebp_1 + 0x14) u>= 0x10
            int32_t* ebx_1 = ebp_1
            int32_t var_c_1 = 0xf
            int32_t var_10_1 = 0
            char var_20 = 0
            
            if (cond:0_1)
                var_20.d = *ebp_1
                *ebp_1 = 0
            else
                void* eax_2 = *(ebp_1 + 0x10)
                
                if (eax_2 != 0xffffffff)
                    _memcpy(&var_20, ebp_1, eax_2 + 1)
            
            char* result_2 = *(ebp_1 + 0x10)
            int32_t eax_5 = *(ebp_1 + 0x14)
            *(ebp_1 + 0x14) = 0xf
            *(ebp_1 + 0x10) = 0
            *ebp_1 = 0
            char* result_7 = edi[4]
            int32_t* edx
            
            if (edi[5] u< 0x10)
                edx = edi
            else
                edx = *edi
            
            int32_t* ecx = &var_20
            char* result_4 = result_7
            
            if (eax_5 u>= 0x10)
                ecx = var_20.d
            
            if (result_2 u< result_7)
                result_4 = result_2
            
            int32_t eax_6 = sub_405190(result_4, edx, ecx, result_4)
            bool cond:2_1 = eax_6 s< 0
            
            if (eax_6 != 0)
                goto label_607206
            
            if (result_2 u< result_7)
            label_60738b:
                char* result_3 = result_1
                sub_607c10(&ebp_1[0x18], ebp_1, var_28, &ebp_1[0x18])
                result = &var_20
                
                if (var_28 != &var_20)
                    if (var_28[5] u>= 0x10)
                        j__free(*var_28)
                    
                    var_28[5] = 0xf
                    var_28[4] = 0
                    *var_28 = 0
                    result = sub_4030b0(var_28, &var_20)
                
                goto label_6073de
            
            eax_6.b = result_2 != result_7
            cond:2_1 = eax_6 s< 0
        label_607206:
            
            if (cond:2_1)
                goto label_60738b
            
            char* esi_1 = ebp_1
            
            while (true)
                char* result_8 = *(esi_1 - 8)
                esi_1 -= 0x18
                int32_t* ecx_1
                
                if (*(esi_1 + 0x14) u< 0x10)
                    ecx_1 = esi_1
                else
                    ecx_1 = *esi_1
                
                char* edi_3 = &var_20
                char* result_5 = result_2
                char* result_6 = result_8
                
                if (eax_5 u>= 0x10)
                    edi_3 = var_20.d
                
                if (result_5 u< result_8)
                    result_6 = result_5
                
                if (result_6 == 0)
                    goto label_607298
                
                void* i_1 = result_6 - 4
                
                if (result_6 u>= 4)
                    void* i
                    
                    do
                        if (*edi_3 != *ecx_1)
                            goto label_60725a
                        
                        edi_3 = &edi_3[4]
                        ecx_1 = &ecx_1[1]
                        i = i_1
                        i_1 -= 4
                    while (i u>= 4)
                
                int32_t eax_8
                
                if (i_1 == 0xfffffffc)
                    eax_8 = 0
                else
                label_60725a:
                    result_5.b = *edi_3
                    char temp3_1 = *ecx_1
                    
                    if (result_5.b != temp3_1)
                        eax_8 = sbb.d(result_5, result_5, result_5.b u< temp3_1) | 1
                    else if (i_1 == 0xfffffffd)
                        eax_8 = 0
                    else
                        result_5.b = edi_3[1]
                        char temp7_1 = *(ecx_1 + 1)
                        
                        if (result_5.b != temp7_1)
                            eax_8 = sbb.d(result_5, result_5, result_5.b u< temp7_1) | 1
                        else if (i_1 == 0xfffffffe)
                            eax_8 = 0
                        else
                            result_5.b = edi_3[2]
                            char temp9_1 = *(ecx_1 + 2)
                            
                            if (result_5.b != temp9_1)
                                eax_8 = sbb.d(result_5, result_5, result_5.b u< temp9_1) | 1
                            else if (i_1 == 0xffffffff)
                                eax_8 = 0
                            else
                                result_5.b = edi_3[3]
                                char temp10_1 = *(ecx_1 + 3)
                                
                                if (result_5.b == temp10_1)
                                    eax_8 = 0
                                else
                                    eax_8 = sbb.d(result_5, result_5, result_5.b u< temp10_1) | 1
                
                bool cond:5_1 = eax_8 s>= 0
                
                if (eax_8 != 0)
                    goto label_6072a7
                
                result_5 = result_2
            label_607298:
                
                if (result_5 u>= result_8)
                    int32_t eax_9
                    eax_9.b = result_2 != result_8
                    cond:5_1 = eax_9 s>= 0
                label_6072a7:
                    
                    if (cond:5_1)
                        break
                
                if (ebx_1 != esi_1)
                    if (ebx_1[5] u>= 0x10)
                        j__free(*ebx_1)
                    
                    ebx_1[5] = 0xf
                    ebx_1[4] = 0
                    *ebx_1 = 0
                    
                    if (*(esi_1 + 0x14) u>= 0x10)
                        *ebx_1 = *esi_1
                        *esi_1 = 0
                    else
                        void* eax_10 = *(esi_1 + 0x10)
                        
                        if (eax_10 != 0xffffffff)
                            _memcpy(ebx_1, esi_1, eax_10 + 1)
                    
                    ebx_1[4] = *(esi_1 + 0x10)
                    ebx_1[5] = *(esi_1 + 0x14)
                    *(esi_1 + 0x14) = 0xf
                    *(esi_1 + 0x10) = 0
                    *esi_1 = 0
                
                ebx_1 = esi_1
            
            result = &var_20
            
            if (ebx_1 == &var_20)
                ebp_1 = var_2c
            label_6073de:
                
                if (eax_5 u>= 0x10)
                    result = j__free(var_20.d)
            else
                if (ebx_1[5] u>= 0x10)
                    j__free(*ebx_1)
                
                ebx_1[5] = 0xf
                ebx_1[4] = 0
                *ebx_1 = 0
                
                if (eax_5 u>= 0x10)
                    *ebx_1 = var_20.d
                label_60737b:
                    result = result_2
                    ebp_1 = var_2c
                    ebx_1[4] = result
                    ebx_1[5] = eax_5
                else
                    if (result_2 == 0xffffffff)
                        goto label_60737b
                    
                    _memcpy(ebx_1, &var_20, &result_2[1])
                    result = result_2
                    ebp_1 = var_2c
                    ebx_1[4] = result
                    ebx_1[5] = eax_5
            
            edi = var_28
            ebp_1 = &ebp_1[0x18]
            var_2c = ebp_1
        while (ebp_1 != result_1)

sub_69a5bc(eax_1 ^ &var_2c)
return result
