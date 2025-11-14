// 函数: sub_6472b0
// 地址: 0x6472b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg3[3]
int32_t ebp = eax
int32_t edx = arg3[2]
int32_t ebx = edx
int32_t var_44 = eax
int32_t var_3c = 0xffffffff
int32_t var_4c = 0xffffffff
int32_t var_2c = 0xffffffff
int32_t var_48 = 0xffffffff
int32_t var_40 = ebx
int32_t esi = 0xffffffff
int32_t var_38 = ebp
int32_t var_30 = 0xffffffff
int32_t var_28 = 0xffffffff
int32_t edx_15

while (true)
    int32_t edx_1 = edx - 0x10000
    int32_t var_34_1 = edx_1
    int32_t eax_2 = adc.d(var_44, 0xffffffff, edx u>= 0x10000)
    var_44 = eax_2
    
    if (eax_2 s<= 0 && (eax_2 s< 0 || edx_1 u< 0))
        int32_t var_20 = 0
        edx_1 = 0
        var_44 = 0xffffffff
        var_34_1 = 0
    
    int32_t ecx = *arg3
    int32_t eax_7
    
    if (ecx == 0)
        eax_7 = 0xffffff7f
    else
        int32_t eax_3 = arg3[0xb1]
        int32_t eax_4
        
        if (eax_3 != 0)
            eax_4 = eax_3(ecx, edx_1, var_44, 0)
        
        if (eax_3 == 0 || eax_4 == 0xffffffff)
            eax_7 = 0xffffff80
        else
            arg3[2] = var_34_1
            arg3[3] = var_44
            
            if (arg3[7] s>= 0)
                __builtin_memset(&arg3[8], 0, 0x14)
            
            eax_7 = 0
    
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(eax_7)
    int32_t* eax_9 = eax_8 | edx_2
    
    if (eax_9 != 0)
        return eax_8
    
    int32_t temp2_1 = arg3[3]
    
    if (temp2_1 s> ebp || (temp2_1 s>= ebp && arg3[2] u>= ebx))
    label_647567:
        edx_15 = var_48
    else
        while (true)
            void* var_10
            int32_t eax_10
            int32_t edx_4
            eax_10, edx_4 =
                sub_647050(eax_9, &var_10, arg3, ebx - arg3[2], sbb.d(ebp, arg3[3], ebx u< arg3[2]))
            
            if (eax_10 == 0xffffff80 && edx_4 == 0xffffffff)
                return 0xffffff80
            
            if (edx_4 s>= 0 && (edx_4 s> 0 || eax_10 u>= 0))
                void* esi_1 = var_10
                var_2c = edx_4
                int32_t eax_15
                int32_t edx_5
                edx_5:eax_15 = sx.q(zx.d(*(esi_1 + 0xe)) | (
                    (zx.d(*(esi_1 + 0x11)) << 8 | zx.d(*(esi_1 + 0x10))) << 8
                    | zx.d(*(esi_1 + 0xf))) << 8)
                var_48 = eax_15
                int32_t eax_17
                int32_t edx_6
                edx_6:eax_17 = sx.q(zx.d(*(esi_1 + 0xd)))
                int32_t eax_21
                int32_t edx_7
                edx_7:eax_21 = sx.q(zx.d(*(esi_1 + 0xc)))
                int32_t ecx_11 = eax_17 << 8 | eax_21
                int32_t eax_26
                int32_t edx_8
                edx_8:eax_26 = sx.q(zx.d(*(esi_1 + 0xb)))
                int32_t ecx_13 = ecx_11 << 8 | eax_26
                int32_t eax_31
                int32_t edx_9
                edx_9:eax_31 = sx.q(zx.d(*(esi_1 + 0xa)))
                int32_t ecx_15 = ecx_13 << 8 | eax_31
                int32_t eax_36
                int32_t edx_10
                edx_10:eax_36 = sx.q(zx.d(*(esi_1 + 9)))
                int32_t ecx_17 = ecx_15 << 8 | eax_36
                int32_t eax_38 = (((edx_6 << 8 | eax_17 u>> 0xffffffe8 | edx_7) << 8
                    | ecx_11 u>> 0xffffffe8 | edx_8) << 8 | ecx_13 u>> 0xffffffe8 | edx_9) << 8
                    | ecx_15 u>> 0xffffffe8 | edx_10
                int32_t eax_41
                int32_t edx_11
                edx_11:eax_41 = sx.q(zx.d(*(esi_1 + 8)))
                int32_t ecx_19 = ecx_17 << 8 | eax_41
                int32_t eax_46
                int32_t edx_12
                edx_12:eax_46 = sx.q(zx.d(*(esi_1 + 7)))
                int32_t ecx_21 = ecx_19 << 8 | eax_46
                int32_t eax_51
                int32_t edx_13
                edx_13:eax_51 = sx.q(zx.d(*(esi_1 + 6)))
                int32_t ecx_23 = ecx_21 << 8 | eax_51
                var_4c = eax_10
                esi = ((eax_38 << 8 | ecx_17 u>> 0xffffffe8 | edx_11) << 8 | ecx_19 u>> 0xffffffe8
                    | edx_12) << 8 | ecx_21 u>> 0xffffffe8 | edx_13
                var_28 = ecx_23
                int32_t eax_54
                int32_t edx_14
                edx_14:eax_54 = sx.q(*arg5)
                edx_15 = var_48
                
                if (edx_15 == eax_54 && edx_5 == edx_14)
                    var_3c = eax_10
                    var_30 = edx_4
                    *arg6 = ecx_23
                    arg6[1] = esi
                
                eax_9 = arg2
                int32_t ecx_24 = arg4
                
                if (arg2 == 0 || arg4 == 0)
                label_647531:
                    var_3c = 0xffffffff
                    var_30 = 0xffffffff
                else
                    while (true)
                        ecx_24 -= 1
                        
                        if (*eax_9 == edx_15)
                            break
                        
                        eax_9 = &eax_9[1]
                        
                        if (ecx_24 == 0)
                            goto label_647531
                
                ebp = var_38
                ebx = var_40
                int32_t temp7_1 = arg3[3]
                
                if (temp7_1 s< ebp)
                    continue
                else
                    if (temp7_1 s> ebp)
                        break
                    
                    if (arg3[2] u>= ebx)
                        break
                    
                    continue
            
            ebp = var_38
            ebx = var_40
            goto label_647567
    
    if ((var_4c & var_2c) != 0xffffffff)
        break
    
    edx = var_34_1

if (var_30 s>= 0 && (var_30 s> 0 || var_3c u>= 0))
    return var_3c

*arg5 = edx_15
*arg6 = var_28
arg6[1] = esi
return var_4c
