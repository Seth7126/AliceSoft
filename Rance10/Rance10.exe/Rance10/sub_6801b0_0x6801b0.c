// 函数: sub_6801b0
// 地址: 0x6801b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_2c = arg4
int32_t* edi = &arg2[(arg4 - arg2) s/ 0x30 * 6]
sub_680a10(arg4 - 0x18, edi, arg2, arg4 - 0x18)
void* ebp = &edi[6]
void* var_10 = ebp

if (arg2 u< edi)
    void* esi_2 = &edi[-6]
    
    do
        int32_t* edx_3
        
        if (*(esi_2 + 0x2c) u< 0x10)
            edx_3 = edi
        else
            edx_3 = *edi
        
        int32_t* var_18_1
        
        if (*(esi_2 + 0x14) u< 0x10)
            var_18_1 = esi_2
        else
            var_18_1 = *esi_2
        
        int32_t ebx_1 = *(esi_2 + 0x10)
        int32_t eax_7 = *(esi_2 + 0x28)
        
        if (ebx_1 u< eax_7)
            eax_7 = ebx_1
        
        int32_t eax_8 = sub_406ac0(eax_7, edx_3, var_18_1, eax_7)
        int32_t ecx_3
        
        if (eax_8 != 0)
            if (eax_8 s< 0)
                break
            
            ecx_3 = *(esi_2 + 0x28)
        else
            ecx_3 = *(esi_2 + 0x28)
            
            if (ebx_1 u< ecx_3)
                break
        
        int32_t* edx_4
        
        if (*(esi_2 + 0x14) u< 0x10)
            edx_4 = esi_2
        else
            edx_4 = *esi_2
        
        int32_t* var_18_2
        
        if (*(esi_2 + 0x2c) u< 0x10)
            var_18_2 = edi
        else
            var_18_2 = *edi
        
        int32_t eax_10 = ebx_1
        
        if (ecx_3 u< ebx_1)
            eax_10 = ecx_3
        
        int32_t eax_11 = sub_406ac0(eax_10, edx_4, var_18_2, eax_10)
        
        if (eax_11 != 0)
            if (eax_11 s< 0)
                break
        else if (*(esi_2 + 0x28) u< ebx_1)
            break
        
        edi -= 0x18
        esi_2 -= 0x18
    while (arg2 u< edi)

void* ecx_6 = arg4

if (ebp u< ecx_6)
    while (true)
        int32_t* edx_5
        
        if (edi[5] u< 0x10)
            edx_5 = edi
        else
            edx_5 = *edi
        
        int32_t ebx_2 = *(ebp + 0x14)
        int32_t* var_10_1
        
        if (ebx_2 u< 0x10)
            var_10_1 = ebp
        else
            var_10_1 = *ebp
        
        int32_t esi_3 = *(ebp + 0x10)
        int32_t eax_13 = edi[4]
        
        if (esi_3 u< eax_13)
            eax_13 = esi_3
        
        int32_t eax_14 = sub_406ac0(eax_13, edx_5, var_10_1, eax_13)
        
        if (eax_14 != 0)
            if (eax_14 s>= 0)
            label_68030f:
                void* edx_8
                
                if (ebx_2 u< 0x10)
                    edx_8 = ebp
                else
                    edx_8 = *ebp
                
                int32_t* ecx_7
                
                if (edi[5] u< 0x10)
                    ecx_7 = edi
                else
                    ecx_7 = *edi
                
                int32_t ebx_4 = edi[4]
                int32_t eax_15 = esi_3
                
                if (ebx_4 u< esi_3)
                    eax_15 = ebx_4
                
                int32_t eax_16 = sub_406ac0(eax_15, edx_8, ecx_7, eax_15)
                
                if (eax_16 != 0)
                    if (eax_16 s>= 0)
                    label_680343:
                        ecx_6 = arg4
                        ebp += 0x18
                        
                        if (ebp u>= ecx_6)
                            break
                        
                        continue
                else if (ebx_4 u>= esi_3)
                    goto label_680343
        else if (esi_3 u>= edi[4])
            goto label_68030f
        
        ecx_6 = arg4
        break
    
    var_10 = ebp

int32_t* edx_6 = edi
void* esi_4 = ebp
int32_t* var_18_3 = edx_6

while (true)
    if (esi_4 u< ecx_6)
        int32_t* ebx_3 = ebp - 4
        
        do
            int32_t* edx_7
            
            if (*(esi_4 + 0x14) u< 0x10)
                edx_7 = esi_4
            else
                edx_7 = *esi_4
            
            int32_t* var_10_2
            
            if (edi[5] u< 0x10)
                var_10_2 = edi
            else
                var_10_2 = *edi
            
            int32_t ecx_8 = *(esi_4 + 0x10)
            int32_t eax_18 = ecx_8
            
            if (edi[4] u< ecx_8)
                eax_18 = edi[4]
            
            int32_t eax_19 = sub_406ac0(eax_18, edx_7, var_10_2, eax_18)
            int32_t ecx_10
            
            if (eax_19 == 0)
                ecx_10 = *(esi_4 + 0x10)
                
                if (edi[4] u>= ecx_10)
                    goto label_6803a0
            else if (eax_19 s>= 0)
                ecx_10 = *(esi_4 + 0x10)
            label_6803a0:
                int32_t* var_10_3
                
                if (edi[5] u< 0x10)
                    var_10_3 = edi
                else
                    var_10_3 = *edi
                
                void* var_c_1
                
                if (*(esi_4 + 0x14) u< 0x10)
                    var_c_1 = esi_4
                else
                    var_c_1 = *esi_4
                
                int32_t eax_22 = edi[4]
                
                if (ecx_10 u< eax_22)
                    eax_22 = ecx_10
                
                int32_t eax_23 = sub_406ac0(eax_22, var_10_3, var_c_1, eax_22)
                
                if (eax_23 != 0)
                    if (eax_23 s< 0)
                        break
                else if (*(esi_4 + 0x10) u< edi[4])
                    break
                
                void* eax_25 = ebp
                ebx_3 = &ebx_3[6]
                ebp += 0x18
                
                if (eax_25 != esi_4 && &ebx_3[-5] != esi_4)
                    sub_46e0d0(&ebx_3[-5], esi_4)
                    int32_t ecx_13 = ebx_3[-1]
                    ebx_3[-1] = *(esi_4 + 0x10)
                    *(esi_4 + 0x10) = ecx_13
                    int32_t ecx_14 = *ebx_3
                    *ebx_3 = *(esi_4 + 0x14)
                    *(esi_4 + 0x14) = ecx_14
            esi_4 += 0x18
        while (esi_4 u< arg4)
        
        edx_6 = var_18_3
        var_10 = ebp
    
    bool cond:0_1 = edx_6 != arg2
    
    if (edx_6 u> arg2)
        void* ebx_5 = &edx_6[-1]
        int32_t* eax_39
        
        do
            int32_t* var_c_2
            
            if (edi[5] u< 0x10)
                var_c_2 = edi
            else
                var_c_2 = *edi
            
            int32_t* var_8_1
            
            if (*ebx_5 u< 0x10)
                var_8_1 = ebx_5 - 0x14
            else
                var_8_1 = *(ebx_5 - 0x14)
            
            int32_t edx_10 = edi[4]
            int32_t eax_32 = edx_10
            
            if (*(ebx_5 - 4) u< edx_10)
                eax_32 = *(ebx_5 - 4)
            
            int32_t eax_33 = sub_406ac0(eax_32, var_c_2, var_8_1, eax_32)
            int32_t ecx_16
            int32_t edx_12
            
            if (eax_33 == 0)
                ecx_16 = *(ebx_5 - 4)
                edx_12 = edi[4]
                
                if (ecx_16 u>= edx_12)
                    goto label_6804a7
            else if (eax_33 s>= 0)
                ecx_16 = *(ebx_5 - 4)
                edx_12 = edi[4]
            label_6804a7:
                char* var_8_2
                
                if (*ebx_5 u< 0x10)
                    var_8_2 = ebx_5 - 0x14
                else
                    var_8_2 = *(ebx_5 - 0x14)
                
                int32_t* var_c_3
                
                if (edi[5] u< 0x10)
                    var_c_3 = edi
                else
                    var_c_3 = *edi
                
                int32_t eax_36 = ecx_16
                
                if (edx_12 u< ecx_16)
                    eax_36 = edx_12
                
                int32_t eax_37 = sub_406ac0(eax_36, var_8_2, var_c_3, eax_36)
                
                if (eax_37 != 0)
                    if (eax_37 s< 0)
                    label_6804f4:
                        eax_39 = arg2
                        edx_6 = var_18_3
                        break
                else if (edi[4] u< *(ebx_5 - 4))
                    goto label_6804f4
                
                edi -= 0x18
                
                if (edi != ebx_5 - 0x14)
                    sub_46e0d0(edi, ebx_5 - 0x14)
                    int32_t ecx_25 = edi[4]
                    edi[4] = *(ebx_5 - 4)
                    *(ebx_5 - 4) = ecx_25
                    int32_t ecx_26 = edi[5]
                    edi[5] = *ebx_5
                    *ebx_5 = ecx_26
            ebx_5 -= 0x18
            eax_39 = arg2
            edx_6 = var_18_3 - 0x18
            var_18_3 = edx_6
        while (eax_39 u< edx_6)
        
        ebp = var_10
        cond:0_1 = edx_6 != eax_39
    
    ecx_6 = arg4
    
    if (cond:0_1)
        edx_6 -= 0x18
        var_18_3 = edx_6
        
        if (esi_4 != ecx_6)
            if (esi_4 != edx_6)
                sub_46e0d0(esi_4, edx_6)
                edx_6 = var_18_3
                int32_t ecx_34 = *(esi_4 + 0x10)
                *(esi_4 + 0x10) = edx_6[4]
                edx_6[4] = ecx_34
                int32_t ecx_35 = *(esi_4 + 0x14)
                *(esi_4 + 0x14) = edx_6[5]
                edx_6[5] = ecx_35
                ecx_6 = arg4
            
            esi_4 += 0x18
        else
            edi -= 0x18
            
            if (edx_6 != edi)
                sub_46e0d0(edx_6, edi)
                edx_6 = var_18_3
                int32_t ecx_28 = edx_6[4]
                edx_6[4] = edi[4]
                edi[4] = ecx_28
                int32_t ecx_29 = edx_6[5]
                edx_6[5] = edi[5]
                edi[5] = ecx_29
                ecx_6 = arg4
            
            ebp -= 0x18
            var_10 = ebp
            
            if (edi != ebp)
                sub_46e0d0(edi, ebp)
                int32_t ecx_31 = edi[4]
                edx_6 = var_18_3
                edi[4] = *(ebp + 0x10)
                *(ebp + 0x10) = ecx_31
                int32_t ecx_32 = edi[5]
                edi[5] = *(ebp + 0x14)
                *(ebp + 0x14) = ecx_32
                ecx_6 = arg4
    else
        if (esi_4 == ecx_6)
            break
        
        if (ebp != esi_4 && edi != ebp)
            sub_46e0d0(edi, ebp)
            int32_t ecx_19 = edi[4]
            edx_6 = var_18_3
            edi[4] = *(ebp + 0x10)
            *(ebp + 0x10) = ecx_19
            int32_t ecx_20 = edi[5]
            edi[5] = *(ebp + 0x14)
            *(ebp + 0x14) = ecx_20
            ecx_6 = arg4
        
        void* eax_42 = edi
        void* ebx_6 = esi_4
        ebp += 0x18
        edi = &edi[6]
        var_10 = ebp
        esi_4 += 0x18
        
        if (eax_42 != ebx_6)
            sub_46e0d0(eax_42, ebx_6)
            int32_t ecx_22 = *(eax_42 + 0x10)
            *(eax_42 + 0x10) = *(ebx_6 + 0x10)
            *(ebx_6 + 0x10) = ecx_22
            int32_t ecx_23 = *(eax_42 + 0x14)
            *(eax_42 + 0x14) = *(ebx_6 + 0x14)
            edx_6 = var_18_3
            *(ebx_6 + 0x14) = ecx_23
            ecx_6 = arg4

*arg3 = edi
arg3[1] = ebp
return arg3
