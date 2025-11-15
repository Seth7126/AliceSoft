// 函数: sub_64d900
// 地址: 0x64d900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg1
int32_t ebx = edx[0x65]
int32_t ebp = 0
void* esi = edx[0x15]
int32_t i = 0
int32_t var_8 = ebx
int32_t var_14 = 0
int32_t i_1 = 0
void* var_10 = esi

if (edx[0x13] s<= 0)
    return 

do
    int32_t eax_2 = (*(esi + 0x24) << 8) + *(esi + 0x28)
    
    if (eax_2 s> 0x70e)
        if (eax_2 s> 0xc06)
            if (eax_2 s> 0xe0e)
                if (eax_2 == 0xf0f)
                    *(ebx + (i << 2) + 0x2c) = sub_666a10
                    ebp = 0
                    var_14 = ebp
                else if (eax_2 == 0x1008)
                    *(ebx + (i << 2) + 0x2c) = sub_6676c0
                    ebp = 0
                    var_14 = ebp
                else if (eax_2 == 0x1010)
                    *(ebx + (i << 2) + 0x2c) = sub_666ff0
                    ebp = 0
                    var_14 = ebp
                else
                label_64dc1b:
                    *(*edx + 0x14) = 7
                    *(*edx + 0x18) = *(esi + 0x24)
                    *(*edx + 0x1c) = *(esi + 0x28)
                    (**edx)(edx)
                    edx = arg1
            else if (eax_2 == 0xe0e)
                *(ebx + (i << 2) + 0x2c) = sub_666470
                ebp = 0
                var_14 = ebp
            else if (eax_2 == 0xc0c)
                *(ebx + (i << 2) + 0x2c) = sub_665970
                ebp = 0
                var_14 = ebp
            else if (eax_2 == 0xd0d)
                *(ebx + (i << 2) + 0x2c) = sub_665e70
                ebp = 0
                var_14 = ebp
            else
                if (eax_2 != 0xe07)
                    goto label_64dc1b
                
                *(ebx + (i << 2) + 0x2c) = sub_6685f0
                ebp = 0
                var_14 = ebp
        else if (eax_2 == 0xc06)
            *(ebx + (i << 2) + 0x2c) = sub_6692e0
            ebp = 0
            var_14 = ebp
        else if (eax_2 s> 0x909)
            if (eax_2 == 0xa05)
                *(ebx + (i << 2) + 0x2c) = sub_669c10
                ebp = 0
                var_14 = ebp
            else if (eax_2 == 0xa0a)
                *(ebx + (i << 2) + 0x2c) = sub_665000
                ebp = 0
                var_14 = ebp
            else
                if (eax_2 != 0xb0b)
                    goto label_64dc1b
                
                *(ebx + (i << 2) + 0x2c) = sub_665420
                ebp = 0
                var_14 = ebp
        else if (eax_2 == 0x909)
            *(ebx + (i << 2) + 0x2c) = sub_664320
            ebp = 0
            var_14 = ebp
        else if (eax_2 == 0x804)
            *(ebx + (i << 2) + 0x2c) = sub_66a370
            ebp = 0
            var_14 = ebp
        else if (eax_2 == 0x808)
            int32_t eax_17 = edx[0x37]
            
            if (eax_17 == 0)
                *(ebx + (i << 2) + 0x2c) = sub_660e70
                ebp = 0
                var_14 = ebp
            else if (eax_17 == 1)
                *(ebx + (i << 2) + 0x2c) = sub_65ff80
                ebp = 1
                var_14 = ebp
            else if (eax_17 == 2)
                *(ebx + (i << 2) + 0x54) = sub_65eb00
                ebp = 2
                var_14 = ebp
            else
                *(*edx + 0x14) = 0x31
                (**edx)(edx)
                edx = arg1
        else
            if (eax_2 != 0x810)
                goto label_64dc1b
            
            *(ebx + (i << 2) + 0x2c) = sub_66ad70
            ebp = 0
            var_14 = ebp
    else if (eax_2 == 0x70e)
        *(ebx + (i << 2) + 0x2c) = sub_66b2a0
        ebp = 0
        var_14 = ebp
    else if (eax_2 s> 0x404)
        if (eax_2 s> 0x603)
            if (eax_2 == 0x606)
                *(ebx + (i << 2) + 0x2c) = sub_662cf0
                ebp = 0
                var_14 = ebp
            else if (eax_2 == 0x60c)
                *(ebx + (i << 2) + 0x2c) = sub_66b720
                ebp = 0
                var_14 = ebp
            else
                if (eax_2 != 0x707)
                    goto label_64dc1b
                
                *(ebx + (i << 2) + 0x2c) = sub_661b30
                ebp = 0
                var_14 = ebp
        else if (eax_2 == 0x603)
            *(ebx + (i << 2) + 0x2c) = sub_66a7d0
            ebp = 0
            var_14 = ebp
        else if (eax_2 == 0x408)
            *(ebx + (i << 2) + 0x2c) = sub_66be00
            ebp = 0
            var_14 = ebp
        else if (eax_2 == 0x505)
            *(ebx + (i << 2) + 0x2c) = sub_6636a0
            ebp = 0
            var_14 = ebp
        else
            if (eax_2 != 0x50a)
                goto label_64dc1b
            
            *(ebx + (i << 2) + 0x2c) = sub_66bad0
            ebp = 0
            var_14 = ebp
    else if (eax_2 == 0x404)
        *(ebx + (i << 2) + 0x2c) = sub_663d70
        ebp = 0
        var_14 = ebp
    else if (eax_2 s> 0x204)
        if (eax_2 == 0x303)
            *(ebx + (i << 2) + 0x2c) = sub_664090
            ebp = 0
            var_14 = ebp
        else if (eax_2 == 0x306)
            *(ebx + (i << 2) + 0x2c) = sub_66c730
            ebp = 0
            var_14 = ebp
        else
            if (eax_2 != 0x402)
                goto label_64dc1b
            
            *(ebx + (i << 2) + 0x2c) = sub_66abe0
            ebp = 0
            var_14 = ebp
    else if (eax_2 == 0x204)
        *(ebx + (i << 2) + 0x2c) = sub_66cbe0
        ebp = 0
        var_14 = ebp
    else if (eax_2 s> 0x201)
        if (eax_2 != 0x202)
            goto label_64dc1b
        
        *(ebx + (i << 2) + 0x2c) = sub_664280
        ebp = 0
        var_14 = ebp
    else if (eax_2 == 0x201)
        *(ebx + (i << 2) + 0x2c) = sub_66ad30
        ebp = 0
        var_14 = ebp
    else if (eax_2 == 0x101)
        *(ebx + (i << 2) + 0x2c) = sub_6642f0
        ebp = 0
        var_14 = ebp
    else
        if (eax_2 != 0x102)
            goto label_64dc1b
        
        *(ebx + (i << 2) + 0x2c) = sub_66cd20
        ebp = 0
        var_14 = ebp
    
    int32_t ecx_3 = *(esi + 0x10)
    
    if (ecx_3 u> 3 || edx[ecx_3 + 0x16] == 0)
        *(*edx + 0x14) = 0x36
        *(*edx + 0x18) = ecx_3
        (**edx)(edx)
        edx = arg1
    
    void* ecx_4 = edx[ecx_3 + 0x16]
    
    if (ebp == 0)
        void* ebx_1 = ecx_4 + 4
        void* edx_4 = *(esi + 0x54) + 8
        int32_t j_4 = 0x10
        int32_t j
        
        do
            uint32_t eax_56 = zx.d(*(ebx_1 - 4))
            ebx_1 += 8
            edx_4 += 0x10
            *(edx_4 - 0x18) = eax_56 << ((*(esi + 0x34) != 0) + 3)
            *(edx_4 - 0x14) = zx.d(*(ebx_1 - 0xa)) << ((*(esi + 0x34) != 0) + 3)
            *(edx_4 - 0x10) = zx.d(*(ebx_1 - 8)) << ((*(esi + 0x34) != 0) + 3)
            *(edx_4 - 0xc) = zx.d(*(ebx_1 - 6)) << ((*(esi + 0x34) != 0) + 3)
            j = j_4
            j_4 -= 1
        while (j != 1)
    label_64dfaf:
        ebx = var_8
        ebp = var_14
        *(ebx + (i << 2) + 4) = sub_64d640
    else
        void* const j_2
        
        if (ebp == 1)
            void* const j_1 = &data_76dce0
            void* edi = *(esi + 0x54)
            
            do
                edx.b = *(esi + 0x34)
                edi += 4
                j_2 = 0x400
                
                if (edx.b != 0)
                    j_2 = 0x200
                
                void* esi_3 = zx.d(*(j_1 + ecx_4 - &data_76dce0)) * sx.d(*j_1) + j_2
                j_1 += 2
                *(edi - 4) = esi_3 s>> ((edx.b == 0) + 0xa)
                esi = var_10
            while (j_1 s< &data_76dd60)
            
            i = i_1
            goto label_64dfaf
        
        if (ebp == 2)
            void* ecx_6 = *(esi + 0x54) + 8
            double xmm5_1 = 1.0
            void* edx_2 = ecx_4 + 4
            void* const j_3 = &data_76dd60
            
            for (j_2 = &data_76dd60; j_2 s< 0x76dda0; )
                double xmm2_1 = *j_2
                double xmm3_1 = 16.0
                double xmm4_1 = 8.0
                double xmm0_1
                
                if (*(esi + 0x34) == 0)
                    xmm0_1 = xmm4_1
                else
                    xmm0_1 = xmm3_1
                
                *(ecx_6 - 8) =
                    fconvert.s(xmm5_1 / (_mm_cvtepi32_pd(zx.q(*(edx_2 - 4))) * xmm2_1 * xmm0_1))
                double xmm0_5
                
                if (*(esi + 0x34) == 0)
                    xmm0_5 = xmm4_1
                else
                    xmm0_5 = xmm3_1
                
                *(ecx_6 - 4) = fconvert.s(xmm5_1
                    / (_mm_cvtepi32_pd(zx.q(*(edx_2 - 2))) * xmm2_1 * 1.3870398450000001 * xmm0_5))
                double xmm0_9
                
                if (*(esi + 0x34) == 0)
                    xmm0_9 = xmm4_1
                else
                    xmm0_9 = xmm3_1
                
                *ecx_6 = fconvert.s(xmm5_1
                    / (_mm_cvtepi32_pd(zx.q(*edx_2)) * xmm2_1 * 1.3065629649999999 * xmm0_9))
                double xmm0_13
                
                if (*(esi + 0x34) == 0)
                    xmm0_13 = xmm4_1
                else
                    xmm0_13 = xmm3_1
                
                *(ecx_6 + 4) = fconvert.s(xmm5_1 /
                    (_mm_cvtepi32_pd(zx.q(*(edx_2 + 2))) * xmm2_1 * 1.1758756020000001 * xmm0_13))
                double xmm0_17
                
                if (*(esi + 0x34) == 0)
                    xmm0_17 = xmm4_1
                else
                    xmm0_17 = xmm3_1
                
                *(ecx_6 + 8) =
                    fconvert.s(xmm5_1 / (_mm_cvtepi32_pd(zx.q(*(edx_2 + 4))) * xmm2_1 * xmm0_17))
                double xmm0_21
                
                if (*(esi + 0x34) == 0)
                    xmm0_21 = xmm4_1
                else
                    xmm0_21 = xmm3_1
                
                *(ecx_6 + 0xc) = fconvert.s(xmm5_1
                    / (_mm_cvtepi32_pd(zx.q(*(edx_2 + 6))) * xmm2_1 * 0.785694958 * xmm0_21))
                double xmm0_25
                
                if (*(esi + 0x34) == 0)
                    xmm0_25 = xmm4_1
                else
                    xmm0_25 = xmm3_1
                
                *(ecx_6 + 0x10) = fconvert.s(xmm5_1 /
                    (_mm_cvtepi32_pd(zx.q(*(edx_2 + 8))) * xmm2_1 * 0.54119609999999996 * xmm0_25))
                double xmm0_29
                
                if (*(esi + 0x34) == 0)
                    xmm0_29 = xmm4_1
                else
                    xmm0_29 = xmm3_1
                
                uint32_t eax_53 = zx.d(*(edx_2 + 0xa))
                edx_2 += 0x10
                j_2 = j_3 + 8
                j_3 = j_2
                *(ecx_6 + 0x14) = fconvert.s(xmm5_1
                    / (_mm_cvtepi32_pd(zx.q(eax_53)) * xmm2_1 * 0.275899379 * xmm0_29))
                ecx_6 += 0x20
            
            *(ebx + (i << 2) + 4) = sub_64d750
        else
            *(*edx + 0x14) = 0x31
            (**edx)(edx)
    
    edx = arg1
    i += 1
    esi += 0x58
    i_1 = i
    var_10 = esi
while (i s< edx[0x13])
