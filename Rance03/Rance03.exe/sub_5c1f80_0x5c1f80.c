// 函数: sub_5c1f80
// 地址: 0x5c1f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_1 = arg2 - 1
int32_t* esi = arg1
int32_t* eax

if (arg2 - 1 s>= 0)
    while (true)
        esi[0x8d] -= 4
        int32_t edi_1 = *esi[0x8d]
        int32_t edx
        
        switch (*(*arg3 + (ebx_1 << 2)) - 0xa)
            case 0, 1, 0x11, 0x25
                arg10[ebx_1] = edi_1
            label_5c2151:
                int32_t temp2_1 = ebx_1
                ebx_1 -= 1
                
                if (temp2_1 - 1 s< 0)
                    break
                
                continue
            case 2, 0xa
                int32_t eax_25 = (esi[0x5e] - esi[0x5d]) s>> 2
                
                if (edi_1 u>= eax_25)
                label_5c21da:
                    sub_5c24e0(eax_25, edx, arg1, esi, 0x6e6884)
                    int32_t* eax_32
                    eax_32.b = 0
                    return eax_32
                
                eax_25 = esi[0x5d]
                arg1 = *(eax_25 + (edi_1 << 2))
                
                if (arg1 == 0)
                    goto label_5c21da
                
                int32_t eax_26
                eax_26, edx = sub_5d55f0(arg1)
                arg1 = arg10
                arg1[ebx_1] = eax_26
                
                if ((*arg3)[ebx_1] != 0xc)
                    goto label_5c2151
                
                arg1 = arg5
                edx = arg4
                goto label_5c214c
            case 3, 0xb
                int32_t eax_21 = (esi[0x5e] - esi[0x5d]) s>> 2
                
                if (edi_1 u>= eax_21)
                label_5c21c3:
                    sub_5c24e0(eax_21, edx, arg1, esi, 0x6e67d4)
                    int32_t* eax_31
                    eax_31.b = 0
                    return eax_31
                
                eax_21 = esi[0x5d]
                arg1 = *(eax_21 + (edi_1 << 2))
                
                if (arg1 == 0)
                    goto label_5c21c3
                
                int32_t eax_22
                eax_22, edx = sub_5d55b0(arg1)
                arg1 = arg10
                arg1[ebx_1] = eax_22
                
                if ((*arg3)[ebx_1] != 0xd)
                    goto label_5c2151
                
                arg1 = arg7
                edx = arg6
            label_5c214c:
                *(edx + (*arg1 << 2)) = edi_1
                *arg1 += 1
                goto label_5c2151
            case 4, 5, 6, 7, 0x14, 0x28
                int32_t eax_14 = (esi[0x5e] - esi[0x5d]) s>> 2
                
                if (edi_1 u>= eax_14)
                label_5c2195:
                    sub_5c24e0(eax_14, edx, arg1, esi, 0x6e6498)
                    int32_t* eax_29
                    eax_29.b = 0
                    return eax_29
                
                eax_14 = esi[0x5d]
                arg1 = *(eax_14 + (edi_1 << 2))
                
                if (arg1 == 0)
                    goto label_5c2195
                
                edx = arg8
                arg10[ebx_1] = sub_5d5630(arg1)
                arg1 = arg9
                goto label_5c214c
            case 8, 9, 0x15, 0x29
                esi[0x8d] -= 4
                int32_t* ecx = *esi[0x8d]
                int32_t eax_9 = (esi[0x5e] - esi[0x5d]) s>> 2
                
                if (ecx u>= eax_9)
                label_5c217e:
                    sub_5c24e0(eax_9, edx, ecx, esi, 0x6e63e4)
                    int32_t* eax_28
                    eax_28.b = 0
                    return eax_28
                
                eax_9 = esi[0x5d]
                ecx = *(eax_9 + (ecx << 2))
                
                if (ecx == 0)
                    goto label_5c217e
                
                eax = ecx[3] u>> 2
                
                if (edi_1 u>= eax)
                label_5c2167:
                    sub_5c24e0(eax, edx, ecx, esi, 0x6e6414)
                    int32_t* eax_27
                    eax_27.b = 0
                    return eax_27
                
                int32_t eax_11
                
                if (ecx[3] != 0)
                    eax_11 = ecx[2]
                else
                    eax_11 = 0
                
                eax = eax_11 + (edi_1 << 2)
                
                if (eax == 0)
                    goto label_5c2167
                
                arg1 = arg10
                arg1[ebx_1] = eax
                goto label_5c2151
            case 0xc, 0xd, 0xe, 0xf, 0x16, 0x2a
                int32_t eax_18 = (esi[0x5e] - esi[0x5d]) s>> 2
                
                if (edi_1 u>= eax_18)
                label_5c21ac:
                    sub_5c24e0(eax_18, edx, arg1, esi, 0x6e6810)
                    int32_t* eax_30
                    eax_30.b = 0
                    return eax_30
                
                eax_18 = esi[0x5d]
                arg1 = *(eax_18 + (edi_1 << 2))
                
                if (arg1 == 0)
                    goto label_5c21ac
                
                eax, edx = sub_5d5630(arg1)
                arg1 = arg10
                arg1[ebx_1] = eax
                goto label_5c2151
        
        int32_t eax_33 = *arg3
        int32_t var_14 = *(eax_33 + (ebx_1 << 2))
        sub_5c24e0(eax_33, edx, arg1, esi, 0x6e6848)
        int32_t* eax_34
        eax_34.b = 0
        return eax_34

eax.b = 1
return eax
