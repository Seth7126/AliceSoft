// 函数: sub_4ae250
// 地址: 0x4ae250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1
int32_t* var_38 = edi
int32_t esi = (*(*edi + 0x28))(1)
int32_t ebx = (*(*edi + 0x2c))(1)
bool var_4f

if (sub_4afa40(edi) != 7)
    if (sub_4afa40(edi) != 4)
        var_4f = sub_4afa40(edi) == 1
    else
        var_4f = true
else
    var_4f = true

bool var_51

if (sub_4afa40(edi) != 9)
    if (sub_4afa40(edi) != 6)
        var_51 = sub_4afa40(edi) == 3
    else
        var_51 = true
else
    var_51 = true

int32_t eax_10 = sub_4afa40(edi)
bool var_4e

if (eax_10 != 1)
    if (sub_4afa40(edi) != 2)
        var_4e = sub_4afa40(edi) == 3
    else
        var_4e = true
else
    var_4e = eax_10.b

bool var_50

if (sub_4afa40(edi) != 7)
    if (sub_4afa40(edi) != 8)
        var_50 = sub_4afa40(edi) == 9
    else
        var_50 = true
else
    var_50 = true

int32_t var_3c = *(edi[0x18] + 0x88)
int32_t eax_18 = sub_4afa40(edi)
int32_t ecx_18

if (var_3c - 1 u> 8)
    ecx_18 = 0
else
    switch (var_3c + &jump_table_4ae82c[2]:3)
        case &lookup_table_4ae838, &lookup_table_4ae838[3], &lookup_table_4ae838[6]
            ecx_18 = 0
        case &lookup_table_4ae838[1], &lookup_table_4ae838[4], &lookup_table_4ae838[7]
            int32_t eax_20
            int32_t edx_1
            edx_1:eax_20 = sx.q(esi)
            ecx_18 = neg.d((eax_20 - edx_1) s>> 1)
        case &lookup_table_4ae838[2], &lookup_table_4ae838[5], &lookup_table_4ae838[8]
            ecx_18 = neg.d(esi)

int32_t esi_1

if (eax_18 - 1 u> 8)
    esi_1 = 0
else
    switch (eax_18 + &jump_table_4ae844[2]:3)
        case &lookup_table_4ae850, &lookup_table_4ae850[3], &lookup_table_4ae850[6]
            esi_1 = 0
        case &lookup_table_4ae850[1], &lookup_table_4ae850[4], &lookup_table_4ae850[7]
            int32_t eax_26
            int32_t edx_2
            edx_2:eax_26 = sx.q(esi)
            esi_1 = neg.d((eax_26 - edx_2) s>> 1)
        case &lookup_table_4ae850[2], &lookup_table_4ae850[5], &lookup_table_4ae850[8]
            esi_1 = neg.d(esi)

float xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx_18)) - _mm_cvtepi32_ps(zx.o(esi_1))
int32_t eax_29 = sub_4afa40(edi)
int32_t ecx_25

if (var_3c - 1 u> 8)
    ecx_25 = 0
else
    switch (var_3c + &jump_table_4ae85c[2]:3)
        case &lookup_table_4ae868, &lookup_table_4ae868[1], &lookup_table_4ae868[2]
            ecx_25 = 0
        case &lookup_table_4ae868[3], &lookup_table_4ae868[4], &lookup_table_4ae868[5]
            int32_t eax_31
            int32_t edx_3
            edx_3:eax_31 = sx.q(ebx)
            ecx_25 = neg.d((eax_31 - edx_3) s>> 1)
        case &lookup_table_4ae868[6], &lookup_table_4ae868[7], &lookup_table_4ae868[8]
            ecx_25 = neg.d(ebx)

int32_t ebx_1

if (eax_29 - 1 u> 8)
    ebx_1 = 0
else
    switch (eax_29 + &jump_table_4ae874[2]:3)
        case &lookup_table_4ae880, &lookup_table_4ae880[1], &lookup_table_4ae880[2]
            ebx_1 = 0
        case &lookup_table_4ae880[3], &lookup_table_4ae880[4], &lookup_table_4ae880[5]
            int32_t eax_37
            int32_t edx_4
            edx_4:eax_37 = sx.q(ebx)
            ebx_1 = neg.d((eax_37 - edx_4) s>> 1)
        case &lookup_table_4ae880[6], &lookup_table_4ae880[7], &lookup_table_4ae880[8]
            ebx_1 = neg.d(ebx)

uint128_t xmm1 = zx.o(ecx_25)
ecx_25.b = var_51
float xmm1_2 = _mm_cvtepi32_ps(xmm1) - _mm_cvtepi32_ps(zx.o(ebx_1))
int32_t eax_40

if (var_4f != 0)
    eax_40 = edi[0x15]
else if (ecx_25.b == 0)
    eax_40 = 0
else
    eax_40 = neg.d(edi[0x16])

float var_44 = _mm_cvtepi32_ps(zx.o(eax_40)) + xmm2_2
int32_t eax_42

if (var_4e != 0)
    eax_42 = edi[0x13]
else if (var_50 == 0)
    eax_42 = 0
else
    eax_42 = neg.d(edi[0x14])

int32_t eax_44
eax_44.b = var_50 == 0
float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_42)) + xmm1_2
int32_t eax_46
eax_46.b = ecx_25.b == 0
float var_40 = xmm0_6
float xmm0_9

if (edi[0x11].b == 0)
    xmm0_9 = edi[0x10]
else
    void* esi_3 = data_75d514
    
    if (esi_3 != 0)
        if (sub_5ed1f0(esi_3) != 0)
            xmm0_9 = _mm_cvtepi32_ps(zx.o((*(**(esi_3 + 0x2c) + 0x1c))())) f* edi[0x10]
        else
            xmm0_9 = _mm_cvtepi32_ps(0) f* edi[0x10]
    else
        xmm0_9 = _mm_cvtepi32_ps(0) f* edi[0x10]

int32_t ebx_2 = 0
int32_t var_30_1 = 0
int32_t var_48 = 0
var_3c = 0
int32_t* result = *(edi[0x18] + 0x58)
int32_t ecx_31 = (result[0x26] - result[0x25]) s>> 2
int32_t var_4c = ecx_31

if (ecx_31 s> 0)
    do
        result = edi[0x18]
        int32_t esi_4
        
        if (ebx_2 s>= 0)
            void* ecx_32 = result[0x16]
            result = (*(ecx_32 + 0x98) - *(ecx_32 + 0x94)) s>> 2
            
            if (result s> ebx_2)
                result = *(ecx_32 + 0x94)
                esi_4 = result[ebx_2]
            else
                esi_4 = 0
            
            ecx_31 = var_4c
        else
            esi_4 = 0
        
        if (esi_4 s> 0)
            void** ebx_4 = *(edi[0x19] + 0x1c)
            void** eax_56 = ebx_4[1]
            int32_t ecx_35 = esi_4 s/ 0x2710
            void** edx_7 = ebx_4
            
            while (*(eax_56 + 0xd) == 0)
                if (eax_56[4] s>= ecx_35)
                    edx_7 = eax_56
                    eax_56 = *eax_56
                else
                    eax_56 = eax_56[2]
            
            void** eax_57
            
            if (edx_7 == ebx_4 || ecx_35 s< edx_7[4])
                void** var_28 = ebx_4
                eax_57 = &var_28
            else
                void** var_2c = edx_7
                eax_57 = &var_2c
            
            result = *eax_57
            
            if (result != *(edi[0x19] + 0x1c))
                void* ecx_37 = result[5]
                
                if (ecx_37 != 0)
                    int32_t ebx_5 = *(ecx_37 + 8)
                    
                    if (esi_4 s>= ebx_5)
                        result = *(ecx_37 + 4) + ebx_5
                        
                        if (result s> esi_4)
                            result.b = (*(ecx_37 + 0xc))[esi_4 - ebx_5] != 0
                            
                            if (result.b != 0)
                                int32_t var_64_1 = esi_4
                                struct partsengine::CPartsList::VTable** eax_59 =
                                    sub_4a52a0(edi[0x19])
                                int32_t ebx_6
                                
                                if (eax_59 != 0)
                                    ebx_6 = eax_59[2]
                                
                                struct IInterface::VTable** vFunc_0_1
                                
                                if (eax_59 == 0 || esi_4 s< ebx_6 || eax_59[1] + ebx_6 s<= esi_4)
                                    vFunc_0_1 = nullptr
                                else
                                    vFunc_0_1 = eax_59[3][esi_4 - ebx_6].vFunc_0
                                    
                                    if (vFunc_0_1 == 0)
                                        vFunc_0_1 = sub_4e7720(eax_59, esi_4)
                                
                                char eax_64 = sub_4a26a0(vFunc_0_1, 1)
                                int32_t eax_65 = sub_4afa40(edi)
                                
                                if (vFunc_0_1[0x22] != eax_65)
                                    vFunc_0_1[0x22] = eax_65
                                    vFunc_0_1[0x1c].b = 1
                                
                                int32_t eax_66 = vFunc_0_1[0x32]
                                int32_t* result_1 = vFunc_0_1[0x34]
                                int32_t edi_1 = vFunc_0_1[0x35]
                                int32_t eax_67 = vFunc_0_1[0x33]
                                void* eax_69 = (*(vFunc_0_1[0x17]->vFunc_0 + 0x28))(1)
                                int32_t edi_2 = vFunc_0_1[0x32]
                                void* eax_71 = eax_69 + edi_1 + result_1
                                int32_t esi_5 = vFunc_0_1[0x33]
                                int32_t vFunc_0 = vFunc_0_1[0x17]->vFunc_0
                                void* var_8 = eax_71
                                float xmm3_1 = var_40
                                int32_t edx_12 = esi_5 + (*(vFunc_0 + 0x2c))(1) + edi_2
                                edi = var_38
                                int32_t xmm0_18
                                int32_t xmm1_4
                                
                                if (eax_64 != 0 && edi[0xf].b != 0)
                                    xmm1_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_9)))
                                    xmm0_18 = __andps_xmmxud_memxud(
                                        _mm_cvtepi32_ps(zx.o(edx_12 * ((eax_44 << 1) + 0xffffffff)))
                                            + xmm3_1 - xmm0_6, 
                                        data_709490.o)
                                
                                int32_t esi_6
                                float xmm4_4
                                
                                if (eax_64 == 0 || edi[0xf].b == 0 || xmm0_18 f<= xmm1_4)
                                    xmm4_4 = var_44
                                    esi_6 = var_48
                                else
                                    xmm3_1 = xmm0_6
                                    int32_t eax_76 = var_48 * ((eax_46 << 1) + 0xffffffff)
                                    esi_6 = 0
                                    var_40 = xmm3_1
                                    var_48 = 0
                                    var_3c = 0
                                    xmm4_4 = _mm_cvtepi32_ps(zx.o(eax_76)) + var_44
                                    var_44 = xmm4_4
                                
                                if (var_4f != 0)
                                    result = result_1
                                else if (var_51 == 0)
                                    result = nullptr
                                else
                                    result = neg.d(edi_1)
                                
                                int32_t ecx_46
                                
                                if (var_4e != 0)
                                    ecx_46 = eax_66
                                else if (var_50 == 0)
                                    ecx_46 = 0
                                else
                                    ecx_46 = neg.d(eax_67)
                                
                                float xmm0_20 = vFunc_0_1[0x1f]
                                float xmm2_6 = _mm_cvtepi32_ps(zx.o(result)) + xmm4_4
                                xmm0_20 - xmm2_6
                                float xmm1_7 = _mm_cvtepi32_ps(zx.o(ecx_46)) + xmm3_1
                                result:1.b = (xmm0_20 == xmm2_6 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_20, xmm2_6) ? 1 : 0) << 2
                                    | (xmm0_20 < xmm2_6 ? 1 : 0)
                                bool p_2 = unimplemented  {test ah, 0x44}
                                bool p_4
                                
                                if (not(p_2))
                                    float xmm0_21 = vFunc_0_1[0x20]
                                    xmm0_21 - xmm1_7
                                    result:1.b = (xmm0_21 == xmm1_7 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_21, xmm1_7) ? 1 : 0) << 2
                                        | (xmm0_21 < xmm1_7 ? 1 : 0)
                                    p_4 = unimplemented  {test ah, 0x44}
                                
                                if (p_2 || p_4)
                                    vFunc_0_1[0x1f] = xmm2_6
                                    vFunc_0_1[0x20] = xmm1_7
                                    vFunc_0_1[0x1c].b = 1
                                
                                if (eax_64 != 0)
                                    result = &var_8
                                    
                                    if (esi_6 s>= eax_71)
                                        result = &var_3c
                                    
                                    int32_t ecx_48 = *result
                                    float xmm0_23 =
                                        _mm_cvtepi32_ps(zx.o(edx_12 * ((eax_44 << 1) + 0xffffffff)))
                                    var_48 = ecx_48
                                    var_3c = ecx_48
                                    var_40 = xmm0_23 + xmm3_1
            
            ecx_31 = var_4c
        
        ebx_2 = var_30_1 + 1
        var_30_1 = ebx_2
    while (ebx_2 s< ecx_31)

return result
