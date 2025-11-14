// 函数: sub_55a7d0
// 地址: 0x55a7d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg6
int32_t* esi = arg5
int32_t* edi = arg2

if (edi != arg4 && esi != ebx)
    while (true)
        void* ebx_1 = *edi
        void* ebp_1 = *esi
        void* ecx_1 = arg8
        bool cond:0_1 = sub_5594e0(ebp_1, ebx_1) == 0
        int32_t* eax_1 = *(ecx_1 + 4)
        
        if (cond:0_1)
            if (eax_1 u>= *(ecx_1 + 8))
                if (eax_1 != 0)
                    *eax_1 = ebx_1
                    ecx_1 = arg8
                
                *(ecx_1 + 4) += 4
                *(arg8 + 8) = *(ecx_1 + 4)
            else
                *eax_1 = ebx_1
                *(arg8 + 4) += 4
            
            edi = &edi[1]
            
            if (edi == arg4)
                ebx = arg6
                break
        else
            if (eax_1 u>= *(ecx_1 + 8))
                if (eax_1 != 0)
                    *eax_1 = ebp_1
                    ecx_1 = arg8
                
                *(ecx_1 + 4) += 4
                *(arg8 + 8) = *(ecx_1 + 4)
            else
                *eax_1 = ebp_1
                *(arg8 + 4) += 4
            
            ebx = arg6
            esi = &esi[1]
            
            if (esi == ebx)
                break

int32_t var_34 = 0
int32_t var_30 = 0
void* var_2c_2 = arg8
int32_t var_14
void* eax_8 = sub_534c90(arg8, edi, &var_14, arg4, 0, 0)[4]
int32_t eax_9 = var_14

if (eax_9 != 0)
    j__free(eax_9)

int32_t var_34_1 = 0
int32_t var_30_1 = 0
void* var_2c_4 = eax_8
sub_534c90(eax_8, esi, arg3, ebx, 0, 0)

if (arg7 != 0)
    j__free(arg7)

return arg3
