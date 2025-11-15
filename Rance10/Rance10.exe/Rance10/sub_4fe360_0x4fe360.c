// 函数: sub_4fe360
// 地址: 0x4fe360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_2c
int32_t var_28
(*(*arg1 + 0x20))(&var_2c, &var_28, 1)
bool var_43

if (sub_4ff790(arg1) != 7)
    if (sub_4ff790(arg1) != 4)
        var_43 = sub_4ff790(arg1) == 1
    else
        var_43 = true
else
    var_43 = true

bool var_45

if (sub_4ff790(arg1) != 9)
    if (sub_4ff790(arg1) != 6)
        var_45 = sub_4ff790(arg1) == 3
    else
        var_45 = true
else
    var_45 = true

int32_t eax_7 = sub_4ff790(arg1)
bool var_42

if (eax_7 != 1)
    if (sub_4ff790(arg1) != 2)
        var_42 = sub_4ff790(arg1) == 3
    else
        var_42 = true
else
    var_42 = eax_7.b

bool var_44

if (sub_4ff790(arg1) != 7)
    if (sub_4ff790(arg1) != 8)
        var_44 = sub_4ff790(arg1) == 9
    else
        var_44 = true
else
    var_44 = true

int32_t esi = var_2c
int32_t ebx_1 = *(arg1[0x1b] + 0xa4) - 1
int32_t edi_1

switch (ebx_1)
    case 1, 4, 7
        int32_t eax_16
        int32_t edx_1
        edx_1:eax_16 = sx.q(esi)
        edi_1 = neg.d((eax_16 - edx_1) s>> 1)
    case 2, 5, 8
        edi_1 = neg.d(esi)
    default
        edi_1 = 0

int32_t esi_1

switch (sub_4ff790(arg1) - 1)
    case 1, 4, 7
        int32_t eax_23
        int32_t edx_2
        edx_2:eax_23 = sx.q(esi)
        esi_1 = neg.d((eax_23 - edx_2) s>> 1)
    case 2, 5, 8
        esi_1 = neg.d(esi)
    default
        esi_1 = 0

int32_t esi_2 = var_28
float xmm2_2 = _mm_cvtepi32_ps(zx.o(edi_1)) - _mm_cvtepi32_ps(zx.o(esi_1))
int32_t edi_4

switch (ebx_1)
    case 3, 4, 5
        int32_t eax_28
        int32_t edx_3
        edx_3:eax_28 = sx.q(esi_2)
        edi_4 = neg.d((eax_28 - edx_3) s>> 1)
    case 6, 7, 8
        edi_4 = neg.d(esi_2)
    default
        edi_4 = 0

int32_t esi_3

switch (sub_4ff790(arg1) - 1)
    case 3, 4, 5
        int32_t eax_35
        int32_t edx_4
        edx_4:eax_35 = sx.q(esi_2)
        esi_3 = neg.d((eax_35 - edx_4) s>> 1)
    case 6, 7, 8
        esi_3 = neg.d(esi_2)
    default
        esi_3 = 0

float xmm1_2 = _mm_cvtepi32_ps(zx.o(edi_4)) - _mm_cvtepi32_ps(zx.o(esi_3))
int32_t eax_38

if (var_43 != 0)
    eax_38 = arg1[0x18]
else if (var_45 == 0)
    eax_38 = 0
else
    eax_38 = neg.d(arg1[0x19])

float var_38 = _mm_cvtepi32_ps(zx.o(eax_38)) + xmm2_2
int32_t eax_40

if (var_42 != 0)
    eax_40 = arg1[0x16]
else if (var_44 == 0)
    eax_40 = 0
else
    eax_40 = neg.d(arg1[0x17])

int32_t eax_42
eax_42.b = var_44 == 0
float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_40)) + xmm1_2
int32_t eax_44
eax_44.b = var_45 == 0
float var_40 = xmm0_6
float xmm0_11

if (arg1[0x14].b == 0)
    xmm0_11 = arg1[0x13]
else
    void* esi_4 = data_7fcbbc
    int32_t eax_46
    
    if (esi_4 != 0)
        if (sub_63c080(esi_4) != 0)
            eax_46 = (*(**(esi_4 + 0x2c) + 0x54))()
        else
            eax_46 = 0
    else
        eax_46 = 0
    
    long double x87_r0
    long double x87_r1
    xmm0_11 = sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_46)), x87_r0, x87_r1) f* arg1[0x13]

int32_t edx_5 = 0
int32_t var_3c = 0
int32_t var_30_2 = 0
int32_t result = *(arg1[0x1b] + 0x70)
int32_t ecx_20 = (*(result + 0xc4) - *(result + 0xc0)) s>> 2

if (ecx_20 s> 0)
    do
        int32_t esi_5
        
        if (edx_5 s>= 0)
            void* ecx_21 = *(arg1[0x1b] + 0x70)
            
            if ((*(ecx_21 + 0xc4) - *(ecx_21 + 0xc0)) s>> 2 s> edx_5)
                esi_5 = *(*(ecx_21 + 0xc0) + (edx_5 << 2))
            else
                esi_5 = 0
        else
            esi_5 = 0
        
        void** ebx_2 = arg1[0x1c]
        int32_t var_5c_1 = esi_5
        result = sub_4f15e0(ebx_2)
        
        if (result != 0)
            int32_t edi_6 = *(result + 8)
            
            if (esi_5 s>= edi_6 && *(result + 4) + edi_6 s> esi_5)
                result.b = *(*(result + 0xc) + ((esi_5 - edi_6) << 2)) != 0
                
                if (result.b != 0)
                    int32_t var_5c_2 = esi_5
                    struct partsengine::CPartsList::VTable** edx_8 = sub_4f14d0(ebx_2)
                    int32_t edi_7
                    
                    if (edx_8 != 0)
                        edi_7 = edx_8[2]
                    
                    struct partsengine::CPartsList::VTable** ebx_3
                    
                    if (edx_8 == 0 || esi_5 s< edi_7 || edx_8[1] + edi_7 s<= esi_5)
                        ebx_3 = nullptr
                    else
                        ebx_3 = edx_8[3][esi_5 - edi_7]
                        
                        if (ebx_3 == 0)
                            int32_t var_5c_3 = esi_5
                            ebx_3 = sub_526580(edx_8)
                    
                    struct partsengine::CPartsList::VTable** eax_56
                    eax_56.b = ebx_3[0x2b].b
                    char eax_58 = sub_4f0100(ebx_3)
                    char var_41_2
                    
                    if (*(ebx_3 + 0xaa) == 0 || *(ebx_3 + 0xab) == 0)
                        var_41_2 = 0
                    else
                        char edx_9 = 1
                        
                        if (eax_56.b != 0)
                            edx_9 = arg2
                        
                        if (edx_9 == 0)
                            var_41_2 = 0
                        else
                            var_41_2 = 1
                            
                            if (eax_58 == 0)
                                var_41_2 = 0
                    
                    int32_t eax_59 = sub_4ff790(arg1)
                    int32_t* ecx_32 = ebx_3[0x1d]
                    int32_t result_1 = ebx_3[0x45]
                    int32_t edi_8 = ebx_3[0x46]
                    ebx_3[0x29] = eax_59
                    int32_t eax_60 = ebx_3[0x43]
                    int32_t eax_61 = ebx_3[0x44]
                    int32_t eax_65 = (*(*ecx_32 + 0x24))(1) + edi_8 + result_1
                    int32_t edx_12 = ebx_3[0x44] + (*(ebx_3[0x1d]->vFunc_0 + 0x28))(1) + ebx_3[0x43]
                    int32_t edi_10
                    float xmm1_5
                    float xmm3_4
                    
                    if (var_41_2 == 0 || arg1[0x12].b == 0)
                    label_4fe7f6:
                        xmm1_5 = var_40
                        xmm3_4 = var_38
                        edi_10 = var_3c
                    else
                        int32_t xmm1_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_11)))
                        
                        if (sub_48b210(_mm_cvtepi32_ps(zx.o(edx_12 * ((eax_42 << 1) + 0xffffffff)))
                                + var_40 - xmm0_6) f<= xmm1_4)
                            goto label_4fe7f6
                        
                        xmm1_5 = xmm0_6
                        int32_t eax_70 = var_3c * ((eax_44 << 1) + 0xffffffff)
                        edi_10 = 0
                        var_40 = xmm1_5
                        var_3c = 0
                        xmm3_4 = _mm_cvtepi32_ps(zx.o(eax_70)) + var_38
                        var_38 = xmm3_4
                    
                    if (var_43 != 0)
                        result = result_1
                    else if (var_45 == 0)
                        result = 0
                    else
                        result = neg.d(edi_8)
                    
                    int32_t ecx_34
                    
                    if (var_42 != 0)
                        ecx_34 = eax_60
                    else if (var_44 == 0)
                        ecx_34 = 0
                    else
                        ecx_34 = neg.d(eax_61)
                    
                    ebx_3[0x24] = _mm_cvtepi32_ps(zx.o(result)) + xmm3_4
                    ebx_3[0x25] = _mm_cvtepi32_ps(zx.o(ecx_34)) + xmm1_5
                    
                    if (var_41_2 != 0)
                        if (edi_10 s< eax_65)
                            edi_10 = eax_65
                        
                        var_3c = edi_10
                        var_40 =
                            _mm_cvtepi32_ps(zx.o(edx_12 * ((eax_42 << 1) + 0xffffffff))) + xmm1_5
        
        edx_5 = var_30_2 + 1
        var_30_2 = edx_5
    while (edx_5 s< ecx_20)

return result
