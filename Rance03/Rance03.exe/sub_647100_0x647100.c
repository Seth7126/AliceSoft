// 函数: sub_647100
// 地址: 0x647100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c = 0xffffffff
int32_t var_18 = 0xffffffff
int32_t ebx = arg1[2]
int32_t edi = ebx
int32_t edx = arg1[3]
int32_t ebp = edx

while (true)
    int32_t temp0_1 = ebx
    ebx -= 0x10000
    int32_t edx_1 = adc.d(edx, 0xffffffff, temp0_1 u>= 0x10000)
    int32_t var_14_1 = edx_1
    
    if (edx_1 s<= 0 && (edx_1 s< 0 || ebx u< 0))
        int64_t var_c_1 = 0
        edx_1 = 0
        ebx = 0
        var_14_1 = 0
    
    int32_t eax_1 = *arg1
    int32_t eax_4
    
    if (eax_1 == 0)
        eax_4 = 0xffffff7f
    else
        int32_t ecx = arg1[0xb1]
        int32_t eax_2
        
        if (ecx != 0)
            eax_2 = ecx(eax_1, ebx, edx_1, 0)
        
        if (ecx == 0 || eax_2 == 0xffffffff)
            eax_4 = 0xffffff80
        else
            arg1[2] = ebx
            arg1[3] = var_14_1
            
            if (arg1[7] s>= 0)
                __builtin_memset(&arg1[8], 0, 0x14)
            
            eax_4 = 0
    
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(eax_4)
    
    if ((eax_5 | edx_3) != 0)
        return eax_5
    
    int32_t temp2_1 = arg1[3]
    int32_t ecx_1
    
    if (temp2_1 s> ebp || (temp2_1 s>= ebp && arg1[2] u>= edi))
    label_647222:
        ecx_1 = var_1c
    else
        while (true)
            *arg2 = zx.o(0)
            int32_t eax_8 = sbb.d(ebp, arg1[3], edi u< arg1[2])
            int32_t eax_9
            eax_9, edx_3 = sub_647050(eax_8, arg2, arg1, edi - arg1[2], eax_8)
            
            if (eax_9 == 0xffffff80 && edx_3 == 0xffffffff)
                return 0xffffff80
            
            if (edx_3 s< 0)
                goto label_647222
            
            if (edx_3 s<= 0 && eax_9 u< 0)
                goto label_647222
            
            ecx_1 = eax_9
            var_18 = edx_3
            var_1c = ecx_1
            int32_t temp7_1 = arg1[3]
            
            if (temp7_1 s>= ebp)
                if (temp7_1 s> ebp)
                    break
                
                if (arg1[2] u>= edi)
                    break
    
    int32_t eax_11 = ecx_1 & var_18
    
    if (eax_11 != 0xffffffff)
        if (arg2[1] == 0)
            int32_t eax_14
            int32_t edx_5
            edx_5:eax_14 = sx.q(sub_646ff0(eax_11, edx_3, arg1, ecx_1, var_18))
            ecx_1 = eax_14
            int32_t eax_15 = eax_14 | edx_5
            
            if (eax_15 == 0)
                int32_t eax_16
                int32_t edx_7
                eax_16, edx_7 = sub_647050(eax_15, arg2, arg1, 0x10000, eax_15)
                
                if (edx_7 s<= 0 && (edx_7 s< 0 || eax_16 u< 0))
                    return 0xffffff7f
                
                ecx_1 = var_1c
        
        return ecx_1
    
    edx = var_14_1
