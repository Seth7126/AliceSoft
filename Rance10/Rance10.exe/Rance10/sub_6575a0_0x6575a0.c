// 函数: sub_6575a0
// 地址: 0x6575a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** eax_2)() = (*arg1[1])(arg1, 1, 0x1c)
arg1[0x6f] = eax_2
*eax_2 = sub_4033e0
int32_t ecx_1 = arg1[0xa] - 1

if (ecx_1 u<= 6)
    switch (ecx_1)
        case 0
            if (arg1[9] != 1)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
        case 1, 2, 5, 6
            if (arg1[9] != 3)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
        case 3, 4
            if (arg1[9] != 4)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
else if (arg1[9] s< 1)
    *(*arg1 + 0x14) = 0xb
    (**arg1)(arg1)

if (arg1[0x43] != 0)
    int32_t eax_6 = arg1[0xa]
    
    if (eax_6 != 2 && eax_6 != 6)
        *(*arg1 + 0x14) = 0x1c
        (**arg1)(arg1)

int32_t eax_10 = arg1[0xb]
int32_t* eax_13

if (eax_10 - 1 u> 5)
label_6577a4:
    
    if (eax_10 != arg1[0xa])
        *(*arg1 + 0x14) = 0x1c
        eax_13 = (**arg1)(arg1)
    else
        eax_13 = arg1[9]
        arg1[0x19] = eax_13
        eax_2[1] = sub_6572d0
else
    switch (eax_10)
        case 1
            int32_t eax_12 = arg1[0xa] - 1
            arg1[0x19] = 1
            
            if (eax_12 u> 6)
                *(*arg1 + 0x14) = 0x1c
                eax_13 = (**arg1)(arg1)
            else
                eax_13 = zx.d(lookup_table_657804[eax_12])
                
                switch (eax_13)
                    case nullptr
                        int32_t i = 1
                        eax_2[1] = sub_657360
                        
                        if (arg1[9] s> 1)
                            int32_t edx_1 = 0x58
                            
                            do
                                eax_13 = arg1[0x31]
                                edx_1 += 0x58
                                i += 1
                                *(eax_13 + edx_1 - 0x24) = 0
                            while (i s< arg1[9])
                    case 1
                        int32_t eax_14 = arg1[0x43]
                        
                        if (eax_14 == 0)
                            eax_2[1] = sub_656fa0
                            eax_13 = sub_656e80(arg1)
                        else if (eax_14 == 1)
                            eax_2[1] = sub_657140
                            eax_13 = sub_656e80(arg1)
                        else
                            *(*arg1 + 0x14) = 0x1c
                            (**arg1)(arg1)
                            eax_13 = sub_656e80(arg1)
                    case 2
                        *(*arg1 + 0x14) = 0x1c
                        eax_13 = (**arg1)(arg1)
        case 2
            eax_13 = arg1[0xa] - 1
            arg1[0x19] = 3
            
            if (eax_13 u> 6)
                *(*arg1 + 0x14) = 0x1c
                eax_13 = (**arg1)(arg1)
            else
                switch (eax_13)
                    case nullptr
                        eax_2[1] = sub_6573b0
                    case 1
                        goto label_65772e
                    case 2
                        eax_2[1] = sub_656d40
                        eax_13 = sub_656ba0(arg1)
                    case 3, 4, 5
                        *(*arg1 + 0x14) = 0x1c
                        eax_13 = (**arg1)(arg1)
                    case 6
                        eax_2[1] = sub_656d40
                        eax_13 = sub_656c70(arg1)
        case 3, 5
            goto label_6577a4
        case 4
            int32_t eax_25 = arg1[0xa]
            arg1[0x19] = 4
            eax_13 = eax_25 - 4
            
            if (eax_25 == 4)
                eax_2[1] = sub_6572d0
            else if (eax_13 != 1)
                *(*arg1 + 0x14) = 0x1c
                eax_13 = (**arg1)(arg1)
            else
                eax_2[1] = sub_657420
                eax_13 = sub_656ba0(arg1)
        case 6
            bool cond:0_1 = arg1[0xa] == 6
            arg1[0x19] = 3
            
            if (cond:0_1)
            label_65772e:
                int32_t eax_21 = arg1[0x43]
                eax_13 = eax_21
                
                if (eax_21 == 0)
                    eax_2[1] = sub_657230
                else
                    int32_t* temp4_1 = eax_13
                    eax_13 -= 1
                    
                    if (temp4_1 != 1)
                        *(*arg1 + 0x14) = 0x1c
                        eax_13 = (**arg1)(arg1)
                    else
                        eax_2[1] = sub_657080
            else
                *(*arg1 + 0x14) = 0x1c
                eax_13 = (**arg1)(arg1)

if (*(arg1 + 0x4a) != 0)
    arg1[0x1a] = 1
    return eax_13

int32_t eax_27 = arg1[0x19]
arg1[0x1a] = eax_27
return eax_27
