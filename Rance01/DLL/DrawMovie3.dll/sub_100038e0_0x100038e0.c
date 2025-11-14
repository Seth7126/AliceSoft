// 函数: sub_100038e0
// 地址: 0x100038e0
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
            jump((&jump_table_10003ba0)[neg.d(ecx_5)])
        
        edi_2, esi_2 = __builtin_memcpy(edi_2 - (ecx_5 << 2), esi_2 - (ecx_5 << 2), ecx_5 << 2)
        
        switch (arg3 & 3)
            case nullptr
                return arg1
            case 1
                goto label_10003c08
            case 2
                goto label_10003c18
            case 3
                goto label_10003c2c
    else if (arg3 u< 4)
        switch (arg3)
            case nullptr
                return arg1
            case 1
            label_10003c08:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                return arg1
            case 2
            label_10003c18:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                return arg1
            case 3
            label_10003c2c:
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
        
        switch (jump_table_10003af4[eax_1])
            case 0x10003b04
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                ecx_5 = ecx_7 u>> 2
                
                if (ecx_5 u< 8)
                    jump((&jump_table_10003ba0)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 1 - (ecx_5 << 2), esi_2 - 1 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_10003c08
                    case 2
                        goto label_10003c18
                    case 3
                        goto label_10003c2c
            case 0x10003b28
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                ecx_5 = ecx_7 u>> 2
                *(edi_2 + 2) = eax_1.b
                
                if (ecx_5 u< 8)
                    jump((&jump_table_10003ba0)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 2 - (ecx_5 << 2), esi_2 - 2 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_10003c08
                    case 2
                        goto label_10003c18
                    case 3
                        goto label_10003c2c
            case 0x10003b50
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                ecx_5 = ecx_7 u>> 2
                *(edi_2 + 1) = eax_1.b
                
                if (ecx_5 u< 8)
                    jump((&jump_table_10003ba0)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 3 - (ecx_5 << 2), esi_2 - 3 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_10003c08
                    case 2
                        goto label_10003c18
                    case 3
                        goto label_10003c2c

if (arg3 u>= 0x100 && data_10023504 != 0 && (edi & 0xf) == (esi & 0xf))
    return sub_10008bb2(arg1, arg2, arg3) __tailcall

uint32_t ecx_2
void* edx_2

if ((edi & 3) != 0)
    if (arg3 u< 4)
        jump(*(((arg3 - 4) << 2) + &data_10003a64))
    
    eax_1 = edi & 3
    void* ecx_4 = arg3 - 4 + eax_1
    
    switch (jump_table_10003968[eax_1])
        case 0x10003978
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
                        goto label_10003a6c
                    case 2
                        goto label_10003a78
                    case 3
                        goto label_10003a8c
        case 0x100039a4
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
                        goto label_10003a6c
                    case 2
                        goto label_10003a78
                    case 3
                        goto label_10003a8c
        case 0x100039c8
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
                        goto label_10003a6c
                    case 2
                        goto label_10003a78
                    case 3
                        goto label_10003a8c
else
    ecx_2 = arg3 u>> 2
    edx_2 = arg3 & 3
    
    if (ecx_2 u>= 8)
        edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
        
        switch (edx_2)
            case nullptr
                return arg1
            case 1
                goto label_10003a6c
            case 2
                goto label_10003a78
            case 3
                goto label_10003a8c

switch (ecx_2)
    case 0
        goto label_10003a4b
    case 1
        goto label_10003a3c
    case 2
        goto label_10003a34
    case 3
        goto label_10003a2c
    case 4
        goto label_10003a24
    case 5
        goto label_10003a1c
    case 6
        goto label_10003a14
    case 7
        *(edi + (ecx_2 << 2) - 0x1c) = *(esi + (ecx_2 << 2) - 0x1c)
    label_10003a14:
        *(edi + (ecx_2 << 2) - 0x18) = *(esi + (ecx_2 << 2) - 0x18)
    label_10003a1c:
        *(edi + (ecx_2 << 2) - 0x14) = *(esi + (ecx_2 << 2) - 0x14)
    label_10003a24:
        *(edi + (ecx_2 << 2) - 0x10) = *(esi + (ecx_2 << 2) - 0x10)
    label_10003a2c:
        *(edi + (ecx_2 << 2) - 0xc) = *(esi + (ecx_2 << 2) - 0xc)
    label_10003a34:
        *(edi + (ecx_2 << 2) - 8) = *(esi + (ecx_2 << 2) - 8)
    label_10003a3c:
        *(edi + (ecx_2 << 2) - 4) = *(esi + (ecx_2 << 2) - 4)
        eax_1 = ecx_2 << 2
        esi = &esi[eax_1]
        edi = &edi[eax_1]
    label_10003a4b:
        
        switch (edx_2)
            case nullptr
                return arg1
            case 1
            label_10003a6c:
                eax_1.b = *esi
                *edi = eax_1.b
                return arg1
            case 2
            label_10003a78:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = esi[1]
                edi[1] = eax_1.b
                return arg1
            case 3
            label_10003a8c:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = esi[1]
                edi[1] = eax_1.b
                eax_1.b = esi[2]
                edi[2] = eax_1.b
                return arg1
