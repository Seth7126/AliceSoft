// 函数: sub_506d70
// 地址: 0x506d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_24 = *(arg1 + 4)

if (ecx_24 == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* edx = arg2
int32_t* eax_1 = *(ecx_24 + 0x18)
int32_t ecx = *(ecx_24 + 0x1c)
int32_t esi = *edx
int32_t* var_8 = eax_1

if (esi s< 0 && *arg4 s< 0)
    eax_1.b = 0
    return eax_1

if (esi s>= eax_1 && *arg4 s>= eax_1)
    eax_1.b = 0
    return eax_1

int32_t* ebx = *arg3

if ((ebx s>= 0 || *arg5 s>= 0) && (ebx s< ecx || *arg5 s< ecx))
    if (*arg4 != esi)
        if (esi s< 0)
            edx = arg2
            eax_1 = var_8
            *arg3 = ebx - divs.dp.d(sx.q((*arg5 - ebx) * esi), *arg4 - esi)
            *edx = 0
        
        if (*arg4 s< 0)
            int32_t ecx_3 = *edx
            int32_t esi_1 = *arg3
            edx = arg2
            eax_1 = var_8
            *arg5 = esi_1 - divs.dp.d(sx.q((*arg5 - esi_1) * ecx_3), *arg4 - ecx_3)
            *arg4 = 0
        
        int32_t* ecx_4 = *edx
        
        if (ecx_4 s>= eax_1)
            edx = arg2
            *arg3 += divs.dp.d(sx.q((eax_1 - ecx_4 - 1) * (*arg5 - *arg3)), *arg4 - ecx_4)
            *edx = var_8 - 1
            eax_1 = var_8
        
        if (*arg4 s>= eax_1)
            int32_t edx_8 = *edx
            edx = arg2
            *arg5 = divs.dp.d(sx.q((eax_1 - edx_8 - 1) * (*arg5 - *arg3)), *arg4 - edx_8) + *arg3
            *arg4 = var_8 - 1
    
    int32_t esi_3 = *arg3
    int32_t ecx_15
    
    if (*arg5 == esi_3)
        ecx_15 = ecx
    else
        if (esi_3 s< 0)
            int32_t ecx_13 = *edx
            edx = arg2
            *edx = ecx_13 - divs.dp.d(sx.q((*arg4 - ecx_13) * esi_3), *arg5 - esi_3)
            *arg3 = 0
        
        if (*arg5 s< 0)
            int32_t esi_4 = *edx
            edx = arg2
            *arg4 = esi_4 - divs.dp.d(sx.q((*arg4 - esi_4) * *arg3), *arg5 - *arg3)
            *arg5 = 0
        
        ecx_15 = ecx
        int32_t* esi_7
        
        if (*arg3 s< ecx_15)
            esi_7 = arg2
        else
            int32_t esi_6 = *edx
            int32_t eax_41
            int32_t edx_16
            edx_16:eax_41 = sx.q((ecx_15 - *arg3 - 1) * (*arg4 - esi_6))
            ecx_15 = ecx
            esi_7 = arg2
            *esi_7 = divs.dp.d(edx_16:eax_41, *arg5 - *arg3) + esi_6
            *arg3 = ecx_15 - 1
        
        if (*arg5 s>= ecx_15)
            int32_t esi_8 = *esi_7
            int32_t eax_49
            int32_t edx_18
            edx_18:eax_49 = sx.q((ecx_15 - *arg3 - 1) * (*arg4 - esi_8))
            ecx_15 = ecx
            *arg4 = divs.dp.d(edx_18:eax_49, *arg5 - *arg3) + esi_8
            *arg5 = ecx_15 - 1
    
    int32_t esi_9 = *arg2
    
    if (esi_9 s>= 0)
        int32_t edx_20 = *arg4
        
        if (edx_20 s>= 0 && esi_9 s< var_8 && edx_20 s< var_8)
            int32_t edx_21 = *arg3
            
            if (edx_21 s>= 0)
                eax_1 = *arg5
                
                if (eax_1 s>= 0 && edx_21 s< ecx_15 && eax_1 s< ecx_15)
                    eax_1.b = 1
                    return eax_1

eax_1.b = 0
return eax_1
