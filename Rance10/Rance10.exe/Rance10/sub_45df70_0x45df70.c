// 函数: sub_45df70
// 地址: 0x45df70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
void* var_2c = edi
uint32_t ecx = *(edi + 0x18)
int32_t edx = *(edi + 0x1c)
uint32_t i_10 = ecx & 1
int32_t ebp_1 = edx & 1
uint32_t i_8 = i_10 + ecx
char* ecx_1 = *arg1
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(*(edi + 0x20))
char* edx_3 = *(edi + 0x10)
int32_t ebp_3 = (eax_3 + (edx_1 & 7)) s>> 3

if (edx_3 == 0)
    int32_t eax_4
    eax_4.b = 0
    return eax_4

char* esi_1 = edx_3
*ecx_1 = *edx_3
ecx_1[1] = edx_3[1]
void* edx_4 = &edx_3[ebp_3]
ecx_1[2] = edx_3[2]
void* ecx_2 = &ecx_1[3]
uint32_t i_6

if (ecx s> 1)
    int32_t i_9 = ecx - 1
    int32_t i
    
    do
        *ecx_2 = *esi_1 - *edx_4
        *(ecx_2 + 1) = esi_1[1] - *(edx_4 + 1)
        i_6 = zx.d(esi_1[2])
        esi_1 = &esi_1[ebp_3]
        i_6.b -= *(edx_4 + 2)
        edx_4 += ebp_3
        *(ecx_2 + 2) = i_6.b
        ecx_2 += 3
        i = i_9
        i_9 -= 1
    while (i != 1)
    edi = var_2c

if (i_10 != 0)
    i_6 = i_10
    uint32_t i_1
    
    do
        *ecx_2 = 0
        ecx_2 += 3
        *(ecx_2 - 1) = 0
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

int32_t edx_5 = 1
int32_t var_30 = 1

if (edx s> 1)
    uint32_t eax_10 = i_8 * 3
    uint32_t ecx_3 = eax_10
    uint32_t var_1c_1 = eax_10
    
    do
        char* eax_13 = *arg1 + ecx_3
        int32_t ecx_4 = *(edi + 0x10)
        char* esi_3
        
        if (ecx_4 != 0)
            esi_3 = *(edi + 0x24) * edx_5 + ecx_4
        else
            esi_3 = nullptr
        
        char* ebx = esi_3
        char* edi_1
        
        if (ecx_4 != 0)
            void* edi_3 = (edx_5 - 1) * *(var_2c + 0x24)
            edx_5 = var_30
            edi_1 = edi_3 + ecx_4
        else
            edi_1 = nullptr
        
        *eax_13 = *edi_1 - *esi_3
        eax_13[1] = edi_1[1] - esi_3[1]
        void* edi_4 = &edi_1[ebp_3]
        void* esi_6 = &esi_3[ebp_3]
        eax_13[2] = edi_1[2] - esi_3[2]
        i_6 = &eax_13[3]
        
        if (ecx s> 1)
            int32_t i_5 = ecx - 1
            int32_t i_2
            
            do
                *i_6 = ((zx.d(*ebx) + zx.d(*edi_4)) u>> 1).b - *esi_6
                *(i_6 + 1) = ((zx.d(ebx[1]) + zx.d(*(edi_4 + 1))) u>> 1).b - *(esi_6 + 1)
                uint32_t edx_13 = zx.d(ebx[2])
                ebx = &ebx[ebp_3]
                uint32_t ecx_12 = zx.d(*(edi_4 + 2))
                edi_4 += ebp_3
                uint8_t edx_15 = ((edx_13 + ecx_12) u>> 1).b - *(esi_6 + 2)
                esi_6 += ebp_3
                *(i_6 + 2) = edx_15
                i_6 += 3
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            edx_5 = var_30
        
        if (i_10 != 0)
            uint32_t i_7 = i_10
            uint32_t i_3
            
            do
                *i_6 = 0
                i_6 += 3
                *(i_6 - 1) = 0
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        edx_5 += 1
        ecx_3 = var_1c_1 + eax_10
        edi = var_2c
        var_30 = edx_5
        var_1c_1 = ecx_3
    while (edx_5 s< edx)

if (ebp_1 u> 0)
    i_6 = ((edx + ebp_1) * 3 - 3) * i_8 + *arg1
    
    if (i_8 s> 0)
        uint32_t i_4
        
        do
            *i_6 = 0
            i_6 += 3
            *(i_6 - 1) = 0
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)

i_6.b = 1
return i_6
