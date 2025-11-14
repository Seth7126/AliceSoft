// 函数: sub_5cee90
// 地址: 0x5cee90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_81c
int32_t eax_1 = __security_cookie ^ &var_81c
int32_t* eax_2 = arg1[0x82]
int32_t ebx = *eax_2
arg1[0x82] = &eax_2[1]
int32_t ecx = eax_2[1]
void* eax_4 = &eax_2[2]
int32_t var_814 = ecx
arg1[0x82] = eax_4
struct sys43vm::CPage::VTable** result
int32_t edx

if (ebx s< 0)
label_5cf14c:
    int32_t var_830_23 = ebx
    char const* const var_834_12 = "delegate"
    result = sub_5c2400(eax_4, edx, ecx, arg1, "DG_CALL")
else
    ecx = arg1[0x2e] - arg1[0x2d]
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x38e38e39, ecx)
    edx = edx_1 s>> 4
    eax_4 = ecx s/ 0x48
    
    if (ebx s>= eax_4)
        goto label_5cf14c
    
    eax_4 = arg1[0x2d]
    ecx = ebx * 9
    void* edi_1 = eax_4 + (ecx << 3)
    
    if (edi_1 == 0)
        goto label_5cf14c
    
    void* eax_8
    int32_t ecx_3
    eax_8, ecx_3 = sub_5cfbd0(arg1, *(edi_1 + 0x20), &var_81c)
    
    if (eax_8.b != 0)
        arg1[0x8d] -= 4
        int32_t eax_10 = *arg1[0x8d]
        arg1[0x8d] -= 4
        ecx = *arg1[0x8d]
        eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        
        if (ecx u>= eax_4)
        label_5cf13f:
            int32_t var_830_22 = ecx
            int32_t var_834_11 = 0x6ea254
            result = sub_5c2400(eax_4, edx, ecx, arg1, "DG_CALL")
        else
            eax_4 = arg1[0x5d]
            void* ebp_1 = *(eax_4 + (ecx << 2))
            
            if (ebp_1 == 0)
                goto label_5cf13f
            
            int32_t eax_14
            int32_t edx_2
            edx_2:eax_14 = muls.dp.d(0x55555556, *(ebp_1 + 0xc) u>> 2)
            void var_80c
            
            if (eax_10 s< (edx_2 u>> 0x1f) + edx_2)
                uint32_t eax_21
                int32_t ecx_11
                int32_t edx_5
                eax_21, ecx_11, edx_5 = sub_5cfc50(arg1, *(edi_1 + 0x20), var_81c)
                
                if (eax_21.b != 0)
                    sub_5de000(&arg1[0x88], &var_80c, *(edi_1 + 0x28))
                    uint32_t var_40c[0x101]
                    uint32_t eax_22
                    int32_t ecx_14
                    int32_t edx_6
                    eax_22, ecx_14, edx_6 = sub_5cfcd0(arg1, &var_40c, &var_80c, edi_1)
                    
                    if (eax_22.b != 0)
                        sub_5ddfa0(&arg1[0x88], &var_40c, *(edi_1 + 0x28))
                        sub_5ddf10(&arg1[0x88], ecx)
                        sub_5ddf10(&arg1[0x88], eax_10 + 1)
                        int32_t ebx_2
                        
                        if (*(ebp_1 + 0xc) != 0)
                            ebx_2 = *(ebp_1 + 8)
                        else
                            ebx_2 = 0
                        
                        int32_t eax_24 = eax_10 * 3
                        int32_t ebp_2 = *(ebx_2 + (eax_24 << 2))
                        int32_t ebx_3 = *(ebx_2 + (eax_24 << 2) + 4)
                        eax_4, ecx, edx = sub_5bd900(&arg1[0x12], ebx_3)
                        
                        if (eax_4 != 0)
                            if (arg1[0x4ae].b != 0)
                                sub_5b4000(&arg1[0x49e], ebx_3)
                            
                            if (ebp_2 == 0xffffffff)
                                int32_t ecx_22
                                int32_t edx_8
                                result, ecx_22, edx_8 =
                                    sub_5caba0(arg1, eax_4, &var_80c, *(eax_4 + 0x28))
                                
                                if (result.b == 0)
                                    int32_t var_830_21 = 0x6ea0bc
                                    result = sub_5c2400(result, edx_8, ecx_22, arg1, "DG_CALL")
                            else
                                int32_t ecx_21
                                int32_t edx_7
                                result, ecx_21, edx_7 = sub_5caf40(arg1, eax_4, ebp_2, &var_80c)
                                
                                if (result.b == 0)
                                    int32_t var_830_19 = 0x6ea090
                                    result = sub_5c2400(result, edx_7, ecx_21, arg1, "DG_CALL")
                        else
                            int32_t var_830_16 = ebx_3
                            int32_t var_834_8 = 0x6ea05c
                            result = sub_5c2400(eax_4, edx, ecx, arg1, "DG_CALL")
                    else
                        int32_t var_830_11 = 0x6ea038
                        result = sub_5c2400(eax_22, edx_6, ecx_14, arg1, "DG_CALL")
                else
                    int32_t var_830_8 = 0x6ea014
                    result = sub_5c2400(eax_21, edx_5, ecx_11, arg1, "DG_CALL")
            else
                sub_5de000(&arg1[0x88], &var_80c, *(edi_1 + 0x28))
                uint32_t eax_18
                int32_t edx_3
                eax_18, edx_3 = sub_5cfdd0(arg1, &var_80c, edi_1)
                
                if (eax_18.b != 0)
                    uint32_t eax_19
                    int32_t ecx_9
                    int32_t edx_4
                    eax_19, ecx_9, edx_4 = sub_5cfb60(arg1, *(edi_1 + 0x20), var_81c)
                    
                    if (eax_19.b != 0)
                        result = arg1[0x83] + var_814
                        arg1[0x82] = result
                    else
                        int32_t var_830_6 = 0x6ea2a4
                        result = sub_5c2400(eax_19, edx_4, ecx_9, arg1, "DG_CALL")
                else
                    int32_t var_830_4 = 0x6ea280
                    result = sub_5c2400(eax_18, edx_3, arg1, arg1, "DG_CALL")
    else
        int32_t var_830_1 = 0x6ea22c
        result = sub_5c2400(eax_8, edx, ecx_3, arg1, "DG_CALL")
sub_69a5bc(eax_1 ^ &var_81c)
return result
