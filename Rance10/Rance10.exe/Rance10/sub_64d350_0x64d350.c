// 函数: sub_64d350
// 地址: 0x64d350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** eax_2)() = (*arg1[1])(arg1, 1, 0xc)
arg1[0x63] = eax_2
*eax_2 = sub_4033e0
int32_t ecx_1 = arg1[0xa] - 1

if (ecx_1 u<= 6)
    switch (ecx_1)
        case 0
            if (arg1[9] != 1)
                *(*arg1 + 0x14) = 0xa
                (**arg1)(arg1)
        case 1, 2, 5, 6
            if (arg1[9] != 3)
                *(*arg1 + 0x14) = 0xa
                (**arg1)(arg1)
        case 3, 4
            if (arg1[9] != 4)
                *(*arg1 + 0x14) = 0xa
                (**arg1)(arg1)
else if (arg1[9] s< 1)
    *(*arg1 + 0x14) = 0xa
    (**arg1)(arg1)

if (arg1[0x3d] != 0)
    int32_t eax_6 = arg1[0x14]
    
    if (eax_6 != 2 && eax_6 != 6)
        *(*arg1 + 0x14) = 0x1c
        (**arg1)(arg1)

void* eax_38 = arg1[0x14]
void* eax_27

if (eax_38 - 1 u<= 6)
    switch (eax_38)
        case 1
            if (arg1[0x13] != 1)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
            
            int32_t eax_14 = arg1[0xa] - 1
            
            if (eax_14 u<= 6)
                uint32_t eax_15 = zx.d(lookup_table_64d630[eax_14])
                
                switch (eax_15)
                    case 0
                        eax_2[1] = sub_64d1d0
                        return eax_15
                    case 1
                        *eax_2 = sub_64cb50
                        eax_2[1] = sub_64cf00
                        return eax_15
            
            *(*arg1 + 0x14) = 0x1c
            return (**arg1)(arg1)
        case 2, 6
            if (arg1[0x13] != 3)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
            
            if (arg1[0xa] == arg1[0x14])
                int32_t eax_20 = arg1[0x3d]
                
                if (eax_20 == 0)
                    eax_2[1] = sub_64d230
                    return eax_20
                
                if (eax_20 == 1)
                    eax_2[1] = sub_64d110
                    return eax_20 - 1
            
            *(*arg1 + 0x14) = 0x1c
            return (**arg1)(arg1)
        case 3
            if (arg1[0x13] != 3)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
            
            int32_t eax_26 = arg1[0xa]
            eax_27 = eax_26 - 2
            
            if (eax_26 == 2)
                goto label_64d547
            
        label_64d4b1:
            eax_38 = eax_27 - 1
            
            if (eax_27 != 1)
                *(*arg1 + 0x14) = 0x1c
                return (**arg1)(arg1)
        case 4
            if (arg1[0x13] != 4)
                *(*arg1 + 0x14) = 0xb
                eax_38 = (**arg1)(arg1)
            
            if (arg1[0xa] != 4)
                *(*arg1 + 0x14) = 0x1c
                return (**arg1)(arg1)
        case 5
            if (arg1[0x13] != 4)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
            
            int32_t eax_56 = arg1[0xa]
            eax_27 = eax_56 - 4
            
            if (eax_56 != 4)
                goto label_64d4b1
            
            *eax_2 = sub_64cb50
            eax_2[1] = sub_64cfb0
            return eax_27
        case 7
            if (arg1[0x13] != 3)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
            
            int32_t eax_35 = arg1[0xa]
            
            if (eax_35 == 2)
                *(arg1[0x15] + 0x8c) = 1
                eax_27 = arg1[0x15]
                *(eax_27 + 0xe4) = 1
            label_64d547:
                *eax_2 = sub_64cb50
                eax_2[1] = sub_64cdd0
                return eax_27
            
            if (eax_35 == 3)
                *(arg1[0x15] + 0x8c) = 1
                void* eax_44 = arg1[0x15]
                *(eax_44 + 0xe4) = 1
                eax_2[1] = sub_64d2c0
                return eax_44
            
            eax_38 = eax_35 - 7
            
            if (eax_35 != 7)
                *(*arg1 + 0x14) = 0x1c
                return (**arg1)(arg1)
else if (eax_38 != arg1[0xa])
    *(*arg1 + 0x14) = 0x1c
    eax_38 = (**arg1)(arg1)
else
    eax_38 = arg1[0x13]
    
    if (eax_38 != arg1[9])
        *(*arg1 + 0x14) = 0x1c
        eax_38 = (**arg1)(arg1)
eax_2[1] = sub_64d2c0
return eax_38
