// 函数: sub_62dc70
// 地址: 0x62dc70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char ebx = (*(arg4 + 0x188)).b
int32_t ecx_2 = *(arg4 + 0x78) u>> 0xd & 1
int32_t esi = *(arg4 + 0x190)
char* edi = arg2
int32_t edx = *(arg4 + 0x198)
int32_t i_21 = *arg3
uint32_t result = arg4
int32_t i_22 = i_21
uint32_t ecx_6

switch (zx.d(arg3[2].b))
    case 0
        switch (zx.d(*(arg3 + 9)) - 1)
            case 0
                uint32_t ebx_1 = 7
                arg4 = 7
                
                if (i_21 != 0)
                    int16_t esi_3 = *(result + 0x1c0)
                    int32_t i
                    
                    do
                        edx:1.b = *edi
                        ecx_6.b = ebx_1.b
                        edx.b = edx:1.b
                        edx.b u>>= ecx_6.b
                        edx.b &= 1
                        
                        if (zx.w(edx.b) == esi_3)
                            edx.b = *(result + 0x170)
                            char ebx_2 = (0x7f7f s>> (7 - ebx_1.b)).b & edx:1.b
                            edx.b <<= arg4.b
                            *edi = ebx_2 | edx.b
                            ebx_1 = arg4
                        
                        if (ebx_1 != 0)
                            ebx_1 -= 1
                        else
                            ebx_1 = 7
                            edi = &edi[1]
                        
                        arg4 = ebx_1
                        i = i_21
                        i_21 -= 1
                    while (i != 1)
            case 1
                uint32_t ebx_3 = 6
                
                if (esi == 0)
                    arg4 = 6
                    
                    if (i_21 != 0)
                        int16_t esi_4 = *(result + 0x1c0)
                        int32_t i_1
                        
                        do
                            edx:1.b = *edi
                            ecx_6.b = ebx_3.b
                            edx.b = edx:1.b
                            edx.b u>>= ecx_6.b
                            edx.b &= 3
                            
                            if (zx.w(edx.b) == esi_4)
                                edx.b = *(result + 0x170)
                                char ebx_6 = (0x3f3f s>> (6 - ebx_3.b)).b & edx:1.b
                                edx.b <<= arg4.b
                                *edi = ebx_6 | edx.b
                                ebx_3 = arg4
                            
                            if (ebx_3 != 0)
                                ebx_3 -= 2
                            else
                                ebx_3 = 6
                                edi = &edi[1]
                            
                            arg4 = ebx_3
                            i_1 = i_21
                            i_21 -= 1
                        while (i_1 != 1)
                else
                    uint32_t var_10_1 = 6
                    
                    if (i_21 != 0)
                        int16_t var_4_1 = *(result + 0x1c0)
                        int32_t i_2
                        
                        do
                            edx:1.b = *edi
                            uint32_t ecx_8
                            ecx_8.b = ebx_3.b
                            edx.b = edx:1.b
                            arg4.b = edx:1.b
                            edx.b u>>= ecx_8.b
                            edx.b &= 3
                            char ebx_4
                            
                            if (zx.w(edx.b) != var_4_1)
                                uint16_t ecx_9
                                ecx_9.b = ebx_3.b
                                edx = zx.d(edx:1.b) u>> ecx_9.b & 3
                                ebx_4 = (0x3f3f s>> (6 - ebx_3.b)).b & arg4.b
                                edx.b = (((edx << 2 | edx) << 2 | edx) << 2 | edx)[esi]
                                edx.b u>>= 6
                            else
                                edx.b = *(result + 0x170)
                                ebx_4 = (0x3f3f s>> (6 - ebx_3.b)).b & edx:1.b
                            
                            edx.b <<= var_10_1.b
                            *edi = ebx_4 | edx.b
                            
                            if (var_10_1 != 0)
                                ebx_3 = var_10_1 - 2
                            else
                                ebx_3 = var_10_1 + 6
                                edi = &edi[1]
                            
                            var_10_1 = ebx_3
                            i_2 = i_21
                            i_21 -= 1
                        while (i_2 != 1)
            case 3
                uint32_t ebx_7 = 4
                
                if (esi == 0)
                    arg4 = 4
                    
                    if (i_21 != 0)
                        int16_t esi_5 = *(result + 0x1c0)
                        int32_t i_3
                        
                        do
                            edx:1.b = *edi
                            ecx_6.b = ebx_7.b
                            edx.b = edx:1.b
                            edx.b u>>= ecx_6.b
                            edx.b &= 0xf
                            
                            if (zx.w(edx.b) == esi_5)
                                edx.b = *(result + 0x170)
                                char ebx_10 = (0xf0f s>> (4 - ebx_7.b)).b & edx:1.b
                                edx.b <<= arg4.b
                                *edi = ebx_10 | edx.b
                                ebx_7 = arg4
                            
                            if (ebx_7 != 0)
                                ebx_7 -= 4
                            else
                                ebx_7 = 4
                                edi = &edi[1]
                            
                            arg4 = ebx_7
                            i_3 = i_21
                            i_21 -= 1
                        while (i_3 != 1)
                else
                    uint32_t var_10_2 = 4
                    
                    if (i_21 != 0)
                        int16_t var_4_2 = *(result + 0x1c0)
                        int32_t i_4
                        
                        do
                            edx:1.b = *edi
                            uint32_t ecx_19
                            ecx_19.b = ebx_7.b
                            edx.b = edx:1.b
                            arg4.b = edx:1.b
                            edx.b u>>= ecx_19.b
                            edx.b &= 0xf
                            char ebx_8
                            
                            if (zx.w(edx.b) != var_4_2)
                                uint16_t ecx_20
                                ecx_20.b = ebx_7.b
                                edx = zx.d(edx:1.b) u>> ecx_20.b & 0xf
                                ebx_8 = (0xf0f s>> (4 - ebx_7.b)).b & arg4.b
                                edx.b = (edx << 4 | edx)[esi]
                                edx.b u>>= 4
                            else
                                edx.b = *(result + 0x170)
                                ebx_8 = (0xf0f s>> (4 - ebx_7.b)).b & edx:1.b
                            
                            edx.b <<= var_10_2.b
                            *edi = ebx_8 | edx.b
                            
                            if (var_10_2 != 0)
                                ebx_7 = var_10_2 - 4
                            else
                                ebx_7 = var_10_2 + 4
                                edi = &edi[1]
                            
                            var_10_2 = ebx_7
                            i_4 = i_21
                            i_21 -= 1
                        while (i_4 != 1)
            case 7
                if (esi == 0)
                    if (i_21 != 0)
                        int16_t edx_5 = *(result + 0x1c0)
                        int32_t i_5
                        
                        do
                            if (zx.w(*edi) == edx_5)
                                uint16_t ecx_28
                                ecx_28.b = *(result + 0x170)
                                *edi = ecx_28.b
                            
                            edi = &edi[1]
                            i_5 = i_21
                            i_21 -= 1
                        while (i_5 != 1)
                else if (i_21 != 0)
                    int16_t ebx_11 = *(result + 0x1c0)
                    int32_t i_6
                    
                    do
                        edx.b = *edi
                        uint32_t ecx_27
                        
                        if (zx.w(edx.b) != ebx_11)
                            ecx_27.b = *(zx.d(edx.b) + esi)
                        else
                            ecx_27.b = *(result + 0x170)
                        
                        *edi = ecx_27.b
                        edi = &edi[1]
                        i_6 = i_21
                        i_21 -= 1
                    while (i_6 != 1)
            case 0xf
                if (*(result + 0x194) == 0)
                    if (i_21 != 0)
                        int16_t esi_9 = *(result + 0x1c0)
                        int32_t i_7
                        
                        do
                            if (zx.w(*edi) * 0x100 + zx.w(edi[1]) == esi_9)
                                uint16_t ecx_32
                                ecx_32.b = *(result + 0x171)
                                *edi = ecx_32.b
                                ecx_32.b = *(result + 0x170)
                                edi[1] = ecx_32.b
                            
                            edi = &edi[2]
                            i_7 = i_21
                            i_21 -= 1
                        while (i_7 != 1)
                else if (i_21 != 0)
                    int16_t esi_6 = *(result + 0x1c0)
                    int32_t i_8
                    
                    do
                        ecx_6.b = *edi
                        ecx_6:1.b = edi[1]
                        char var_11_1 = ecx_6.b
                        arg4.b = ecx_6:1.b
                        
                        if (zx.w(ecx_6.b) * 0x100 + zx.w(ecx_6:1.b) != esi_6)
                            ecx_6.b = *(result + 0x188)
                            esi_6 = *(result + 0x1c0)
                            uint32_t edx_8 = zx.d(*(
                                *(*(result + 0x194) + (zx.d(arg4.b) u>> ecx_6.b << 2))
                                + (zx.d(var_11_1) << 1)))
                            edi[1] = edx_8.b
                            *edi = (edx_8 u>> 8).b
                        else
                            ecx_6.b = *(result + 0x171)
                            *edi = ecx_6.b
                            ecx_6.b = *(result + 0x170)
                            edi[1] = ecx_6.b
                        
                        edi = &edi[2]
                        i_8 = i_21
                        i_21 -= 1
                    while (i_8 != 1)
    case 2
        int32_t esi_10 = *(result + 0x190)
        
        if (*(arg3 + 9) != 8)
            if (*(result + 0x194) == 0)
                if (i_21 != 0)
                    int16_t esi_17 = *(result + 0x1ba)
                    void* edi_4 = &edi[2]
                    int32_t i_9
                    
                    do
                        if (zx.w(*(edi_4 - 2)) * 0x100 + zx.w(*(edi_4 - 1)) == esi_17
                                && zx.w(*edi_4) * 0x100 + zx.w(*(edi_4 + 1)) == *(result + 0x1bc)
                                && zx.w(*(edi_4 + 2)) * 0x100 + zx.w(*(edi_4 + 3))
                                == *(result + 0x1be))
                            uint16_t ecx_56
                            ecx_56.b = *(result + 0x16b)
                            *(edi_4 - 2) = ecx_56.b
                            ecx_56.b = *(result + 0x16a)
                            *(edi_4 - 1) = ecx_56.b
                            ecx_56.b = *(result + 0x16d)
                            *edi_4 = ecx_56.b
                            ecx_56.b = *(result + 0x16c)
                            *(edi_4 + 1) = ecx_56.b
                            ecx_56.b = *(result + 0x16f)
                            *(edi_4 + 2) = ecx_56.b
                            ecx_56.b = *(result + 0x16e)
                            *(edi_4 + 3) = ecx_56.b
                        
                        edi_4 += 6
                        i_9 = i_21
                        i_21 -= 1
                    while (i_9 != 1)
            else if (i_21 != 0)
                int16_t esi_11 = *(result + 0x1ba)
                void* edi_3 = &edi[2]
                int32_t i_10
                
                do
                    uint32_t ecx_41
                    ecx_41.b = *(edi_3 - 2)
                    ecx_41:1.b = *(edi_3 - 1)
                    arg4.b = ecx_41:1.b
                    
                    if (zx.w(ecx_41.b) * 0x100 + zx.w(ecx_41:1.b) != esi_11
                            || zx.w(*edi_3) * 0x100 + zx.w(*(edi_3 + 1)) != *(result + 0x1bc)
                            || zx.w(*(edi_3 + 2)) * 0x100 + zx.w(*(edi_3 + 3))
                            != *(result + 0x1be))
                        char ebx_13 = (*(result + 0x188)).b
                        uint32_t esi_14 = zx.d(*edi_3)
                        uint32_t edx_15 = zx.d(*(
                            *(*(result + 0x194) + (zx.d(arg4.b) u>> ebx_13 << 2))
                            + (zx.d(ecx_41.b) << 1)))
                        *(edi_3 - 1) = edx_15.b
                        uint32_t edx_16 = zx.d(*(edi_3 + 1))
                        *(edi_3 - 2) = (edx_15 u>> 8).b
                        uint32_t ecx_50 =
                            zx.d(*(*(*(result + 0x194) + (edx_16 u>> ebx_13 << 2)) + (esi_14 << 1)))
                        uint32_t esi_15 = zx.d(*(edi_3 + 3))
                        uint32_t edx_19 = ecx_50
                        *(edi_3 + 1) = ecx_50.b
                        ecx_50.b = ebx_13
                        int32_t ecx_51 = *(result + 0x194)
                        *edi_3 = (edx_19 u>> 8).b
                        esi_11 = *(result + 0x1ba)
                        uint32_t edx_22 = zx.d(
                            *(*(ecx_51 + (esi_15 u>> ecx_50.b << 2)) + (zx.d(*(edi_3 + 2)) << 1)))
                        *(edi_3 + 3) = edx_22.b
                        *(edi_3 + 2) = (edx_22 u>> 8).b
                    else
                        ecx_41.b = *(result + 0x16b)
                        *(edi_3 - 2) = ecx_41.b
                        ecx_41.b = *(result + 0x16a)
                        *(edi_3 - 1) = ecx_41.b
                        ecx_41.b = *(result + 0x16d)
                        *edi_3 = ecx_41.b
                        ecx_41.b = *(result + 0x16c)
                        *(edi_3 + 1) = ecx_41.b
                        ecx_41.b = *(result + 0x16f)
                        *(edi_3 + 2) = ecx_41.b
                        ecx_41.b = *(result + 0x16e)
                        *(edi_3 + 3) = ecx_41.b
                    
                    edi_3 += 6
                    i_10 = i_21
                    i_21 -= 1
                while (i_10 != 1)
        else if (esi_10 == 0)
            if (i_21 != 0)
                int16_t edx_10 = *(result + 0x1ba)
                void* edi_2 = &edi[2]
                int32_t i_11
                
                do
                    if (zx.w(*(edi_2 - 2)) == edx_10 && zx.w(*(edi_2 - 1)) == *(result + 0x1bc)
                            && zx.w(*edi_2) == *(result + 0x1be))
                        uint16_t ecx_40
                        ecx_40.b = *(result + 0x16a)
                        *(edi_2 - 2) = ecx_40.b
                        ecx_40.b = *(result + 0x16c)
                        *(edi_2 - 1) = ecx_40.b
                        ecx_40.b = *(result + 0x16e)
                        *edi_2 = ecx_40.b
                    
                    edi_2 += 3
                    i_11 = i_21
                    i_21 -= 1
                while (i_11 != 1)
        else if (i_21 != 0)
            int16_t ebx_12 = *(result + 0x1ba)
            void* edi_1 = &edi[2]
            int32_t i_12
            
            do
                edx.b = *(edi_1 - 2)
                uint32_t ecx_35
                
                if (zx.w(edx.b) != ebx_12 || zx.w(*(edi_1 - 1)) != *(result + 0x1bc)
                        || zx.w(*edi_1) != *(result + 0x1be))
                    uint32_t ecx_36
                    ecx_36.b = *(zx.d(edx.b) + esi_10)
                    *(edi_1 - 2) = ecx_36.b
                    uint32_t ecx_37
                    ecx_37.b = *(zx.d(*(edi_1 - 1)) + esi_10)
                    *(edi_1 - 1) = ecx_37.b
                    ecx_35.b = *(zx.d(*edi_1) + esi_10)
                else
                    ecx_35.b = *(result + 0x16a)
                    *(edi_1 - 2) = ecx_35.b
                    ecx_35.b = *(result + 0x16c)
                    *(edi_1 - 1) = ecx_35.b
                    ecx_35.b = *(result + 0x16e)
                
                *edi_1 = ecx_35.b
                edi_1 += 3
                i_12 = i_21
                i_21 -= 1
            while (i_12 != 1)
    case 4
        int32_t esi_18 = *(result + 0x190)
        
        if (*(arg3 + 9) != 8)
            if (*(result + 0x194) == 0 || *(result + 0x1a0) == 0 || *(result + 0x1a4) == 0)
                if (i_21 != 0)
                    void* esi_26 = &edi[1]
                    arg4 = esi_26
                    int32_t i_13
                    
                    do
                        uint32_t ecx_84 = zx.d(zx.w(*(esi_26 + 1)) * 0x100 + zx.w(*(esi_26 + 2)))
                        
                        if (ecx_84.w == 0)
                            ecx_84.b = *(result + 0x171)
                            *(esi_26 - 1) = ecx_84.b
                            ecx_84.b = *(result + 0x170)
                            *esi_26 = ecx_84.b
                        else if (ecx_84.w u< 0xffff)
                            int32_t ecx_88 = zx.d(*(result + 0x170)) * (0xffff - ecx_84)
                                + zx.d(zx.w(*(esi_26 - 1)) * 0x100 + zx.w(*esi_26)) * ecx_84
                                + 0x8000
                            esi_26 = arg4
                            uint32_t edx_53 = ((ecx_88 u>> 0x10) + ecx_88) u>> 0x10
                            *esi_26 = edx_53.b
                            *(esi_26 - 1) = (edx_53 u>> 8).b
                        
                        esi_26 += 4
                        arg4 = esi_26
                        i_13 = i_21
                        i_21 -= 1
                    while (i_13 != 1)
            else if (i_21 != 0)
                uint32_t ebx_14 = &edi[1]
                arg4 = ebx_14
                int32_t i_14
                
                do
                    uint32_t ecx_67 = zx.d(zx.w(*(ebx_14 + 1)) * 0x100 + zx.w(*(ebx_14 + 2)))
                    uint32_t edx_39
                    
                    if (ecx_67.w == 0xffff)
                        edx_39 = zx.d(*(
                            *(*(result + 0x194) + (zx.d(*ebx_14) u>> (*(result + 0x188)).b << 2))
                            + (zx.d(*(ebx_14 - 1)) << 1)))
                        *ebx_14 = edx_39.b
                        *(ebx_14 - 1) = (edx_39 u>> 8).b
                    else if (ecx_67.w != 0)
                        int32_t ecx_77 = zx.d(*(result + 0x17a)) * (0xffff - ecx_67) + 0x8000 + zx
                            .d(*(
                            *(*(result + 0x1a4) + (zx.d(*ebx_14) u>> (*(result + 0x188)).b << 2))
                            + (zx.d(*(ebx_14 - 1)) << 1))) * ecx_67
                        edx_39 = ((ecx_77 u>> 0x10) + ecx_77) u>> 0x10
                        
                        if (ecx_2 == 0)
                            edx_39 = zx.d(*(*(*(result + 0x1a0)
                                + (zx.d(edx_39.b) u>> (*(result + 0x188)).b << 2))
                                + (edx_39 u>> 8 << 1)))
                            ebx_14 = arg4
                        
                        *ebx_14 = edx_39.b
                        *(ebx_14 - 1) = (edx_39 u>> 8).b
                    else
                        ecx_67.b = *(result + 0x171)
                        *(ebx_14 - 1) = ecx_67.b
                        ecx_67.b = *(result + 0x170)
                        *ebx_14 = ecx_67.b
                    ebx_14 += 4
                    arg4 = ebx_14
                    i_14 = i_21
                    i_21 -= 1
                while (i_14 != 1)
        else if (*(result + 0x19c) == 0 || edx == 0 || esi_18 == 0)
            if (i_21 != 0)
                int32_t i_15
                
                do
                    uint32_t ecx_57
                    ecx_57.b = edi[1]
                    
                    if (ecx_57.b == 0)
                        ecx_57.b = *(result + 0x170)
                        *edi = ecx_57.b
                    else if (ecx_57.b u< 0xff)
                        uint16_t edx_32 = zx.w(ecx_57.b)
                        ecx_57 =
                            zx.d(zx.w(*edi) * edx_32 + (0xff - edx_32) * *(result + 0x170) + 0x80)
                        *edi = (((ecx_57 u>> 8) + ecx_57) s>> 8).b
                    
                    edi = &edi[2]
                    i_15 = i_21
                    i_21 -= 1
                while (i_15 != 1)
        else if (i_21 != 0)
            int32_t i_16
            
            do
                uint32_t ecx_59 = zx.d(edi[1])
                
                if (ecx_59.w == 0xff)
                    uint32_t ecx_58
                    ecx_58.b = *(zx.d(*edi) + esi_18)
                    *edi = ecx_58.b
                else if (ecx_59.w != 0)
                    uint32_t ecx_62 = zx.d(zx.w(*(zx.d(*edi) + *(result + 0x19c))) * ecx_59.w
                        + (0xff - ecx_59.w) * *(result + 0x17a) + 0x80)
                    int32_t edx_31 = ((ecx_62 u>> 8) + ecx_62) s>> 8
                    
                    if (ecx_2 == 0)
                        edx_31.b = zx.d(edx_31.b)[*(result + 0x198)]
                    
                    *edi = edx_31.b
                else
                    ecx_59.b = *(result + 0x170)
                    *edi = ecx_59.b
                
                edi = &edi[2]
                i_16 = i_21
                i_21 -= 1
            while (i_16 != 1)
    case 6
        int32_t esi_30 = *(result + 0x190)
        
        if (*(arg3 + 9) != 8)
            if (*(result + 0x194) == 0 || *(result + 0x1a0) == 0 || *(result + 0x1a4) == 0)
                if (i_21 != 0)
                    void* esi_43 = &edi[1]
                    arg4 = esi_43
                    int32_t i_17
                    
                    do
                        uint32_t ecx_151 = zx.d(zx.w(*(esi_43 + 5)) * 0x100 + zx.w(*(esi_43 + 6)))
                        
                        if (ecx_151.w == 0)
                            ecx_151.b = *(result + 0x16b)
                            *(esi_43 - 1) = ecx_151.b
                            ecx_151.b = *(result + 0x16a)
                            *esi_43 = ecx_151.b
                            ecx_151.b = *(result + 0x16d)
                            *(esi_43 + 1) = ecx_151.b
                            ecx_151.b = *(result + 0x16c)
                            *(esi_43 + 2) = ecx_151.b
                            ecx_151.b = *(result + 0x16f)
                            *(esi_43 + 3) = ecx_151.b
                            ecx_151.b = *(result + 0x16e)
                            *(esi_43 + 4) = ecx_151.b
                        else if (ecx_151.w u< 0xffff)
                            int32_t ecx_156 = zx.d(*(result + 0x16a)) * (0xffff - ecx_151)
                                + zx.d(zx.w(*(arg4 - 1)) * 0x100 + zx.w(*arg4)) * ecx_151 + 0x8000
                            uint32_t edx_132 = ((ecx_156 u>> 0x10) + ecx_156) u>> 0x10
                            *(arg4 - 1) = (edx_132 u>> 8).b
                            char* ecx_159 = arg4
                            *ecx_159 = edx_132.b
                            int32_t ecx_163 = zx.d(*(result + 0x16c)) * (0xffff - ecx_151)
                                + zx.d(zx.w(ecx_159[1]) * 0x100 + zx.w(ecx_159[2])) * ecx_151
                                + 0x8000
                            uint32_t edx_140 = ((ecx_163 u>> 0x10) + ecx_163) u>> 0x10
                            *(arg4 + 1) = (edx_140 u>> 8).b
                            *(arg4 + 2) = edx_140.b
                            esi_43 = arg4
                            i_21 = i_22
                            int32_t ecx_170 = zx.d(*(result + 0x16e)) * (0xffff - ecx_151)
                                + zx.d(zx.w(*(arg4 + 3)) * 0x100 + zx.w(*(arg4 + 4))) * ecx_151
                                + 0x8000
                            uint32_t edx_148 = ((ecx_170 u>> 0x10) + ecx_170) u>> 0x10
                            *(esi_43 + 4) = edx_148.b
                            *(esi_43 + 3) = (edx_148 u>> 8).b
                        
                        esi_43 += 8
                        i_17 = i_21
                        i_21 -= 1
                        arg4 = esi_43
                        i_22 = i_21
                    while (i_17 != 1)
            else if (i_21 != 0)
                void* edi_9 = &edi[1]
                int32_t i_18
                
                do
                    uint32_t ecx_112 = zx.d(zx.w(*(edi_9 + 5)) * 0x100 + zx.w(*(edi_9 + 6)))
                    uint32_t edx_97
                    
                    if (ecx_112.w != 0xffff)
                        if (ecx_112.w != 0)
                            int32_t ebx_19 = 0xffff - ecx_112
                            arg4 = ecx_112
                            ecx_112.b = ebx
                            int32_t var_8_1 = ebx_19
                            int32_t ecx_125 = zx.d(*(result + 0x174)) * ebx_19 + zx.d(*(
                                *(*(result + 0x1a4) + (zx.d(*edi_9) u>> ecx_112.b << 2))
                                + (zx.d(*(edi_9 - 1)) << 1))) * arg4 + 0x8000
                            uint32_t edx_106 = ((ecx_125 u>> 0x10) + ecx_125) u>> 0x10
                            
                            if (ecx_2 == 0)
                                edx_106 = zx.d(*(*(*(result + 0x1a0)
                                    + (zx.d(edx_106.b) u>> (*(result + 0x188)).b << 2))
                                    + (edx_106 u>> 8 << 1)))
                                ebx_19 = var_8_1
                            
                            uint32_t esi_39 = zx.d(*(edi_9 + 2))
                            *(edi_9 - 1) = (edx_106 u>> 8).b
                            int32_t ecx_131 = *(result + 0x1a4)
                            *edi_9 = edx_106.b
                            int32_t ecx_136 = zx.d(*(result + 0x176)) * ebx_19 + 0x8000 + zx.d(
                                *(*(ecx_131 + (esi_39 u>> ebx << 2)) + (zx.d(*(edi_9 + 1)) << 1)))
                                * arg4
                            uint32_t ebx_25 = ((ecx_136 u>> 0x10) + ecx_136) u>> 0x10
                            
                            if (ecx_2 == 0)
                                ebx_25 = zx.d(*(*(*(result + 0x1a0)
                                    + (zx.d(ebx_25.b) u>> (*(result + 0x188)).b << 2))
                                    + (ebx_25 u>> 8 << 1)))
                            
                            ecx_136.b = ebx
                            uint32_t esi_42 = zx.d(*(edi_9 + 4)) u>> ecx_136.b
                            int32_t ecx_139 = *(result + 0x1a4)
                            *(edi_9 + 1) = (ebx_25 u>> 8).b
                            uint32_t edx_116 = zx.d(*(edi_9 + 3))
                            *(edi_9 + 2) = ebx_25.b
                            int32_t ecx_144 = zx.d(*(result + 0x178)) * var_8_1 + 0x8000
                                + zx.d(*(*(ecx_139 + (esi_42 << 2)) + (edx_116 << 1))) * arg4
                            edx_97 = ((ecx_144 u>> 0x10) + ecx_144) u>> 0x10
                            
                            if (ecx_2 == 0)
                                edx_97 = zx.d(*(*(*(result + 0x1a0)
                                    + (zx.d(edx_97.b) u>> (*(result + 0x188)).b << 2))
                                    + (edx_97 u>> 8 << 1)))
                            
                            goto label_62eb69
                        
                        ecx_112.b = *(result + 0x16b)
                        *(edi_9 - 1) = ecx_112.b
                        ecx_112.b = *(result + 0x16a)
                        *edi_9 = ecx_112.b
                        ecx_112.b = *(result + 0x16d)
                        *(edi_9 + 1) = ecx_112.b
                        ecx_112.b = *(result + 0x16c)
                        *(edi_9 + 2) = ecx_112.b
                        ecx_112.b = *(result + 0x16f)
                        *(edi_9 + 3) = ecx_112.b
                        ecx_112.b = *(result + 0x16e)
                        *(edi_9 + 4) = ecx_112.b
                    else
                        ecx_112.b = ebx
                        uint32_t esi_34 = zx.d(*(edi_9 + 1))
                        uint32_t edx_90 = zx.d(*(
                            *(*(result + 0x194) + (zx.d(*edi_9) u>> ecx_112.b << 2))
                            + (zx.d(*(edi_9 - 1)) << 1)))
                        *edi_9 = edx_90.b
                        uint32_t edx_91 = zx.d(*(edi_9 + 2))
                        *(edi_9 - 1) = (edx_90 u>> 8).b
                        uint32_t ecx_118 =
                            zx.d(*(*(*(result + 0x194) + (edx_91 u>> ebx << 2)) + (esi_34 << 1)))
                        uint32_t esi_35 = zx.d(*(edi_9 + 4))
                        uint32_t edx_94 = ecx_118
                        *(edi_9 + 2) = ecx_118.b
                        ecx_118.b = ebx
                        int32_t ecx_119 = *(result + 0x194)
                        *(edi_9 + 1) = (edx_94 u>> 8).b
                        edx_97 = zx.d(
                            *(*(ecx_119 + (esi_35 u>> ecx_118.b << 2)) + (zx.d(*(edi_9 + 3)) << 1)))
                    label_62eb69:
                        ebx = (*(result + 0x188)).b
                        *(edi_9 + 4) = edx_97.b
                        *(edi_9 + 3) = (edx_97 u>> 8).b
                    edi_9 += 8
                    i_18 = i_21
                    i_21 -= 1
                while (i_18 != 1)
        else if (*(result + 0x19c) == 0 || edx == 0 || esi_30 == 0)
            if (i_21 != 0)
                char* ebx_17 = &edi[1]
                int32_t i_19
                
                do
                    uint32_t ecx_91
                    ecx_91.b = ebx_17[2]
                    
                    if (ecx_91.b == 0)
                        ecx_91.b = *(result + 0x16a)
                        ebx_17[0xffffffff] = ecx_91.b
                        ecx_91.b = *(result + 0x16c)
                        *ebx_17 = ecx_91.b
                        ecx_91.b = *(result + 0x16e)
                        ebx_17[1] = ecx_91.b
                    else if (ecx_91.b u< 0xff)
                        uint16_t esi_31 = zx.w(ecx_91.b)
                        uint32_t ecx_104 = zx.d(zx.w(ebx_17[0xffffffff]) * esi_31
                            + *(result + 0x16a) * (0xff - esi_31) + 0x80)
                        int16_t ecx_105 = *(result + 0x16c)
                        ebx_17[0xffffffff] = (((ecx_104 u>> 8) + ecx_104) s>> 8).b
                        uint32_t ecx_106 =
                            zx.d(zx.w(*ebx_17) * esi_31 + ecx_105 * (0xff - esi_31) + 0x80)
                        int16_t ecx_107 = *(result + 0x16e)
                        *ebx_17 = (((ecx_106 u>> 8) + ecx_106) s>> 8).b
                        ecx_91 = zx.d(zx.w(ebx_17[1]) * esi_31 + ecx_107 * (0xff - esi_31) + 0x80)
                        ebx_17[1] = (((ecx_91 u>> 8) + ecx_91) s>> 8).b
                    
                    ebx_17 = &ebx_17[4]
                    i_19 = i_21
                    i_21 -= 1
                while (i_19 != 1)
        else if (i_21 != 0)
            char* edi_7 = &edi[1]
            int32_t i_20
            
            do
                uint32_t ecx_92
                ecx_92.b = edi_7[2]
                
                if (ecx_92.b == 0xff)
                    uint32_t ecx_93
                    ecx_93.b = *(zx.d(edi_7[0xffffffff]) + esi_30)
                    edi_7[0xffffffff] = ecx_93.b
                    uint32_t ecx_94
                    ecx_94.b = *(zx.d(*edi_7) + esi_30)
                    *edi_7 = ecx_94.b
                    ecx_92.b = *(zx.d(edi_7[1]) + esi_30)
                    edi_7[1] = ecx_92.b
                else if (ecx_92.b != 0)
                    uint32_t edx_54 = zx.d(ecx_92.b)
                    uint32_t ecx_96
                    ecx_96.w = *(result + 0x174)
                    ecx_96.w *= 0xff - edx_54.w
                    uint32_t ecx_97 = zx.d(
                        zx.w(*(zx.d(edi_7[0xffffffff]) + *(result + 0x19c))) * edx_54.w + ecx_96.w
                        + 0x80)
                    int32_t edx_60 = ((ecx_97 u>> 8) + ecx_97) s>> 8
                    
                    if (ecx_2 == 0)
                        edx_60.b = zx.d(edx_60.b)[*(result + 0x198)]
                    
                    uint32_t ecx_99 = zx.d(*edi_7)
                    edi_7[0xffffffff] = edx_60.b
                    uint16_t edx_62 = zx.w(*(ecx_99 + *(result + 0x19c))) * edx_54.w
                    ecx_99.w = *(result + 0x176)
                    ecx_99.w *= 0xff - edx_54.w
                    uint32_t ecx_100 = zx.d(edx_62 + ecx_99.w + 0x80)
                    int32_t edx_66 = ((ecx_100 u>> 8) + ecx_100) s>> 8
                    
                    if (ecx_2 == 0)
                        edx_66.b = zx.d(edx_66.b)[*(result + 0x198)]
                    
                    uint32_t ecx_102 = zx.d(edi_7[1])
                    *edi_7 = edx_66.b
                    int16_t edx_68 = zx.w(*(ecx_102 + *(result + 0x19c))) * edx_54.w
                    ecx_102.w = *(result + 0x178)
                    ecx_102.w *= 0xff - edx_54.w
                    ecx_92 = zx.d(edx_68 + ecx_102.w + 0x80)
                    int32_t edx_72 = ((ecx_92 u>> 8) + ecx_92) s>> 8
                    
                    if (ecx_2 == 0)
                        edx_72.b = *(zx.d(edx_72.b) + *(result + 0x198))
                    
                    edi_7[1] = edx_72.b
                else
                    ecx_92.b = *(result + 0x16a)
                    edi_7[0xffffffff] = ecx_92.b
                    ecx_92.b = *(result + 0x16c)
                    *edi_7 = ecx_92.b
                    ecx_92.b = *(result + 0x16e)
                    edi_7[1] = ecx_92.b
                
                edi_7 = &edi_7[4]
                i_20 = i_21
                i_21 -= 1
            while (i_20 != 1)

return result
