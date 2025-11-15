// 函数: sub_6aadd0
// 地址: 0x6aadd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg4 + 0x194)
uint32_t ecx = *(arg4 + 0x190)
uint32_t eax = *(arg4 + 0x198)
int32_t esi_2 = *(arg4 + 0x78) u>> 0xd & 1
int32_t ebx_1 = *(arg4 + 0x1a4)
char ebx_2 = (*(arg4 + 0x188)).b
int32_t i_21 = *arg3
void* ebp_2 = arg4
int32_t i_22 = i_21

switch (zx.d(arg3[2].b))
    case 0
        eax = zx.d(*(arg3 + 9)) - 1
        
        if (eax u<= 0xf)
            eax = zx.d(lookup_table_6abef4[eax])
            uint32_t ecx_2
            
            switch (eax)
                case 0
                    uint32_t ebx_3 = 7
                    uint32_t var_18_1 = 7
                    
                    if (i_21 != 0)
                        int16_t esi_4 = *(ebp_2 + 0x1c0)
                        int32_t i
                        
                        do
                            eax.b = *arg2
                            ecx_2.b = ebx_3.b
                            arg4.b = eax.b
                            eax.b u>>= ecx_2.b
                            eax.b &= 1
                            eax = zx.d(eax.b)
                            
                            if (eax.w == esi_4)
                                eax.b = *(ebp_2 + 0x170)
                                eax.b <<= var_18_1.b
                                *arg2 = ((0x7f7f s>> (7 - ebx_3.b)).b & arg4.b) | eax.b
                                ebx_3 = var_18_1
                            
                            if (ebx_3 != 0)
                                ebx_3 -= 1
                            else
                                ebx_3 = 7
                                arg2 = &arg2[1]
                            
                            var_18_1 = ebx_3
                            i = i_21
                            i_21 -= 1
                        while (i != 1)
                case 1
                    uint32_t ebx_5 = 6
                    uint32_t var_18_2 = 6
                    
                    if (ecx == 0)
                        if (i_21 != 0)
                            int16_t esi_9 = *(ebp_2 + 0x1c0)
                            int32_t i_1
                            
                            do
                                eax.b = *arg2
                                ecx_2.b = ebx_5.b
                                arg4.b = eax.b
                                eax.b u>>= ecx_2.b
                                eax.b &= 3
                                eax = zx.d(eax.b)
                                
                                if (eax.w == esi_9)
                                    eax.b = *(ebp_2 + 0x170)
                                    eax.b <<= var_18_2.b
                                    *arg2 = ((0x3f3f s>> (6 - ebx_5.b)).b & arg4.b) | eax.b
                                    ebx_5 = var_18_2
                                
                                if (ebx_5 != 0)
                                    ebx_5 -= 2
                                else
                                    ebx_5 = 6
                                    arg2 = &arg2[1]
                                
                                var_18_2 = ebx_5
                                i_1 = i_21
                                i_21 -= 1
                            while (i_1 != 1)
                    else if (i_21 != 0)
                        int16_t esi_5 = *(ebp_2 + 0x1c0)
                        int32_t i_2
                        
                        do
                            ecx_2:1.b = *arg2
                            ecx_2.b = ebx_5.b
                            eax.b = ecx_2:1.b
                            arg4.b = ecx_2:1.b
                            eax.b u>>= ecx_2.b
                            eax.b &= 3
                            char ebx_6
                            
                            if (zx.w(eax.b) != esi_5)
                                uint32_t esi_6 = zx.d(ecx_2:1.b)
                                ecx_2.b = ebx_5.b
                                int32_t esi_8 = esi_6 u>> ecx_2.b & 3
                                ebx_6 = (0x3f3f s>> (6 - ebx_5.b)).b
                                esi_5 = *(ebp_2 + 0x1c0)
                                eax.b = *((((esi_8 << 2 | esi_8) << 2 | esi_8) << 2 | esi_8)
                                    + *(ebp_2 + 0x190))
                                eax.b u>>= 6
                            else
                                eax.b = *(ebp_2 + 0x170)
                                ebx_6 = (0x3f3f s>> (6 - ebx_5.b)).b
                            
                            eax.b <<= var_18_2.b
                            *arg2 = (ebx_6 & arg4.b) | eax.b
                            
                            if (var_18_2 != 0)
                                ebx_5 = var_18_2 - 2
                            else
                                ebx_5 = var_18_2 + 6
                                arg2 = &arg2[1]
                            
                            var_18_2 = ebx_5
                            i_2 = i_21
                            i_21 -= 1
                        while (i_2 != 1)
                case 2
                    uint32_t ebx_9 = 4
                    uint32_t var_18_3 = 4
                    
                    if (ecx == 0)
                        if (i_21 != 0)
                            int16_t esi_14 = *(ebp_2 + 0x1c0)
                            int32_t i_3
                            
                            do
                                eax.b = *arg2
                                ecx_2.b = ebx_9.b
                                arg4.b = eax.b
                                eax.b u>>= ecx_2.b
                                eax.b &= 0xf
                                eax = zx.d(eax.b)
                                
                                if (eax.w == esi_14)
                                    eax.b = *(ebp_2 + 0x170)
                                    eax.b <<= var_18_3.b
                                    *arg2 = ((0xf0f s>> (4 - ebx_9.b)).b & arg4.b) | eax.b
                                    ebx_9 = var_18_3
                                
                                if (ebx_9 != 0)
                                    ebx_9 -= 4
                                else
                                    ebx_9 = 4
                                    arg2 = &arg2[1]
                                
                                var_18_3 = ebx_9
                                i_3 = i_21
                                i_21 -= 1
                            while (i_3 != 1)
                    else if (i_21 != 0)
                        int16_t esi_10 = *(ebp_2 + 0x1c0)
                        int32_t i_4
                        
                        do
                            ecx_2:1.b = *arg2
                            ecx_2.b = ebx_9.b
                            eax.b = ecx_2:1.b
                            arg4.b = ecx_2:1.b
                            eax.b u>>= ecx_2.b
                            eax.b &= 0xf
                            char ebx_10
                            
                            if (zx.w(eax.b) != esi_10)
                                uint32_t esi_11 = zx.d(ecx_2:1.b)
                                ecx_2.b = ebx_9.b
                                int32_t esi_13 = esi_11 u>> ecx_2.b & 0xf
                                ebx_10 = (0xf0f s>> (4 - ebx_9.b)).b
                                esi_10 = *(ebp_2 + 0x1c0)
                                eax.b = *((esi_13 << 4 | esi_13) + *(ebp_2 + 0x190))
                                eax.b u>>= 4
                            else
                                eax.b = *(ebp_2 + 0x170)
                                ebx_10 = (0xf0f s>> (4 - ebx_9.b)).b
                            
                            eax.b <<= var_18_3.b
                            *arg2 = (ebx_10 & arg4.b) | eax.b
                            
                            if (var_18_3 != 0)
                                ebx_9 = var_18_3 - 4
                            else
                                ebx_9 = var_18_3 + 4
                                arg2 = &arg2[1]
                            
                            var_18_3 = ebx_9
                            i_4 = i_21
                            i_21 -= 1
                        while (i_4 != 1)
                case 3
                    if (ecx == 0)
                        if (i_21 != 0)
                            int16_t ecx_12 = *(ebp_2 + 0x1c0)
                            uint16_t eax_10
                            int32_t i_5
                            
                            do
                                eax_10 = zx.w(*arg2)
                                
                                if (eax_10 == ecx_12)
                                    eax_10.b = *(ebp_2 + 0x170)
                                    *arg2 = eax_10.b
                                
                                arg2 = &arg2[1]
                                i_5 = i_21
                                i_21 -= 1
                            while (i_5 != 1)
                            return eax_10
                    else if (i_21 != 0)
                        int16_t esi_15 = *(ebp_2 + 0x1c0)
                        uint32_t eax_9
                        int32_t i_6
                        
                        do
                            ebx_2 = *arg2
                            
                            if (zx.w(ebx_2) != esi_15)
                                eax_9.b = *(zx.d(ebx_2) + ecx)
                            else
                                eax_9.b = *(ebp_2 + 0x170)
                            
                            *arg2 = eax_9.b
                            arg2 = &arg2[1]
                            i_6 = i_21
                            i_21 -= 1
                        while (i_6 != 1)
                        return eax_9
                case 4
                    eax = *(ebp_2 + 0x194)
                    
                    if (eax == 0)
                        if (i_21 != 0)
                            int16_t ebx_13 = *(ebp_2 + 0x1c0)
                            uint16_t eax_19
                            int32_t i_7
                            
                            do
                                eax_19 = zx.w(arg2[1])
                                
                                if (zx.w(*arg2) * 0x100 + eax_19 == ebx_13)
                                    *arg2 = *(ebp_2 + 0x171)
                                    eax_19 = zx.w(*(ebp_2 + 0x170))
                                    arg2[1] = eax_19.b
                                
                                arg2 = &arg2[2]
                                i_7 = i_21
                                i_21 -= 1
                            while (i_7 != 1)
                            return eax_19
                    else if (i_21 != 0)
                        int32_t i_8
                        
                        do
                            eax.b = *arg2
                            ecx_2.b = arg2[1]
                            char var_1a_1 = ecx_2.b
                            ecx_2.w = (zx.d(eax.b) * 0x100).w + zx.w(var_1a_1)
                            
                            if (ecx_2.w != *(ebp_2 + 0x1c0))
                                ecx_2.b = ebx_2
                                ebp_2 = arg4
                                ecx_2 = zx.d(*(*(ebx + (zx.d(var_1a_1) u>> ecx_2.b << 2))
                                    + (zx.d(eax.b) << 1)))
                                arg2[1] = ecx_2.b
                                eax = ecx_2 u>> 8
                                *arg2 = eax.b
                            else
                                *arg2 = *(ebp_2 + 0x171)
                                eax = zx.d(*(ebp_2 + 0x170))
                                arg2[1] = eax.b
                            
                            arg2 = &arg2[2]
                            i_8 = i_21
                            i_21 -= 1
                        while (i_8 != 1)
    case 2
        uint32_t ecx_17 = *(ebp_2 + 0x190)
        
        if (*(arg3 + 9) != 8)
            eax = *(ebp_2 + 0x194)
            
            if (eax == 0)
                if (i_21 != 0)
                    int16_t esi_18 = *(ebp_2 + 0x1ba)
                    void* edx_6 = &arg2[2]
                    uint16_t eax_59
                    int32_t i_9
                    
                    do
                        eax_59 = zx.w(*(edx_6 - 1))
                        
                        if (zx.w(*(edx_6 - 2)) * 0x100 + eax_59 == esi_18)
                            eax_59 = zx.w(*(edx_6 + 1))
                            
                            if (zx.w(*edx_6) * 0x100 + eax_59 == *(ebp_2 + 0x1bc))
                                eax_59 = zx.w(*(edx_6 + 3))
                                
                                if (zx.w(*(edx_6 + 2)) * 0x100 + eax_59 == *(ebp_2 + 0x1be))
                                    *(edx_6 - 2) = *(ebp_2 + 0x16b)
                                    *(edx_6 - 1) = *(ebp_2 + 0x16a)
                                    *edx_6 = *(ebp_2 + 0x16d)
                                    *(edx_6 + 1) = *(ebp_2 + 0x16c)
                                    *(edx_6 + 2) = *(ebp_2 + 0x16f)
                                    eax_59 = zx.w(*(ebp_2 + 0x16e))
                                    *(edx_6 + 3) = eax_59.b
                        
                        edx_6 += 6
                        i_9 = i_21
                        i_21 -= 1
                    while (i_9 != 1)
                    return eax_59
            else if (i_21 != 0)
                void* esi_17 = &arg2[2]
                int32_t i_10
                
                do
                    eax.b = *(esi_17 - 2)
                    ecx_17.b = *(esi_17 - 1)
                    arg4.b = ecx_17.b
                    ecx_17.w = (zx.d(eax.b) * 0x100).w + zx.w(arg4.b)
                    
                    if (ecx_17.w != *(ebp_2 + 0x1ba))
                    label_6ab42b:
                        ecx_17.b = ebx_2
                        uint32_t edx_3 = zx.d(*esi_17)
                        uint32_t ecx_23 = zx.d(*(
                            *(*(ebp_2 + 0x194) + (zx.d(arg4.b) u>> ecx_17.b << 2))
                            + (zx.d(eax.b) << 1)))
                        *(esi_17 - 1) = ecx_23.b
                        uint8_t eax_49 = (ecx_23 u>> 8).b
                        ecx_23.b = ebx_2
                        *(esi_17 - 2) = eax_49
                        int32_t ecx_24
                        ecx_24.b = ebx_2
                        ebx_2 = (*(ebp_2 + 0x188)).b
                        uint32_t edx_4 = zx.d(*(
                            *(*(ebp_2 + 0x194) + (zx.d(*(esi_17 + 1)) u>> ecx_23.b << 2))
                            + (edx_3 << 1)))
                        *(esi_17 + 1) = edx_4.b
                        int32_t edx_5 = *(ebp_2 + 0x194)
                        *esi_17 = (edx_4 u>> 8).b
                        ecx_17 = zx.d(*(*(edx_5 + (zx.d(*(esi_17 + 3)) u>> ecx_24.b << 2))
                            + (zx.d(*(esi_17 + 2)) << 1)))
                        *(esi_17 + 3) = ecx_17.b
                        eax = ecx_17 u>> 8
                        *(esi_17 + 2) = eax.b
                    else
                        ecx_17.w = (zx.d(*esi_17) * 0x100).w + zx.w(*(esi_17 + 1))
                        
                        if (ecx_17.w != *(ebp_2 + 0x1bc))
                            goto label_6ab42b
                        
                        ecx_17.w = (zx.d(*(esi_17 + 2)) * 0x100).w + zx.w(*(esi_17 + 3))
                        
                        if (ecx_17.w != *(ebp_2 + 0x1be))
                            goto label_6ab42b
                        
                        *(esi_17 - 2) = *(ebp_2 + 0x16b)
                        *(esi_17 - 1) = *(ebp_2 + 0x16a)
                        *esi_17 = *(ebp_2 + 0x16d)
                        *(esi_17 + 1) = *(ebp_2 + 0x16c)
                        *(esi_17 + 2) = *(ebp_2 + 0x16f)
                        eax = zx.d(*(ebp_2 + 0x16e))
                        *(esi_17 + 3) = eax.b
                    
                    esi_17 += 6
                    i_10 = i_21
                    i_21 -= 1
                while (i_10 != 1)
        else if (ecx_17 == 0)
            if (i_21 != 0)
                int16_t ecx_18 = *(ebp_2 + 0x1ba)
                void* edx_1 = &arg2[2]
                uint16_t eax_32
                int32_t i_11
                
                do
                    eax_32 = zx.w(*(edx_1 - 2))
                    
                    if (eax_32 == ecx_18)
                        eax_32 = zx.w(*(edx_1 - 1))
                        
                        if (eax_32 == *(ebp_2 + 0x1bc))
                            eax_32 = zx.w(*edx_1)
                            
                            if (eax_32 == *(ebp_2 + 0x1be))
                                *(edx_1 - 2) = *(ebp_2 + 0x16a)
                                *(edx_1 - 1) = *(ebp_2 + 0x16c)
                                eax_32 = zx.w(*(ebp_2 + 0x16e))
                                *edx_1 = eax_32.b
                    
                    edx_1 += 3
                    i_11 = i_21
                    i_21 -= 1
                while (i_11 != 1)
                return eax_32
        else if (i_21 != 0)
            int16_t esi_16 = *(ebp_2 + 0x1ba)
            void* edx = &arg2[2]
            char eax_26
            int32_t i_12
            
            do
                ebx_2 = *(edx - 2)
                
                if (zx.w(ebx_2) != esi_16 || zx.w(*(edx - 1)) != *(ebp_2 + 0x1bc)
                        || zx.w(*edx) != *(ebp_2 + 0x1be))
                    *(edx - 2) = *(zx.d(ebx_2) + ecx_17)
                    *(edx - 1) = *(zx.d(*(edx - 1)) + ecx_17)
                    eax_26 = *(zx.d(*edx) + ecx_17)
                else
                    *(edx - 2) = *(ebp_2 + 0x16a)
                    *(edx - 1) = *(ebp_2 + 0x16c)
                    eax_26 = *(ebp_2 + 0x16e)
                
                *edx = eax_26
                edx += 3
                i_12 = i_21
                i_21 -= 1
            while (i_12 != 1)
            return eax_26
    case 4
        int32_t ecx_32 = *(ebp_2 + 0x190)
        
        if (*(arg3 + 9) != 8)
            int32_t esi_23 = *(ebp_2 + 0x194)
            
            if (esi_23 == 0)
            label_6ab7b6:
                
                if (i_21 != 0)
                    void* ebx_17 = &arg2[1]
                    int32_t i_13
                    
                    do
                        uint32_t eax_88 = zx.d(zx.w(*(ebx_17 + 1)) * 0x100 + zx.w(*(ebx_17 + 2)))
                        
                        if (eax_88.w == 0)
                            *(ebx_17 - 1) = *(ebp_2 + 0x171)
                            *ebx_17 = *(ebp_2 + 0x170)
                        else if (eax_88.w u< 0xffff)
                            int32_t eax_95 = zx.d(*(ebp_2 + 0x170)) * (0xffff - eax_88) + 0x8000
                                + ((zx.d(*(ebx_17 - 1)) << 8) + zx.d(*ebx_17)) * eax_88
                            uint32_t ecx_64 = ((eax_95 u>> 0x10) + eax_95) u>> 0x10
                            *ebx_17 = ecx_64.b
                            *(ebx_17 - 1) = (ecx_64 u>> 8).b
                        
                        ebx_17 += 4
                        i_13 = i_21
                        i_21 -= 1
                    while (i_13 != 1)
                    return 0x100
            else
                eax = *(ebp_2 + 0x1a0)
                
                if (eax == 0)
                    goto label_6ab7b6
                
                eax = *(ebp_2 + 0x1a4)
                
                if (eax == 0)
                    goto label_6ab7b6
                
                if (i_21 != 0)
                    void* ebx_16 = &arg2[1]
                    int32_t i_14
                    
                    do
                        uint32_t eax_69 = zx.d(zx.w(*(ebx_16 + 1)) * 0x100 + zx.w(*(ebx_16 + 2)))
                        int16_t ecx_49
                        uint32_t ecx_51
                        
                        if (eax_69.w == 0xffff)
                            ecx_49.b = *(ebp_2 + 0x188)
                            ecx_51 = zx.d(*(*(esi_23 + (zx.d(*ebx_16) u>> ecx_49.b << 2))
                                + (zx.d(*(ebx_16 - 1)) << 1)))
                            *ebx_16 = ecx_51.b
                            *(ebx_16 - 1) = (ecx_51 u>> 8).b
                        else if (eax_69.w != 0)
                            ecx_49.b = *(ebp_2 + 0x188)
                            int32_t eax_81 = zx.d(*(ebp_2 + 0x17a)) * (0xffff - eax_69) + 0x8000 +
                                zx.d(*(*(*(ebp_2 + 0x1a4) + (zx.d(*ebx_16) u>> ecx_49.b << 2))
                                + (zx.d(*(ebx_16 - 1)) << 1))) * eax_69
                            ecx_51 = ((eax_81 u>> 0x10) + eax_81) u>> 0x10
                            
                            if (esi_2 == 0)
                                uint32_t edx_10 = ecx_51
                                ecx_51.b = *(ebp_2 + 0x188)
                                ecx_51 = zx.d(*(
                                    *(*(ebp_2 + 0x1a0) + (zx.d(edx_10.b) u>> ecx_51.b << 2))
                                    + (edx_10 u>> 8 << 1)))
                            
                            esi_23 = *(ebp_2 + 0x194)
                            *ebx_16 = ecx_51.b
                            *(ebx_16 - 1) = (ecx_51 u>> 8).b
                        else
                            *(ebx_16 - 1) = *(ebp_2 + 0x171)
                            *ebx_16 = *(ebp_2 + 0x170)
                        ebx_16 += 4
                        i_14 = i_21
                        i_21 -= 1
                    while (i_14 != 1)
                    return 0x100
        else if (*(ebp_2 + 0x19c) == 0 || eax == 0 || ecx_32 == 0)
            if (i_21 != 0)
                int32_t i_15
                
                do
                    eax.b = arg2[1]
                    
                    if (eax.b == 0)
                        eax.b = *(ebp_2 + 0x170)
                        *arg2 = eax.b
                    else if (eax.b u< 0xff)
                        uint16_t esi_22 = zx.w(eax.b)
                        eax = zx.d(zx.w(*arg2) * esi_22 + (0xff - esi_22) * *(ebp_2 + 0x170) + 0x80)
                        i_21 = i_22
                        *arg2 = (((eax u>> 8) + eax) u>> 8).b
                    
                    arg2 = &arg2[2]
                    i_15 = i_21
                    i_21 -= 1
                    i_22 = i_21
                while (i_15 != 1)
        else if (i_21 != 0)
            int32_t i_16
            
            do
                uint16_t ebx_15 = zx.w(arg2[1])
                
                if (ebx_15 == 0xff)
                    eax.b = *(zx.d(*arg2) + ecx_32)
                    *arg2 = eax.b
                else if (ebx_15 != 0)
                    eax = zx.d(zx.w(*(zx.d(*arg2) + *(ebp_2 + 0x19c))) * ebx_15
                        + (0xff - ebx_15) * *(ebp_2 + 0x17a) + 0x80)
                    uint32_t ecx_40 = ((eax u>> 8) + eax) u>> 8
                    
                    if (esi_2 == 0)
                        eax = zx.d(ecx_40.b)
                        ecx_40.b = *(eax + *(ebp_2 + 0x198))
                    
                    *arg2 = ecx_40.b
                    ecx_32 = *(ebp_2 + 0x190)
                else
                    eax.b = *(ebp_2 + 0x170)
                    *arg2 = eax.b
                
                arg2 = &arg2[2]
                i_16 = i_21
                i_21 -= 1
            while (i_16 != 1)
    case 6
        int32_t ecx_65 = *(ebp_2 + 0x190)
        
        if (*(arg3 + 9) != 8)
            eax = *(ebp_2 + 0x194)
            
            if (eax == 0)
            label_6abd7f:
                
                if (i_21 != 0)
                    void* ebx_20 = &arg2[1]
                    int32_t i_17
                    
                    do
                        uint32_t eax_179 = zx.d(zx.w(*(ebx_20 + 5)) * 0x100 + zx.w(*(ebx_20 + 6)))
                        
                        if (eax_179.w == 0)
                            *(ebx_20 - 1) = *(ebp_2 + 0x16b)
                            *ebx_20 = *(ebp_2 + 0x16a)
                            *(ebx_20 + 1) = *(ebp_2 + 0x16d)
                            *(ebx_20 + 2) = *(ebp_2 + 0x16c)
                            *(ebx_20 + 3) = *(ebp_2 + 0x16f)
                            *(ebx_20 + 4) = *(ebp_2 + 0x16e)
                        else if (eax_179.w u< 0xffff)
                            int32_t eax_189 = zx.d(*(ebp_2 + 0x16a)) * (0xffff - eax_179)
                                + ((zx.d(*(ebx_20 - 1)) << 8) + zx.d(*ebx_20)) * eax_179 + 0x8000
                            uint32_t ecx_156 = ((eax_189 u>> 0x10) + eax_189) u>> 0x10
                            *ebx_20 = ecx_156.b
                            uint32_t ecx_158 = zx.d(*(ebx_20 + 1)) << 8
                            *(ebx_20 - 1) = (ecx_156 u>> 8).b
                            int32_t eax_195 = zx.d(*(ebp_2 + 0x16c)) * (0xffff - eax_179)
                                + (ecx_158 + zx.d(*(ebx_20 + 2))) * eax_179 + 0x8000
                            uint32_t ecx_165 = ((eax_195 u>> 0x10) + eax_195) u>> 0x10
                            *(ebx_20 + 2) = ecx_165.b
                            uint32_t ecx_167 = zx.d(*(ebx_20 + 3)) << 8
                            *(ebx_20 + 1) = (ecx_165 u>> 8).b
                            int32_t eax_201 = zx.d(*(ebp_2 + 0x16e)) * (0xffff - eax_179)
                                + (ecx_167 + zx.d(*(ebx_20 + 4))) * eax_179 + 0x8000
                            uint32_t ecx_174 = ((eax_201 u>> 0x10) + eax_201) u>> 0x10
                            *(ebx_20 + 4) = ecx_174.b
                            *(ebx_20 + 3) = (ecx_174 u>> 8).b
                        
                        ebx_20 += 8
                        eax = 0x100
                        i_17 = i_21
                        i_21 -= 1
                    while (i_17 != 1)
            else
                eax = *(ebp_2 + 0x1a0)
                
                if (eax == 0)
                    goto label_6abd7f
                
                eax = *(ebp_2 + 0x1a4)
                
                if (eax == 0)
                    goto label_6abd7f
                
                if (i_21 != 0)
                    void* esi_32 = &arg2[1]
                    int32_t i_18
                    
                    do
                        uint32_t eax_125 = zx.d(zx.w(*(esi_32 + 5)) * 0x100 + zx.w(*(esi_32 + 6)))
                        uint32_t ecx_118
                        
                        if (eax_125.w == 0xffff)
                            int16_t ecx_113
                            ecx_113.b = ebx_2
                            uint32_t edx_27 = zx.d(*(esi_32 + 1))
                            uint32_t ecx_115 = zx.d(*(
                                *(*(ebp_2 + 0x194) + (zx.d(*esi_32) u>> ecx_113.b << 2))
                                + (zx.d(*(esi_32 - 1)) << 1)))
                            *esi_32 = ecx_115.b
                            uint8_t eax_130 = (ecx_115 u>> 8).b
                            ecx_115.b = ebx_2
                            *(esi_32 - 1) = eax_130
                            int32_t ecx_116
                            ecx_116.b = ebx_2
                            ebx_2 = (*(ebp_2 + 0x188)).b
                            uint32_t edx_28 = zx.d(*(
                                *(*(ebp_2 + 0x194) + (zx.d(*(esi_32 + 2)) u>> ecx_115.b << 2))
                                + (edx_27 << 1)))
                            *(esi_32 + 2) = edx_28.b
                            int32_t edx_29 = *(ebp_2 + 0x194)
                            *(esi_32 + 1) = (edx_28 u>> 8).b
                            ecx_118 = zx.d(*(*(edx_29 + (zx.d(*(esi_32 + 4)) u>> ecx_116.b << 2))
                                + (zx.d(*(esi_32 + 3)) << 1)))
                            *(esi_32 + 4) = ecx_118.b
                            *(esi_32 + 3) = (ecx_118 u>> 8).b
                        else if (eax_125.w != 0)
                            int32_t edx_30 = 0xffff - eax_125
                            int32_t var_c_1 = edx_30
                            int32_t eax_150 = zx.d(*(arg4 + 0x174)) * edx_30 + zx.d(*(
                                *(ebx_1 + (zx.d(*esi_32) u>> ebx_2 << 2))
                                + (zx.d(*(esi_32 - 1)) << 1))) * eax_125 + 0x8000
                            uint32_t ecx_127 = ((eax_150 u>> 0x10) + eax_150) u>> 0x10
                            
                            if (esi_2 == 0)
                                uint32_t edx_31 = ecx_127
                                ecx_127.b = ebx_2
                                ecx_127 = zx.d(*(
                                    *(*(arg4 + 0x1a0) + (zx.d(edx_31.b) u>> ecx_127.b << 2))
                                    + (edx_31 u>> 8 << 1)))
                                edx_30 = var_c_1
                            
                            uint8_t eax_155 = (ecx_127 u>> 8).b
                            *esi_32 = ecx_127.b
                            ecx_127.b = ebx_2
                            *(esi_32 - 1) = eax_155
                            int32_t eax_161 = zx.d(*(arg4 + 0x176)) * edx_30 + zx.d(*(
                                *(ebx_1 + (zx.d(*(esi_32 + 2)) u>> ecx_127.b << 2))
                                + (zx.d(*(esi_32 + 1)) << 1))) * eax_125 + 0x8000
                            uint32_t ecx_136 = ((eax_161 u>> 0x10) + eax_161) u>> 0x10
                            
                            if (esi_2 == 0)
                                uint32_t edx_33 = ecx_136
                                ecx_136.b = ebx_2
                                ecx_136 = zx.d(*(
                                    *(*(arg4 + 0x1a0) + (zx.d(edx_33.b) u>> ecx_136.b << 2))
                                    + (edx_33 u>> 8 << 1)))
                                edx_30 = var_c_1
                            
                            uint8_t eax_166 = (ecx_136 u>> 8).b
                            *(esi_32 + 2) = ecx_136.b
                            ecx_136.b = ebx_2
                            *(esi_32 + 1) = eax_166
                            ebp_2 = arg4
                            int32_t eax_172 = zx.d(*(ebp_2 + 0x178)) * edx_30 + zx.d(*(
                                *(ebx_1 + (zx.d(*(esi_32 + 4)) u>> ecx_136.b << 2))
                                + (zx.d(*(esi_32 + 3)) << 1))) * eax_125 + 0x8000
                            ecx_118 = ((eax_172 u>> 0x10) + eax_172) u>> 0x10
                            
                            if (esi_2 == 0)
                                uint32_t edx_35 = ecx_118
                                ecx_118.b = ebx_2
                                ecx_118 = zx.d(*(
                                    *(*(ebp_2 + 0x1a0) + (zx.d(edx_35.b) u>> ecx_118.b << 2))
                                    + (edx_35 u>> 8 << 1)))
                            
                            *(esi_32 + 4) = ecx_118.b
                            *(esi_32 + 3) = (ecx_118 u>> 8).b
                        else
                            *(esi_32 - 1) = *(ebp_2 + 0x16b)
                            *esi_32 = *(ebp_2 + 0x16a)
                            *(esi_32 + 1) = *(ebp_2 + 0x16d)
                            *(esi_32 + 2) = *(ebp_2 + 0x16c)
                            *(esi_32 + 3) = *(ebp_2 + 0x16f)
                            *(esi_32 + 4) = *(ebp_2 + 0x16e)
                        esi_32 += 8
                        i_18 = i_21
                        i_21 -= 1
                    while (i_18 != 1)
                    return 0x100
        else if (*(ebp_2 + 0x19c) == 0 || eax == 0 || ecx_65 == 0)
            if (i_21 != 0)
                void* ebx_18 = &arg2[1]
                int32_t i_19
                
                do
                    eax.b = *(ebx_18 + 2)
                    
                    if (eax.b == 0)
                        *(ebx_18 - 1) = *(ebp_2 + 0x16a)
                        *ebx_18 = *(ebp_2 + 0x16c)
                        eax = zx.d(*(ebp_2 + 0x16e))
                        *(ebx_18 + 1) = eax.b
                    else if (eax.b u< 0xff)
                        uint16_t esi_31 = zx.w(eax.b)
                        uint32_t eax_120 = zx.d(zx.w(*(ebx_18 - 1)) * esi_31
                            + (0xff - esi_31) * *(ebp_2 + 0x16a) + 0x80)
                        int16_t edx_23 = zx.w(*ebx_18) * esi_31
                        int16_t eax_121 = *(ebp_2 + 0x16c)
                        *(ebx_18 - 1) = (((eax_120 u>> 8) + eax_120) u>> 8).b
                        uint32_t eax_122 = zx.d(edx_23 + (0xff - esi_31) * eax_121 + 0x80)
                        int16_t edx_25 = zx.w(*(ebx_18 + 1)) * esi_31
                        *ebx_18 = (((eax_122 u>> 8) + eax_122) u>> 8).b
                        i_21 = i_22
                        eax = zx.d(edx_25 + *(ebp_2 + 0x16e) * (0xff - esi_31) + 0x80)
                        *(ebx_18 + 1) = (((eax u>> 8) + eax) u>> 8).b
                    
                    ebx_18 += 4
                    i_19 = i_21
                    i_21 -= 1
                    i_22 = i_21
                while (i_19 != 1)
        else if (i_21 != 0)
            char* esi_30 = &arg2[1]
            int32_t i_20
            
            do
                eax.b = esi_30[2]
                
                if (eax.b == 0xff)
                    esi_30[0xffffffff] = *(zx.d(esi_30[0xffffffff]) + ecx_65)
                    *esi_30 = *(zx.d(*esi_30) + ecx_65)
                    eax = zx.d(*(zx.d(esi_30[1]) + ecx_65))
                    esi_30[1] = eax.b
                else if (eax.b != 0)
                    uint32_t ecx_66 = zx.d(eax.b)
                    int16_t var_10_1 = ecx_66.w
                    uint32_t eax_109 = zx.d(
                        zx.w(*(zx.d(esi_30[0xffffffff]) + *(ebp_2 + 0x19c))) * ecx_66.w
                        + *(ebp_2 + 0x174) * (0xff - ecx_66).w + 0x80)
                    uint32_t ecx_73 = ((eax_109 u>> 8) + eax_109) u>> 8
                    
                    if (esi_2 == 0)
                        ecx_73.b = *(zx.d(ecx_73.b) + *(ebp_2 + 0x198))
                    
                    uint32_t eax_111 = zx.d(*esi_30)
                    esi_30[0xffffffff] = ecx_73.b
                    uint32_t eax_113 = zx.d(zx.w(*(eax_111 + *(ebp_2 + 0x19c))) * var_10_1
                        + (0xff - ecx_66).w * *(ebp_2 + 0x176) + 0x80)
                    uint32_t ecx_83 = ((eax_113 u>> 8) + eax_113) u>> 8
                    
                    if (esi_2 == 0)
                        ecx_83.b = *(zx.d(ecx_83.b) + *(ebp_2 + 0x198))
                    
                    uint32_t eax_115 = zx.d(esi_30[1])
                    *esi_30 = ecx_83.b
                    eax = zx.d(zx.w(*(eax_115 + *(ebp_2 + 0x19c))) * var_10_1
                        + (0xff - ecx_66).w * *(ebp_2 + 0x178) + 0x80)
                    uint32_t ecx_93 = ((eax u>> 8) + eax) u>> 8
                    
                    if (esi_2 == 0)
                        eax = zx.d(ecx_93.b)
                        ecx_93.b = *(eax + *(ebp_2 + 0x198))
                    
                    esi_30[1] = ecx_93.b
                    ecx_65 = *(ebp_2 + 0x190)
                else
                    esi_30[0xffffffff] = *(ebp_2 + 0x16a)
                    *esi_30 = *(ebp_2 + 0x16c)
                    eax = zx.d(*(ebp_2 + 0x16e))
                    esi_30[1] = eax.b
                
                esi_30 = &esi_30[4]
                i_20 = i_21
                i_21 -= 1
            while (i_20 != 1)

return eax
