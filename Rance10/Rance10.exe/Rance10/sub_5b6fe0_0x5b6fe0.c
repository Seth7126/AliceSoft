// 函数: sub_5b6fe0
// 地址: 0x5b6fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t* esi = arg5

if (arg2 != arg4 && esi != arg6)
    bool cond:1_1
    
    do
        void* ecx = arg8
        int64_t* edi_1 = *(ecx + 4)
        
        if (*(esi + 4) f<= *(arg2 + 4))
            if (edi_1 u>= *(ecx + 8))
                if (edi_1 != 0)
                    *edi_1 = *arg2
                    edi_1[1].d = arg2[1].d
                    ecx = arg8
                
                *(ecx + 4) += 0xc
                *(arg8 + 8) = *(ecx + 4)
            else
                *edi_1 = *arg2
                edi_1[1].d = arg2[1].d
                *(arg8 + 4) += 0xc
            
            arg2 += 0xc
            cond:1_1 = arg2 != arg4
        else if (edi_1 u>= *(ecx + 8))
            if (edi_1 != 0)
                *edi_1 = *esi
                edi_1[1].d = esi[1].d
                ecx = arg8
            
            *(ecx + 4) += 0xc
            esi += 0xc
            cond:1_1 = esi != arg6
            *(arg8 + 8) = *(ecx + 4)
        else
            *edi_1 = *esi
            int32_t eax = esi[1].d
            esi += 0xc
            edi_1[1].d = eax
            *(arg8 + 4) += 0xc
            cond:1_1 = esi != arg6
    while (cond:1_1)

int32_t var_34 = 0
int32_t var_30 = 0
void* var_2c = arg8
int32_t var_14
void* eax_10 = sub_5b6c50(arg8, arg2, &var_14, arg4, 0, 0)[4]
int32_t eax_11 = var_14

if (eax_11 != 0)
    _free(eax_11)

int32_t var_34_1 = 0
int32_t var_30_1 = 0
void* var_2c_2 = eax_10
int32_t* eax_13 = sub_5b6c50(eax_10, esi, &var_14, arg6, 0, 0)
int32_t ecx_5 = var_14
void* eax_14 = eax_13[4]

if (ecx_5 != 0)
    _free(ecx_5)

arg3[4] = eax_14
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg7 != 0)
    _free(arg7)

return arg3
