// 函数: sub_599690
// 地址: 0x599690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg5
int32_t* edi = arg2

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        char eax = sub_597ff0(*esi, *edi)
        void* ecx_1 = arg8
        int32_t* edx = *(ecx_1 + 4)
        
        if (eax == 0)
            if (edx u>= *(ecx_1 + 8))
                if (edx != 0)
                    *edx = *edi
                    ecx_1 = arg8
                
                *(ecx_1 + 4) += 4
                *(arg8 + 8) = *(ecx_1 + 4)
            else
                *edx = *edi
                *(arg8 + 4) += 4
            
            edi = &edi[1]
            cond:0_1 = edi != arg4
        else if (edx u>= *(ecx_1 + 8))
            if (edx != 0)
                *edx = *esi
                ecx_1 = arg8
            
            *(ecx_1 + 4) += 4
            esi = &esi[1]
            cond:0_1 = esi != arg6
            *(arg8 + 8) = *(ecx_1 + 4)
        else
            int32_t eax_1 = *esi
            esi = &esi[1]
            *edx = eax_1
            *(arg8 + 4) += 4
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_38 = 0
int32_t var_34 = 0
void* var_30_2 = arg8
int32_t var_14
void* eax_11 = sub_5772b0(arg8, edi, &var_14, arg4, 0, 0)[4]
int32_t eax_12 = var_14

if (eax_12 != 0)
    _free(eax_12)

int32_t var_38_1 = 0
int32_t var_34_1 = 0
void* var_30_4 = eax_11
int32_t* eax_14 = sub_5772b0(eax_11, esi, &var_14, arg6, 0, 0)
int32_t ecx_6 = var_14
void* eax_15 = eax_14[4]

if (ecx_6 != 0)
    _free(ecx_6)

arg3[4] = eax_15
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg7 != 0)
    _free(arg7)

return arg3
