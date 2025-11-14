// 函数: sub_69d850
// 地址: 0x69d850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
void* count = arg3
int32_t* edi = arg1
void* eax_1

if (edi u> esi && edi u< count + esi)
    void* esi_4 = count + esi - 4
    void* edi_1 = count + edi - 4
    uint32_t ecx_3
    
    if ((edi_1 & 3) == 0)
        ecx_3 = count u>> 2
        
        if (ecx_3 u< 8)
            jump((&jump_table_69dcd4)[neg.d(ecx_3)])
        
        edi_1, esi_4 = __builtin_memcpy(edi_1 - (ecx_3 << 2), esi_4 - (ecx_3 << 2), ecx_3 << 2)
        
        switch (count & 3)
            case nullptr
                return arg1
            case 1
                goto label_69dd3c
            case 2
                goto label_69dd4c
            case 3
                goto label_69dd60
    else if (count u< 4)
        switch (count)
            case nullptr
                return arg1
            case 1
            label_69dd3c:
                eax_1.b = *(esi_4 + 3)
                *(edi_1 + 3) = eax_1.b
                return arg1
            case 2
            label_69dd4c:
                eax_1.b = *(esi_4 + 3)
                *(edi_1 + 3) = eax_1.b
                eax_1.b = *(esi_4 + 2)
                *(edi_1 + 2) = eax_1.b
                return arg1
            case 3
            label_69dd60:
                eax_1.b = *(esi_4 + 3)
                *(edi_1 + 3) = eax_1.b
                eax_1.b = *(esi_4 + 2)
                *(edi_1 + 2) = eax_1.b
                eax_1.b = *(esi_4 + 1)
                *(edi_1 + 1) = eax_1.b
                return arg1
    else
        eax_1 = edi_1 & 3
        int32_t ecx_5 = count - eax_1
        
        switch (jump_table_69dc28[eax_1])
            case 0x69dc38
                eax_1.b = *(esi_4 + 3)
                *(edi_1 + 3) = eax_1.b
                ecx_3 = ecx_5 u>> 2
                
                if (ecx_3 u< 8)
                    jump((&jump_table_69dcd4)[neg.d(ecx_3)])
                
                edi_1, esi_4 =
                    __builtin_memcpy(edi_1 - 1 - (ecx_3 << 2), esi_4 - 1 - (ecx_3 << 2), ecx_3 << 2)
                
                switch (3 & ecx_5)
                    case 0
                        return arg1
                    case 1
                        goto label_69dd3c
                    case 2
                        goto label_69dd4c
                    case 3
                        goto label_69dd60
            case 0x69dc5c
                eax_1.b = *(esi_4 + 3)
                *(edi_1 + 3) = eax_1.b
                eax_1.b = *(esi_4 + 2)
                ecx_3 = ecx_5 u>> 2
                *(edi_1 + 2) = eax_1.b
                
                if (ecx_3 u< 8)
                    jump((&jump_table_69dcd4)[neg.d(ecx_3)])
                
                edi_1, esi_4 =
                    __builtin_memcpy(edi_1 - 2 - (ecx_3 << 2), esi_4 - 2 - (ecx_3 << 2), ecx_3 << 2)
                
                switch (3 & ecx_5)
                    case 0
                        return arg1
                    case 1
                        goto label_69dd3c
                    case 2
                        goto label_69dd4c
                    case 3
                        goto label_69dd60
            case 0x69dc84
                eax_1.b = *(esi_4 + 3)
                *(edi_1 + 3) = eax_1.b
                eax_1.b = *(esi_4 + 2)
                *(edi_1 + 2) = eax_1.b
                eax_1.b = *(esi_4 + 1)
                ecx_3 = ecx_5 u>> 2
                *(edi_1 + 1) = eax_1.b
                
                if (ecx_3 u< 8)
                    jump((&jump_table_69dcd4)[neg.d(ecx_3)])
                
                edi_1, esi_4 =
                    __builtin_memcpy(edi_1 - 3 - (ecx_3 << 2), esi_4 - 3 - (ecx_3 << 2), ecx_3 << 2)
                
                switch (3 & ecx_5)
                    case 0
                        return arg1
                    case 1
                        goto label_69dd3c
                    case 2
                        goto label_69dd4c
                    case 3
                        goto label_69dd60

if (test_bit(data_75c95c, 1))
    __builtin_memcpy(edi, esi, count)
else if (count u< 0x80)
label_69da5b:
    uint32_t ecx
    void* edx_1
    
    if ((edi & 3) != 0)
    label_69da7f:
        
        if (count u< 4)
            jump(*(((count - 4) << 2) + &data_69db98))
        
        eax_1 = edi & 3
        void* ecx_2 = count - 4 + eax_1
        
        switch (jump_table_69da9c[eax_1])
            case 0x69daac
                edx_1 = 3 & ecx_2
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = *(esi + 1)
                *(edi + 1) = eax_1.b
                eax_1.b = *(esi + 2)
                ecx = ecx_2 u>> 2
                *(edi + 2) = eax_1.b
                esi += 3
                edi += 3
                
                if (ecx u< 8)
                    goto label_69da98
                
                edi, esi = __builtin_memcpy(edi, esi, ecx << 2)
                
                switch (edx_1)
                    case 1
                        goto label_69dba0
                    case 2
                        goto label_69dbac
                    case 3
                        goto label_69dbc0
            case 0x69dad8
                edx_1 = 3 & ecx_2
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = *(esi + 1)
                ecx = ecx_2 u>> 2
                *(edi + 1) = eax_1.b
                esi += 2
                edi += 2
                
                if (ecx u< 8)
                    goto label_69da98
                
                edi, esi = __builtin_memcpy(edi, esi, ecx << 2)
                
                switch (edx_1)
                    case 1
                        goto label_69dba0
                    case 2
                        goto label_69dbac
                    case 3
                        goto label_69dbc0
            case 0x69dafc
                edx_1 = 3 & ecx_2
                eax_1.b = *esi
                *edi = eax_1.b
                esi += 1
                ecx = ecx_2 u>> 2
                edi += 1
                
                if (ecx u< 8)
                    goto label_69da98
                
                edi, esi = __builtin_memcpy(edi, esi, ecx << 2)
                
                switch (edx_1)
                    case 1
                        goto label_69dba0
                    case 2
                        goto label_69dbac
                    case 3
                        goto label_69dbc0
    else
    label_69da63:
        ecx = count u>> 2
        edx_1 = count & 3
        
        if (ecx u< 8)
        label_69da98:
            
            switch (ecx)
                case 0
                    goto label_69db7f
                case 1
                    goto label_69db70
                case 2
                    goto label_69db68
                case 3
                    goto label_69db60
                case 4
                    goto label_69db58
                case 5
                    goto label_69db50
                case 6
                    goto label_69db48
                case 7
                    edi[ecx - 7] = esi[ecx - 7]
                label_69db48:
                    edi[ecx - 6] = esi[ecx - 6]
                label_69db50:
                    edi[ecx - 5] = esi[ecx - 5]
                label_69db58:
                    edi[ecx - 4] = esi[ecx - 4]
                label_69db60:
                    edi[ecx - 3] = esi[ecx - 3]
                label_69db68:
                    edi[ecx - 2] = esi[ecx - 2]
                label_69db70:
                    edi[ecx - 1] = esi[ecx - 1]
                    eax_1 = ecx << 2
                    esi += eax_1
                    edi += eax_1
                label_69db7f:
                    
                    switch (edx_1)
                        case 1
                        label_69dba0:
                            eax_1.b = *esi
                            *edi = eax_1.b
                        case 2
                        label_69dbac:
                            eax_1.b = *esi
                            *edi = eax_1.b
                            eax_1.b = *(esi + 1)
                            *(edi + 1) = eax_1.b
                        case 3
                        label_69dbc0:
                            eax_1.b = *esi
                            *edi = eax_1.b
                            eax_1.b = *(esi + 1)
                            *(edi + 1) = eax_1.b
                            eax_1.b = *(esi + 2)
                            *(edi + 2) = eax_1.b
        else
            edi, esi = __builtin_memcpy(edi, esi, ecx << 2)
            
            switch (edx_1)
                case 1
                    goto label_69dba0
                case 2
                    goto label_69dbac
                case 3
                    goto label_69dbc0
else
    if (((edi ^ esi) & 0xf) == 0 && test_bit(data_74a410, 1))
        int32_t* var_c = edi
        void* eax_22 = esi & 0xf
        
        if (eax_22 != 0)
            void* i_9 = (0x10 - eax_22) & 3
            
            if (i_9 != 0)
                void* i
                
                do
                    void* edx_9
                    edx_9.b = *esi
                    *edi = edx_9.b
                    esi += 1
                    edi += 1
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            uint32_t i_6 = (0x10 - eax_22) u>> 2
            
            if (i_6 != 0)
                uint32_t i_1
                
                do
                    *edi = *esi
                    esi = &esi[1]
                    edi = &edi[1]
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
            
            count -= 0x10 - eax_22
        
        void* ecx_6 = count & 0x7f
        uint32_t i_10 = count u>> 7
        
        if (i_10 != 0)
            uint32_t i_2
            
            do
                int128_t xmm1_7 = *(esi + 0x10)
                int128_t xmm2_4 = *(esi + 0x20)
                int128_t xmm3_7 = *(esi + 0x30)
                *edi = *esi
                *(edi + 0x10) = xmm1_7
                *(edi + 0x20) = xmm2_4
                *(edi + 0x30) = xmm3_7
                int128_t xmm5_7 = *(esi + 0x50)
                int128_t xmm6_1 = *(esi + 0x60)
                int128_t xmm7_1 = *(esi + 0x70)
                *(edi + 0x40) = *(esi + 0x40)
                *(edi + 0x50) = xmm5_7
                *(edi + 0x60) = xmm6_1
                *(edi + 0x70) = xmm7_1
                esi = &esi[0x20]
                edi = &edi[0x20]
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
        
        if (ecx_6 != 0)
            uint32_t i_11 = ecx_6 u>> 4
            
            if (i_11 != 0)
                uint32_t i_3
                
                do
                    *edi = *esi
                    esi = &esi[4]
                    edi = &edi[4]
                    i_3 = i_11
                    i_11 -= 1
                while (i_3 != 1)
            
            void* ecx_7 = ecx_6 & 0xf
            
            if (ecx_7 != 0)
                uint32_t i_7 = ecx_7 u>> 2
                
                if (i_7 != 0)
                    uint32_t i_4
                    
                    do
                        *edi = *esi
                        esi = &esi[1]
                        edi = &edi[1]
                        i_4 = i_7
                        i_7 -= 1
                    while (i_4 != 1)
                
                void* i_8 = ecx_7 & 3
                
                if (i_8 != 0)
                    void* i_5
                    
                    do
                        void* eax_23
                        eax_23.b = *esi
                        *edi = eax_23.b
                        esi += 1
                        edi += 1
                        i_5 = i_8
                        i_8 -= 1
                    while (i_5 != 1)
        
        return var_c
    
    if (not(test_bit(data_75c95c, 0)))
        goto label_69da5b
    
    if ((edi & 3) != 0)
        goto label_69da7f
    
    if ((esi & 3) != 0)
        goto label_69da63
    
    if (test_bit(edi, 2))
        int32_t eax_3 = *esi
        count -= 4
        esi = &esi[1]
        *edi = eax_3
        edi = &edi[1]
    
    if (test_bit(edi, 3))
        int64_t xmm1_1 = *esi
        count -= 8
        esi = &esi[2]
        *edi = xmm1_1
        edi = &edi[2]
    
    if ((esi & 7) == 0)
        int128_t xmm1_3 = *(esi - 8)
        void* esi_2 = &esi[-2]
        
        do
            int128_t xmm3_3 = *(esi_2 + 0x10)
            count -= 0x30
            int128_t xmm0_3 = *(esi_2 + 0x20)
            int128_t xmm5_3 = *(esi_2 + 0x30)
            esi_2 += 0x30
            *edi = xmm1_3 u>> 0x40 | xmm3_3 << 0x40
            *(edi + 0x10) = xmm3_3 u>> 0x40 | xmm0_3 << 0x40
            xmm1_3 = xmm5_3
            *(edi + 0x20) = xmm0_3 u>> 0x40 | xmm5_3 << 0x40
            edi = &edi[0xc]
        while (count s>= 0x30)
        
        esi = esi_2 + 8
    else if (not(test_bit(esi, 3)))
        int128_t xmm1_4 = *(esi - 4)
        void* esi_3 = &esi[-1]
        
        do
            int128_t xmm3_5 = *(esi_3 + 0x10)
            count -= 0x30
            int128_t xmm0_5 = *(esi_3 + 0x20)
            int128_t xmm5_5 = *(esi_3 + 0x30)
            esi_3 += 0x30
            *edi = xmm1_4 u>> 0x20 | xmm3_5 << 0x60
            *(edi + 0x10) = xmm3_5 u>> 0x20 | xmm0_5 << 0x60
            xmm1_4 = xmm5_5
            *(edi + 0x20) = xmm0_5 u>> 0x20 | xmm5_5 << 0x60
            edi = &edi[0xc]
        while (count s>= 0x30)
        
        esi = esi_3 + 4
    else
        int128_t xmm1_2 = *(esi - 0xc)
        void* esi_1 = &esi[-3]
        
        do
            int128_t xmm3_1 = *(esi_1 + 0x10)
            count -= 0x30
            int128_t xmm0_1 = *(esi_1 + 0x20)
            int128_t xmm5_1 = *(esi_1 + 0x30)
            esi_1 += 0x30
            *edi = xmm1_2 u>> 0x60 | xmm3_1 << 0x20
            *(edi + 0x10) = xmm3_1 u>> 0x60 | xmm0_1 << 0x20
            xmm1_2 = xmm5_1
            *(edi + 0x20) = xmm0_1 u>> 0x60 | xmm5_1 << 0x20
            edi = &edi[0xc]
        while (count s>= 0x30)
        
        esi = esi_1 + 0xc
    
    while (count s>= 0x10)
        int128_t xmm1_5 = *esi
        count -= 0x10
        esi = &esi[4]
        *edi = xmm1_5
        edi = &edi[4]
    
    if (test_bit(count, 2))
        int32_t eax_4 = *esi
        count -= 4
        esi = &esi[1]
        *edi = eax_4
        edi = &edi[1]
    
    if (test_bit(count, 3))
        int64_t xmm1_6 = *esi
        count -= 8
        esi = &esi[2]
        *edi = xmm1_6
        edi = &edi[2]
    
    switch (count)
        case 1
            goto label_69dba0
        case 2
            goto label_69dbac
        case 3
            goto label_69dbc0

return arg1
