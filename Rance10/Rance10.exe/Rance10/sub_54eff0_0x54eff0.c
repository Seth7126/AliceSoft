// 函数: sub_54eff0
// 地址: 0x54eff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* ecx = *arg1
int32_t* result

if (ecx == 0)
    result.b = 0
    return result

int32_t* result_1
int32_t* result_2

if (*(arg1 + 0x16) == 0)
    int32_t* ecx_2 = *(ecx + 0x118)
    
    if (ecx_2 != 0)
        result = (*(*ecx_2 + 0x10))()
        result_2 = result
        result_1 = result
    else
        result_2 = nullptr
        result_1 = nullptr
else
    result_2 = arg1[0xb]
    result_1 = result_2

void* ecx_3 = *arg1
int32_t* edi_1

if (ecx_3 == 0)
    edi_1 = nullptr
else if (*(arg1 + 0x16) == 0)
    int32_t* ecx_4 = *(ecx_3 + 0x118)
    
    if (ecx_4 != 0)
        edi_1 = (*(*ecx_4 + 0x14))()
    else
        edi_1 = nullptr
else
    edi_1 = arg1[0xc]

int32_t* edx_5 = arg2
int32_t* ebx = arg4
int32_t esi = *edx_5

if ((esi s>= 0 || *ebx s>= 0) && (esi s< result_2 || *ebx s< result_2))
    int32_t* ecx_5 = arg3
    result = *ecx_5
    
    if ((result s>= 0 || *arg5 s>= 0) && (result s< edi_1 || *arg5 s< edi_1))
        if (*ebx != esi)
            if (esi s< 0)
                *ecx_5 = result - divs.dp.d(sx.q((*arg5 - result) * esi), *ebx - esi)
                edx_5 = arg2
                *edx_5 = 0
            
            if (*ebx s< 0)
                int32_t esi_1 = *ecx_5
                int32_t ecx_6 = *edx_5
                ecx_5 = arg3
                edx_5 = arg2
                *arg5 = esi_1 - divs.dp.d(sx.q((*arg5 - esi_1) * ecx_6), *ebx - ecx_6)
                *ebx = 0
            
            int32_t* esi_3 = *edx_5
            int32_t* result_3 = result_1
            
            if (esi_3 s>= result_3)
                int32_t esi_4 = *ecx_5
                ecx_5 = arg3
                edx_5 = arg2
                *ecx_5 =
                    divs.dp.d(sx.q((result_3 - esi_3 - 1) * (*arg5 - esi_4)), *ebx - esi_3) + esi_4
                *edx_5 = result_1 - 1
                result_3 = result_1
            
            if (*ebx s>= result_3)
                int32_t esi_5 = *ecx_5
                int32_t edx_10 = *edx_5
                ecx_5 = arg3
                edx_5 = arg2
                *arg5 = divs.dp.d(sx.q((result_3 - edx_10 - 1) * (*arg5 - esi_5)), *ebx - edx_10)
                    + esi_5
                *ebx = result_1 - 1
        
        int32_t esi_6 = *ecx_5
        
        if (*arg5 != esi_6)
            if (esi_6 s< 0)
                int32_t ecx_15 = *edx_5
                edx_5 = arg2
                *edx_5 = ecx_15 - divs.dp.d(sx.q((*ebx - ecx_15) * esi_6), *arg5 - esi_6)
                ecx_5 = arg3
                *ecx_5 = 0
            
            if (*arg5 s< 0)
                int32_t esi_7 = *edx_5
                int32_t ecx_17 = *ecx_5
                ecx_5 = arg3
                edx_5 = arg2
                *ebx = esi_7 - divs.dp.d(sx.q((*ebx - esi_7) * ecx_17), *arg5 - ecx_17)
                *arg5 = 0
            
            int32_t* eax_38 = *ecx_5
            int32_t* esi_10
            
            if (eax_38 s< edi_1)
                esi_10 = arg2
            else
                int32_t esi_9 = *edx_5
                ecx_5 = arg3
                esi_10 = arg2
                *esi_10 =
                    divs.dp.d(sx.q((edi_1 - eax_38 - 1) * (*ebx - esi_9)), *arg5 - eax_38) + esi_9
                *ecx_5 = edi_1 - 1
            
            if (*arg5 s>= edi_1)
                int32_t edx_20 = *ecx_5
                int32_t esi_11 = *esi_10
                ecx_5 = arg3
                *ebx =
                    divs.dp.d(sx.q((edi_1 - edx_20 - 1) * (*ebx - esi_11)), *arg5 - edx_20) + esi_11
                *arg5 = edi_1 - 1
        
        int32_t esi_12 = *arg2
        
        if (esi_12 s>= 0)
            int32_t edx_23 = *ebx
            
            if (edx_23 s>= 0 && esi_12 s< result_1 && edx_23 s< result_1)
                int32_t ecx_26 = *ecx_5
                
                if (ecx_26 s>= 0)
                    result = *arg5
                    
                    if (result s>= 0 && ecx_26 s< edi_1 && result s< edi_1)
                        result.b = 1
                        return result

result.b = 0
return result
