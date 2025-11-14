// 函数: sub_10003dc0
// 地址: 0x10003dc0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

char* esi = arg2
char* edi = arg1
uint32_t eax_1

if (edi u> esi && edi u< arg3 + esi)
    void* esi_2 = arg3 + esi - 4
    void* edi_2 = arg3 + edi - 4
    uint32_t ecx_5
    
    if ((edi_2 & 3) == 0)
        ecx_5 = arg3 u>> 2
        
        if (ecx_5 u< 8)
            jump((&jump_table_10004080)[neg.d(ecx_5)])
        
        edi_2, esi_2 = __builtin_memcpy(edi_2 - (ecx_5 << 2), esi_2 - (ecx_5 << 2), ecx_5 << 2)
        
        switch (arg3 & 3)
            case nullptr
                return arg1
            case 1
                goto label_100040e8
            case 2
                goto label_100040f8
            case 3
                goto label_1000410c
    else if (arg3 u< 4)
        switch (arg3)
            case nullptr
                return arg1
            case 1
            label_100040e8:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                return arg1
            case 2
            label_100040f8:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                return arg1
            case 3
            label_1000410c:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                *(edi_2 + 1) = eax_1.b
                return arg1
    else
        eax_1 = edi_2 & 3
        void* ecx_7 = arg3 - eax_1
        
        switch (jump_table_10003fd4[eax_1])
            case 0x10003fe4
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                ecx_5 = ecx_7 u>> 2
                
                if (ecx_5 u< 8)
                    jump((&jump_table_10004080)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 1 - (ecx_5 << 2), esi_2 - 1 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_100040e8
                    case 2
                        goto label_100040f8
                    case 3
                        goto label_1000410c
            case 0x10004008
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                ecx_5 = ecx_7 u>> 2
                *(edi_2 + 2) = eax_1.b
                
                if (ecx_5 u< 8)
                    jump((&jump_table_10004080)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 2 - (ecx_5 << 2), esi_2 - 2 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_100040e8
                    case 2
                        goto label_100040f8
                    case 3
                        goto label_1000410c
            case 0x10004030
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                ecx_5 = ecx_7 u>> 2
                *(edi_2 + 1) = eax_1.b
                
                if (ecx_5 u< 8)
                    jump((&jump_table_10004080)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 3 - (ecx_5 << 2), esi_2 - 3 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_100040e8
                    case 2
                        goto label_100040f8
                    case 3
                        goto label_1000410c

if (arg3 u>= 0x100 && data_10023504 != 0 && (edi & 0xf) == (esi & 0xf))
    return sub_10008bb2(arg1, arg2, arg3) __tailcall

uint32_t ecx_2
void* edx_2

if ((edi & 3) != 0)
    if (arg3 u< 4)
        jump(*(((arg3 - 4) << 2) + &data_10003f44))
    
    eax_1 = edi & 3
    void* ecx_4 = arg3 - 4 + eax_1
    
    switch (jump_table_10003e48[eax_1])
        case 0x10003e58
            edx_2 = 3 & ecx_4
            eax_1.b = *esi
            *edi = eax_1.b
            eax_1.b = esi[1]
            edi[1] = eax_1.b
            eax_1.b = esi[2]
            ecx_2 = ecx_4 u>> 2
            edi[2] = eax_1.b
            esi = &esi[3]
            edi = &edi[3]
            
            if (ecx_2 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
                
                switch (edx_2)
                    case nullptr
                        return arg1
                    case 1
                        goto label_10003f4c
                    case 2
                        goto label_10003f58
                    case 3
                        goto label_10003f6c
        case 0x10003e84
            edx_2 = 3 & ecx_4
            eax_1.b = *esi
            *edi = eax_1.b
            eax_1.b = esi[1]
            ecx_2 = ecx_4 u>> 2
            edi[1] = eax_1.b
            esi = &esi[2]
            edi = &edi[2]
            
            if (ecx_2 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
                
                switch (edx_2)
                    case nullptr
                        return arg1
                    case 1
                        goto label_10003f4c
                    case 2
                        goto label_10003f58
                    case 3
                        goto label_10003f6c
        case 0x10003ea8
            edx_2 = 3 & ecx_4
            eax_1.b = *esi
            *edi = eax_1.b
            esi = &esi[1]
            ecx_2 = ecx_4 u>> 2
            edi = &edi[1]
            
            if (ecx_2 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
                
                switch (edx_2)
                    case nullptr
                        return arg1
                    case 1
                        goto label_10003f4c
                    case 2
                        goto label_10003f58
                    case 3
                        goto label_10003f6c
else
    ecx_2 = arg3 u>> 2
    edx_2 = arg3 & 3
    
    if (ecx_2 u>= 8)
        edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
        
        switch (edx_2)
            case nullptr
                return arg1
            case 1
                goto label_10003f4c
            case 2
                goto label_10003f58
            case 3
                goto label_10003f6c

switch (ecx_2)
    case 0
        goto label_10003f2b
    case 1
        goto label_10003f1c
    case 2
        goto label_10003f14
    case 3
        goto label_10003f0c
    case 4
        goto label_10003f04
    case 5
        goto label_10003efc
    case 6
        goto label_10003ef4
    case 7
        *(edi + (ecx_2 << 2) - 0x1c) = *(esi + (ecx_2 << 2) - 0x1c)
    label_10003ef4:
        *(edi + (ecx_2 << 2) - 0x18) = *(esi + (ecx_2 << 2) - 0x18)
    label_10003efc:
        *(edi + (ecx_2 << 2) - 0x14) = *(esi + (ecx_2 << 2) - 0x14)
    label_10003f04:
        *(edi + (ecx_2 << 2) - 0x10) = *(esi + (ecx_2 << 2) - 0x10)
    label_10003f0c:
        *(edi + (ecx_2 << 2) - 0xc) = *(esi + (ecx_2 << 2) - 0xc)
    label_10003f14:
        *(edi + (ecx_2 << 2) - 8) = *(esi + (ecx_2 << 2) - 8)
    label_10003f1c:
        *(edi + (ecx_2 << 2) - 4) = *(esi + (ecx_2 << 2) - 4)
        eax_1 = ecx_2 << 2
        esi = &esi[eax_1]
        edi = &edi[eax_1]
    label_10003f2b:
        
        switch (edx_2)
            case nullptr
                return arg1
            case 1
            label_10003f4c:
                eax_1.b = *esi
                *edi = eax_1.b
                return arg1
            case 2
            label_10003f58:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = esi[1]
                edi[1] = eax_1.b
                return arg1
            case 3
            label_10003f6c:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = esi[1]
                edi[1] = eax_1.b
                eax_1.b = esi[2]
                edi[2] = eax_1.b
                return arg1
