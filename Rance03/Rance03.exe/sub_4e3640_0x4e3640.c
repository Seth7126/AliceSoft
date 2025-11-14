// 函数: sub_4e3640
// 地址: 0x4e3640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_8 = arg1
int32_t eax
eax.b = *(arg1 + 0x24) s< *(arg1 + 0x20)

if (eax.b != 0)
    int32_t eax_1 = *(arg1 + 0x28)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = eax_1

int32_t edx = 0
int32_t* ebx = arg4
int32_t eax_4 = (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2
int32_t var_c = 0
int32_t* ebp = arg2

if (eax_4 s> 0)
    int32_t* esi_1 = arg5
    
    do
        int32_t edi_1 = *(*(arg1 + 0x14) + (edx << 2))
        int32_t var_28_1 = edi_1
        arg5 = edi_1
        int32_t var_10 = edi_1
        char eax_6 = sub_46cc80()
        arg2.b = eax_6
        int32_t* edx_2 = *(var_8 + 8) + (var_c << 2)
        int32_t ecx_2 = *edx_2
        
        if (ecx_2 == 0)
            arg4.b = 1
        
        if (ecx_2 != 0 || eax_6 == 0)
            arg4.b = 0
        
        if (ecx_2 == 0 || eax_6 != 0)
            ecx_2.b = 0
        else
            ecx_2.b = 1
        
        int32_t eax_7
        eax_7.b = arg2.b != 0
        *edx_2 = eax_7
        
        if (arg4.b != 0)
            int32_t eax_8 = ebp[1]
            int32_t ecx_3
            
            if (&var_10 u< eax_8)
                ecx_3 = *ebp
            
            if (&var_10 u>= eax_8 || ecx_3 u> &var_10)
                if (eax_8 == ebp[2])
                    sub_415950(ebp, 1)
                
                int32_t* eax_11 = ebp[1]
                
                if (eax_11 != 0)
                    *eax_11 = edi_1
                
                ebp[1] += 4
            else
                if (eax_8 == ebp[2])
                    sub_415950(ebp, 1)
                
                int32_t* ecx_5 = ebp[1]
                
                if (ecx_5 != 0)
                    *ecx_5 = *(*ebp + ((&var_10 - ecx_3) s>> 2 << 2))
                
                ebp[1] += 4
                edi_1 = arg5
        else if (ecx_2.b != 0)
            sub_4158d0(arg3, &var_10)
            edi_1 = var_10
            arg5 = edi_1
        
        if (arg2.b != 0)
            int32_t eax_12 = ebx[1]
            int32_t ecx_8
            
            if (&var_10 u< eax_12)
                ecx_8 = *ebx
            
            if (&var_10 u>= eax_12 || ecx_8 u> &var_10)
                if (eax_12 == ebx[2])
                    sub_415950(ebx, 1)
                
                int32_t* eax_15 = ebx[1]
                
                if (eax_15 != 0)
                    *eax_15 = edi_1
            else
                if (eax_12 == ebx[2])
                    sub_415950(ebx, 1)
                
                int32_t* ecx_10 = ebx[1]
                
                if (ecx_10 != 0)
                    *ecx_10 = *(*ebx + ((&var_10 - ecx_8) s>> 2 << 2))
            
            ebx[1] += 4
            
            if (eax.b != 0 || arg4.b != 0)
                int32_t eax_16 = esi_1[1]
                int32_t ecx_12
                
                if (&var_10 u< eax_16)
                    ecx_12 = *esi_1
                
                if (&var_10 u>= eax_16 || ecx_12 u> &var_10)
                    if (eax_16 == esi_1[2])
                        sub_415950(esi_1, 1)
                    
                    int32_t* eax_19 = esi_1[1]
                    
                    if (eax_19 != 0)
                        *eax_19 = arg5
                else
                    if (eax_16 == esi_1[2])
                        sub_415950(esi_1, 1)
                    
                    int32_t* ecx_14 = esi_1[1]
                    
                    if (ecx_14 != 0)
                        *ecx_14 = *(*esi_1 + ((&var_10 - ecx_12) s>> 2 << 2))
                
                esi_1[1] += 4
        
        arg1 = var_8
        edx = var_c + 1
        var_c = edx
    while (edx s< eax_4)

int32_t result

if (*ebx != ebx[1])
    result = *ebp

if (*ebx == ebx[1] || result != ebp[1])
    result = *(arg1 + 0x2c)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = result

return result
