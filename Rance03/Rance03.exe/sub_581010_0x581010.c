// 函数: sub_581010
// 地址: 0x581010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg5

if (ebx != arg4 && edi != arg6)
    bool cond:2_1
    
    do
        void* edx = *ebx
        void* esi_1 = *edi
        int32_t ecx = *(edx + 0x1c)
        int32_t eax = *(esi_1 + 0x1c)
        
        if (eax s< ecx)
        label_5810b0:
            void* ecx_4 = arg8
            void** eax_5 = *(ecx_4 + 4)
            
            if (eax_5 u>= *(ecx_4 + 8))
                if (eax_5 != 0)
                    *eax_5 = esi_1
                    ecx_4 = arg8
                
                *(ecx_4 + 4) += 4
                *(arg8 + 8) = *(ecx_4 + 4)
            else
                *eax_5 = esi_1
                *(arg8 + 4) += 4
            
            edi = &edi[1]
            cond:2_1 = edi != arg6
        else
            if (eax s<= ecx)
                int32_t eax_1 = *(esi_1 + 0x20)
                int32_t ecx_1 = *(edx + 0x20)
                
                if (eax_1 s< ecx_1)
                    goto label_5810b0
                
                if (eax_1 s<= ecx_1)
                    eax_1.b = *(esi_1 + 0x73)
                    ecx_1.b = *(edx + 0x73)
                    
                    if (eax_1.b u< ecx_1.b)
                        goto label_5810b0
                    
                    if (eax_1.b u<= ecx_1.b)
                        ecx_1.b = *(esi_1 + 0x26)
                        
                        if (ecx_1.b u< *(edx + 0x26))
                            goto label_5810b0
            
            void* ecx_2 = arg8
            void** eax_2 = *(ecx_2 + 4)
            
            if (eax_2 u>= *(ecx_2 + 8))
                if (eax_2 != 0)
                    *eax_2 = edx
                    ecx_2 = arg8
                
                *(ecx_2 + 4) += 4
                ebx = &ebx[1]
                cond:2_1 = ebx != arg4
                *(arg8 + 8) = *(ecx_2 + 4)
            else
                *eax_2 = edx
                ebx = &ebx[1]
                *(arg8 + 4) += 4
                cond:2_1 = ebx != arg4
    while (cond:2_1)

int32_t var_34 = 0
int32_t var_30 = 0
void* var_2c = arg8
int32_t var_14
void* eax_10 = sub_534c90(arg8, ebx, &var_14, arg4, 0, 0)[4]
int32_t eax_11 = var_14

if (eax_11 != 0)
    j__free(eax_11)

int32_t var_34_1 = 0
int32_t var_30_1 = 0
void* var_2c_2 = eax_10
sub_534c90(eax_10, edi, arg3, arg6, 0, 0)

if (arg7 != 0)
    j__free(arg7)

return arg3
